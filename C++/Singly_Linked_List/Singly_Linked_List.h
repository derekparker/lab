#ifndef Singly_Linked_List_H_
#define Singly_Linked_List_H_

class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    int length(){ return nodes; }
    int find(int data);
    void append(int data);
private:
    struct Node {
        Node *next;
        int   data;
    };
    Node *first;
    Node *last;
    int nodes;
};

#endif
