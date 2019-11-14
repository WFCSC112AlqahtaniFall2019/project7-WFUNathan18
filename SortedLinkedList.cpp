//
// Created by Nathan Maynard on 11/12/19.
//

#include "SortedLinkedList.h"

SortedLinkedList::SortedLinkedList() {
    head = nullptr;
}

void SortedLinkedList::insertSorted(Data D) {
    Node* cursor = new Node(D, head);
    cursor = cursor ->next; //Intentionally move cursor one ahead of previous
    Node* previous = head;
    Node* tempCursor;

    if (head == nullptr) { //First item in list
        head = cursor;
    }

    else if (cursor ->data < previous ->data) { //If the value behind cursor is greater than current cursor
        tempCursor = head; //Start (or restart) tempCursor at beginning of list

        if (cursor ->data < head ->data) { //If head is louder (greater) than current cursor
            previous ->next = cursor ->next;
            cursor ->next = head; //Insert in front of list
            head = cursor; //Update as new head
            cursor = previous ->next; //Ensure cursor is always ahead of previous
        }

        else { //Otherwise, head is quietest (smallest) in list
            while (tempCursor ->next ->data < cursor ->data) { //Iterate through list until the value after temp
                //is less than cursor
                tempCursor = tempCursor ->next;
            }
            previous ->next = cursor ->next;
            cursor ->next = tempCursor ->next; //Insert after temp
            tempCursor ->next = cursor;
            cursor = previous ->next; //Ensure cursor is always ahead of previous
        }
    }
}

void SortedLinkedList::PrintSortedList(ostream& out) {
    Node* cursor = head;
    while (cursor) {
        out << head ->data;
        cursor = cursor ->next;
    }
}

