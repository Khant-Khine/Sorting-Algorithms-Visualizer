// ---------------------------------------------------------------------------
// Name: Khant Khine
// Course-Section: CS355-Section 1
// Assignment: Project 5
// Date due: 05/01/2024
// Description: This is the class InsertionSorter which is a child class of Sorter class. It sorts the
//              private attribute access using Insertion Sort, and counts how many comparisons were made.
// ---------------------------------------------------------------------------
#include "Sorter.h"

template <class T>
class InsertionSorter : public Sorter<T>
{
public:
        //---------------------------------------------------------------------------
        /* InsertionSorter(T*, int) is a template constructor of the InsertionSorter class. It calls the base class
         * constructor.
         *     INCOMING DATA: Template pointer, integer.
         *     OUTGOING DATA: None. The private attributes are set from input, mode is set to 0, through
         *                    base class constructor.
         */
        InsertionSorter(T *p, int s) : Sorter<T>(p, s) {}

        //---------------------------------------------------------------------------
        /* Sort() is a method that is overwritten from the base class purely virtual method. It sorts
         * the attribute access with InsertionSort.
         *     INCOMING DATA: None.
         *     OUTGOING DATA: None. Access is sorted by InsertionSort.
         */
        virtual void Sort() const override
        {
            //Mode 1 is for randomly inserted Access.
            if (this->getMode() == 1)
            {
                cout << "Number of comparisons for random elements: " << insertionSort(this->getAccess(), this->getSize()) << endl;
            }

            //Mode 2 is for randomly in order Access.
            else if (this->getMode() == 2)
            {
                cout << "Number of comparisons for in-order elements: " << insertionSort(this->getAccess(), this->getSize()) << endl;
            }

            //Mode 3 is for randomly reverse order Access.
            else if (this->getMode() == 3)
            {
                cout << "Number of comparisons for reverse order elements: " << insertionSort(this->getAccess(), this->getSize()) << endl;
            }
        }

        //---------------------------------------------------------------------------
        /* insertionSort(T*, int, int) is a method that sort access with insertion sort.
         *     INCOMING DATA: Template pointer, int, int.
         *     OUTGOING DATA: None. Access is sorted by InsertionSort.
         */
        int insertionSort(T *arr, int n) const
        {
            int comp = 0; // Comparison counter is set to 0.

            for (int i = 1; i < n; i++)
            {
                T key = arr[i]; //Current element is stored to be compared.
                int j = i - 1;  //Get the index of the previous element.

                while (j >= 0 && arr[j] > key)
                {
                    comp++; //Comparison counter is increased.
                    arr[j + 1] = arr[j];    //Shift to right if it is greater than the current index.
                    j--;    //Move to previous index for continuing comparisons.
                }
                arr[j + 1] = key;   //Place the current element in correct position.
            }
            return comp;    //Return the number of comparisons.
        }
};

