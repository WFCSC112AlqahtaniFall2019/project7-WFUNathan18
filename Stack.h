//
// Created by Nathan Maynard on 11/12/19.
//

#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H
#include "LinkedList.h"

class Stack : public LinkedList {
public:
    Stack();
    void push_head(Data D);
    bool stack_pop_head();
};

#endif //PROJECT7_STACK_H
