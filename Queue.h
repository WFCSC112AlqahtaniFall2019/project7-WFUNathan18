//
// Created by Nathan Maynard on 11/12/19.
//

#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H
#include "LinkedList.h"

class Queue : public LinkedList {
public:
    Queue();
    void enqueue_tail(Data D);
    bool dequeue_head(ostream& out);
private:
    Node* tail;
};

#endif //PROJECT7_QUEUE_H
