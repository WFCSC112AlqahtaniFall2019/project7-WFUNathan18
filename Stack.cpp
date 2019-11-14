//
// Created by Nathan Maynard on 11/12/19.
//

#include "Stack.h"

Stack::Stack() {
    head = nullptr;
}

void Stack::push_head(Data D) {
    Node* tempNode = new Node(D, head); //Add to stack
    head = tempNode; //Update head
}

bool Stack::stack_pop_head(ostream& out) {
    if (head == nullptr) {return false;} //If stack is empty, do nothing
    Node* current = head;
    head = head ->next; //Update head to node it was pointing to
    current ->next = nullptr; //Disconnect
    out << current->data; //Print data to output file
    delete current; //Remove from stack
    return true;
}