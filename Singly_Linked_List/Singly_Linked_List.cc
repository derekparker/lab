#include <cstddef>
#include <cstdlib>
#include "Singly_Linked_List.h"

SinglyLinkedList::SinglyLinkedList(){
    first = nullptr;
    last = nullptr;
    nodes = 0;
}

SinglyLinkedList::~SinglyLinkedList(){
	Node *del = first;
	while (del){
		Node *next = del->next;
		delete del;
		del = next;
	}
}

void SinglyLinkedList::append(int data){
    if (first == nullptr && last == nullptr){
        first = new Node;
        first->data = data;
        first->next = nullptr;
        last = first;
    } else {
        last->next = new Node;
        last->next->data = data;
        last->next->next = nullptr;
        last = last->next;
    }
    
    ++nodes;
}

int SinglyLinkedList::find(int data){
	Node *iter;
	for (iter = first; iter->next != nullptr; iter = iter->next){
		if (iter->data == data){
			return iter->data;
		}
	}
}
