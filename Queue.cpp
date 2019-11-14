//
// Created by Nathan Maynard on 11/12/19.
//

#include "Queue.h"

Queue::Queue() {
    head = nullptr;
    tail = nullptr;
}

void Queue::enqueue_tail(Data D) {
    Node* tempNode = new Node(D, nullptr);

    if (head == nullptr) { //First node in queue
        head = tempNode;
        tail = tempNode;
    }
    else {
        tail ->next = tempNode;
        tail = tempNode;
    }
}

bool Queue::dequeue_head(ostream& out) {
    if (head == nullptr && tail == nullptr) { //If queue is empty
        return false;
    }
    else if (head == tail) { //If there is one node in queue
        Node* current = head;
        head ->next = nullptr;
        tail ->next = nullptr;
        out << current ->data; //Print to output
        return false;
    }
    else {
        Node* current = head;
        head = head ->next;
        out << current ->data; //Print to output
        delete current;
        return true;
    }
}