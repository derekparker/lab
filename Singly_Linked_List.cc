#include <cstddef>
#include <cstdlib>
#include "Singly_Linked_List.h"

SinglyLinkedList::SinglyLinkedList(){
    first = nullptr;
    last = nullptr;
    nodes = 0;
}

void SinglyLinkedList::append(int data){
    Node *node = (Node*)malloc(sizeof(Node));
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
	Node *current = (Node*)malloc(sizeof(Node));
	current = first;
	for (int i = 0; i < nodes; i++){
		if (current->data == data){
			return current->data;
		}
		current = current->next;
	}
}
