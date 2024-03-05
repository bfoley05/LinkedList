#include "SingleLinkedList.h"

using namespace std;


int main() {
    SingleLinkedList *list = new SingleLinkedList();

    list->insertFront(5);
    list->insertFront(3);
    list->insertBack(10);
    list->insertFront(7);

    cout << "Looking for 10: " << list->find(10) << endl;
    cout << "Looking for 5: " << list->find(5) << endl;

    // Remove all elements from the list
    while (!list->isEmpty()) {
        cout << "Removed from front: " << list->removeFront() << endl;
    }

    list->insertFront(34);
    list->insertFront(24);

    cout << "Deleting at pos 0: " << list->deletePos(0) << endl;


    delete list;
    return 0;
}
