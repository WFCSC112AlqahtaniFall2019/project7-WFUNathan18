#include <iostream>
#include <fstream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"
#include "SortedLinkedList.h"
using namespace std;

int main() {
    ifstream inFile;
    ofstream staFile, qFile, sorFile;
    Stack songST;
    Queue songQU;
    SortedLinkedList songSL;

    //Open files
    inFile.open("../top2018.csv");
    staFile.open("../stacked.txt");
    qFile.open("../queued.txt");
    sorFile.open("../sorted.txt");

    cout << "Now opening the necessary files..." << endl;
    if (!inFile.is_open()) {
        cout << "Error opening input file" << endl;
        return 1;
    }
    if (!staFile.is_open()) {
        cout << "Error opening stacked.txt" << endl;
        return 1;
    }
    if (!qFile.is_open()) {
        cout << "Error opening queued.txt" << endl;
        return 1;
    }
    if (!sorFile.is_open()) {
        cout << "Error opening sorted.txt" << endl;
        return 1;
    }

    for (int i = 0; i < 100; i++) {
        Data topSongs(inFile);
        songST.push_head(topSongs);
        songQU.enqueue_tail(topSongs);
        songSL.insertSorted(topSongs);
    }

    cout << "Writing stack data to stacked.txt..." << endl;
    while (songST.stack_pop_head(staFile)) {
        songST.stack_pop_head(staFile);
    }

    cout << "Writing queue data to queued.txt..." << endl;
    int i = 1;
    while (songQU.dequeue_head(qFile)) {
        songQU.dequeue_head(qFile);
    }

    cout << "Writing insert sort data to sorted.txt..." << endl;
    songSL.PrintSortedList(sorFile);

    cout << "Closing Files.." << endl;
    inFile.close();
    staFile.close();
    qFile.close();
    sorFile.close();
    return 0;
}