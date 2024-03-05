#include "SingleLinkedList.h"

SingleLinkedList::SingleLinkedList(){
    front = NULL;
    back = NULL;
    size = 0;
}

SingleLinkedList::~SingleLinkedList() {
    ListNode *current = front;
    while (current != nullptr) {
        ListNode *temp = current;
        current = current->next;
        delete temp;
    }
    front = nullptr;
    back = nullptr;
    size = 0;
}

void SingleLinkedList::insertFront(int d){
    ListNode *node = new ListNode(d);
    if(isEmpty()){
        back = node;
    }
    node->next = front;
    front = node;
    size++;
}

void SingleLinkedList::insertBack(int d){
    ListNode *node = new ListNode(d);
    if(isEmpty()){
        front = node;
    }
    back->next = node;
    back = node;
    size++;
}

bool SingleLinkedList::isEmpty(){
    return (size==0);
}

int SingleLinkedList::removeFront(){
    if(isEmpty()){
        cerr << "List is empty" << endl;
        return -1;
    }

    int temp = front->data;
    ListNode *ft = front;
    front = front->next;

    ft->next = NULL;
    delete ft;

    size--;
    return temp;
}

int SingleLinkedList::find(int value){
    int pos = -1;
    ListNode *curr = front;

    while(curr != NULL){
        ++pos;
        if (curr->data == value){
            break;
        }
        curr = curr->next;
    }

    if (curr == NULL){
        pos = -1;
    }

    return pos;
}

int SingleLinkedList::deletePos(int pos){
    if(isEmpty() || pos < 0 || pos >= size){
        cerr << "Invalid position or list is empty" << endl;
        return -1;
    }

    int temp;
    if (pos == 0) {
        temp = front->data;
        ListNode *tempNode = front;
        front = front->next;
        delete tempNode;
    } else {
        ListNode *prev = front;
        for (int i = 0; i < pos - 1; ++i) {
            prev = prev->next;
        }
        ListNode *tempNode = prev->next;
        prev->next = tempNode->next;
        temp = tempNode->data;
        delete tempNode;
    }

    --size;
    return temp;
}


unsigned int SingleLinkedList::getSize(){
    return size;
}