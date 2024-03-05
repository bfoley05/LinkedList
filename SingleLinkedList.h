#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include "ListNode.h"

class SingleLinkedList{
    private:
        ListNode *front;
        ListNode *back;
        unsigned int size;
    public:
        SingleLinkedList();
        ~SingleLinkedList();
        void insertFront(int d);
        void insertBack(int d);
        int removeFront();
        int find(int value);
        int deletePos(int pos);
        bool isEmpty();
        unsigned int getSize();
};

#endif