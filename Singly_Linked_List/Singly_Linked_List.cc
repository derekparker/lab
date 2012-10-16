#include <cstddef>
#include <cstdlib>
#include "Singly_Linked_List.h"

SinglyLinkedList::SinglyLinkedList(){
    first = nullptr;
    last = nullptr;
    nodes = 0;
}

void SinglyLinkedList::append(int data){
    Node *node = new Node;
    node->next = nullptr;
    node->data = data;
    
    if (first == nullptr && last == nullptr){
        first = node;
        last = node;
    } else {
        Node *oldtail = last;
        oldtail->next = node;
        last = node;
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
