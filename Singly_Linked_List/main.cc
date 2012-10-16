#include <iostream>
#include "Singly_Linked_List.h"

int main(int argvc, const char **argv){
    SinglyLinkedList *list = new SinglyLinkedList();
    for (int i = 0; i < 10; i++){
        list->append(i);
    }
    std::cout << list->find(7) << std::endl;
    
    delete list;
}
