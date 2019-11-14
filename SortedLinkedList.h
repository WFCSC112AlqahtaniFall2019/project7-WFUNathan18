//
// Created by Nathan Maynard on 11/12/19.
//

#ifndef PROJECT7_SORTEDLINKEDLIST_H
#define PROJECT7_SORTEDLINKEDLIST_H
#include "LinkedList.h"

class SortedLinkedList : public LinkedList {
public:
    SortedLinkedList();
    void insertSorted(Data D);
    void PrintSortedList(ostream& out);
};

#endif //PROJECT7_SORTEDLINKEDLIST_H
