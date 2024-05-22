// ---------------------------------------------------------------------------
// Name: Khant Khine
// Course-Section: CS355-Section 1
// Assignment: Project 5
// Date due: 05/01/2024
// Description: This is the class SelectionSorter which is a child class of Sorter class. It sorts the
//              private attribute access using Selection Sort, and counts how many comparisons were made.
// ---------------------------------------------------------------------------
#include "Sorter.h"

template <class T>
class SelectionSorter : public Sorter<T>
{
public:
        //---------------------------------------------------------------------------
        /* SelectionSorter(T*, int) is a template constructor of the SelectionSorter class. It calls the base class
         * constructor.
         *     INCOMING DATA: Template pointer, integer.
         *     OUTGOING DATA: None. The private attributes are set from input, mode is set to 0, through
         *                    base class constructor.
         */
        SelectionSorter(T *p, int s) : Sorter<T>(p, s) {}

        //---------------------------------------------------------------------------
        /* Sort() is a method that is overwritten from the base class purely virtual method. It sorts
         * the attribute access with SelectionSort.
         *     INCOMING DATA: None.
         *     OUTGOING DATA: None. Access is sorted by SelectionSort.
         */
        virtual void Sort() const override
        {
            //Mode 1 is for randomly inserted Access.
            if (this->getMode() == 1)
            {
                cout << "Number of comparisons for random elements: " << selectionSort(this->getAccess(), this->getSize()) << endl;
            }

            //Mode 2 is for randomly in order Access.
            else if (this->getMode() == 2)
            {
                cout << "Number of comparisons for in-order elements: " << selectionSort(this->getAccess(), this->getSize()) << endl;
            }

            //Mode 3 is for randomly reverse order Access.
            else if (this->getMode() == 3)
            {
                cout << "Number of comparisons for reverse order elements: " << selectionSort(this->getAccess(), this->getSize()) << endl;
            }
        }

        //---------------------------------------------------------------------------
        /* selectionSort(T*, int, int) is a method that sort access with selection sort.
         *     INCOMING DATA: Template pointer, int, int.
         *     OUTGOING DATA: None. Access is sorted by SelectionSort.
         */
        int selectionSort(T *arr, int n) const
        {
            int comp = 0;   // Comparison counter is set to 0.

            for (int i = 0; i < n - 1; i++)
            {
                int minIndex = i;   //Minimum index is initially set to index 0, as it iterates.

                for (int j = i + 1; j < n; j++)
                {
                    comp++; //Comparison counter is increased.

                    if (arr[j] < arr[minIndex]) //If the current element is smaller than current minimum index, this executes.
                    {
                        minIndex = j;
                    }
                }

                // Swap current element with the smallest element found.
                T temp = arr[i];    //Temporarily store the data of current index.
                arr[i] = arr[minIndex]; //Current index set with data of minIndex.
                arr[minIndex] = temp;   //minIndex set with currentIndex data.
            }

            return comp;    //Return the number of comparisons.
        }
};

