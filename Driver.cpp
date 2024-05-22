// ---------------------------------------------------------------------------
// Name: Khant Khine
// Course-Section: CS355-Section 1
// Assignment: Project 5
// Date due: 05/01/2024
// Description: This program utilizes base class Sorter, and its children classes MergeSorter, SelectionSorter, and
//              InsertionSorter to
// ---------------------------------------------------------------------------
#include <iostream>
#include "MergeSorter.h"
#include "SelectionSorter.h"
#include "InsertionSorter.h"

using namespace std;

int main() {

    const int size = 10;    //Sets the size of array.

    // Arrays for random, ordered and reverse.
    int* arrRandom = new int[size];
    int* arrOrdered = new int[size];
    int* arrReverse = new int[size];

    //********** Merge Sort **********//

    //MergeSorter instances are called for different insertion of values.
    MergeSorter<int> mergeSorterRandom(arrRandom, size);    //MergeSorter instance for random insertion.
    MergeSorter<int> mergeSorterOrdered(arrOrdered, size);  //MergeSorter instance for in order insertion.
    MergeSorter<int> mergeSorterReverse(arrReverse, size);  //MergeSorter instance for reverse order insertion.

    //Perform the different insertions and set modes to reflect the type of insertion.

    //Random Insertion
    mergeSorterRandom.FillRandom(); //Randomly inserted
    mergeSorterRandom.setMode(1);   //Mode set to 1 for random insertion
    //In Order Insertion
    mergeSorterOrdered.FillInOrder();   //Inserted in order
    mergeSorterOrdered.setMode(2);  //Mode set to 2 for in order insertion
    //Reverse Order Insertion
    mergeSorterReverse.FillReverse();   //Inserted in reverse
    mergeSorterReverse.setMode(3);  //Mode set to 3 for reverse insertion

    //Display the number of comparisons made for random, in order, and reverse.
    cout<<"Merge Sort Results for N = "<<size<<endl;
    cout<<"-----------------------------------"<<endl;
    mergeSorterRandom.Sort();   //Random sort
    mergeSorterOrdered.Sort();  //In order sort
    mergeSorterReverse.Sort();  //Reverse order sort
    cout<<endl;

    //********** Selection Sort **********//

    //SelectionSorter instances are called for different insertion of values.
    SelectionSorter<int> selectionSorterRandom(arrRandom, size);    //SelectionSorter instance for random insertion.
    SelectionSorter<int> selectionSorterOrdered(arrOrdered, size);  //SelectionSorter instance for in order insertion.
    SelectionSorter<int> selectionSorterReverse(arrReverse, size);  //SelectionSorter instance for reverse order insertion.

    //Perform the different insertions and set modes to reflect the type of insertion.

    //Random Insertion
    selectionSorterRandom.FillRandom(); //Randomly inserted
    selectionSorterRandom.setMode(1);   //Mode set to 1 for random insertion
    //In Order Insertion
    selectionSorterOrdered.FillInOrder();   //Inserted in order
    selectionSorterOrdered.setMode(2);  //Mode set to 2 for in order insertion
    //Reverse Order Insertion
    selectionSorterReverse.FillReverse();   //Inserted in reverse
    selectionSorterReverse.setMode(3);  //Mode set to 3 for reverse insertion

    //Display the number of comparisons made for random, in order, and reverse.
    cout<<"Selection Sort Results for N = "<<size<<endl;
    cout<<"-----------------------------------"<<endl;
    selectionSorterRandom.Sort();   //Random sort
    selectionSorterOrdered.Sort();  //In order sort
    selectionSorterReverse.Sort();  //Reverse order sort
    cout<<endl;

    //********** Insertion Sort **********//

    //InsertionSorter instances are called for different insertion of values.
    InsertionSorter<int> insertionSorterRandom(arrRandom, size);    //InsertionSorter instance for random insertion.
    InsertionSorter<int> insertionSorterOrdered(arrOrdered, size);  //InsertionSorter instance for in order insertion.
    InsertionSorter<int> insertionSorterReverse(arrReverse, size);  //InsertionSorter instance for reverse order insertion.

    //Perform the different insertions and set modes to reflect the type of insertion.

    //Random Insertion
    insertionSorterRandom.FillRandom(); //Randomly inserted
    insertionSorterRandom.setMode(1);   //Mode set to 1 for random insertion
    //In Order Insertion
    insertionSorterOrdered.FillInOrder();   //Inserted in order
    insertionSorterOrdered.setMode(2);  //Mode set to 2 for in order insertion
    //Reverse Order Insertion
    insertionSorterReverse.FillReverse();   //Inserted in reverse
    insertionSorterReverse.setMode(3);  //Mode set to 3 for reverse insertion

    //Display the number of comparisons made for random, in order, and reverse.
    cout<<"Insertion Sort Results for N = "<<size<<endl;
    cout<<"-----------------------------------"<<endl;
    insertionSorterRandom.Sort();   //Random sort
    insertionSorterOrdered.Sort();  //In order sort
    insertionSorterReverse.Sort();  //Reverse order sort

    // Deallocate the arrays
    delete[] arrRandom;     //Deallocate arrRandom.
    delete[] arrOrdered;    //Deallocate arrOrdered.
    delete[] arrReverse;    //Deallocate arrReverse.

    return 0;
}
