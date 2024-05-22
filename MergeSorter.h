// ---------------------------------------------------------------------------
// Name: Khant Khine
// Course-Section: CS355-Section 1
// Assignment: Project 5
// Date due: 05/01/2024
// Description: This is the class MergeSorter which is a child class of Sorter class. It sorts the
//              private attribute access using Merge Sort, and counts how many comparisons were made.
// ---------------------------------------------------------------------------
#include "Sorter.h"

template <class T>
class MergeSorter : public Sorter<T>
{
    public:
        //---------------------------------------------------------------------------
        /* MergeSorter(T*, int) is a template constructor of the MergeSorter class. It calls the base class
         * constructor.
         *     INCOMING DATA: Template pointer, integer.
         *     OUTGOING DATA: None. The private attributes are set from input, mode is set to 0, through
         *                    base class constructor.
         */
        MergeSorter(T *p, int s) : Sorter<T>(p, s) {}

        //---------------------------------------------------------------------------
        /* Sort() is a method that is overwritten from the base class purely virtual method. It sorts
         * the attribute access with MergeSort.
         *     INCOMING DATA: None.
         *     OUTGOING DATA: None. Access is sorted by MergeSort.
         */
        virtual void Sort() const override
        {
            //Mode 1 is for randomly inserted Access.
            if(this->getMode()==1)
            {
                cout<<"Number of comparisons for random elements: "<<mergeSort(this->getAccess(), 0, this->getSize() - 1)<<endl;
            }

            //Mode 2 is for randomly in order Access.
            else if(this->getMode()==2)
            {
                cout<<"Number of comparisons for in-order elements: "<<mergeSort(this->getAccess(), 0, this->getSize() - 1)<<endl;
            }

            //Mode 3 is for randomly reverse order Access.
            else if(this->getMode()==3)
            {
                cout<<"Number of comparisons for reverse order elements: "<<mergeSort(this->getAccess(), 0, this->getSize() - 1)<<endl;
            }
        }

        //---------------------------------------------------------------------------
        /* mergeSort(T*, int, int) is a method that uses recursion to sort access with merge sort.
         *     INCOMING DATA: Template pointer, int, int.
         *     OUTGOING DATA: None. Access is sorted by MergeSort.
         */
        int mergeSort(T *arr, int l, int r) const
        {
            int compa = 0; // Comparison counter is set to 0.
            if (l < r)  //If left input position is less than right input position, this executes.
            {
                int m = l + (r - l) / 2;    //Find middle position

                // Recursion to divide array into subarrays
                compa = compa + mergeSort(arr, l, m);   //Sort from beginning to middle position
                compa = compa + mergeSort(arr, m + 1, r);   //Sort from after middle position to end position
                compa = compa + merge(arr, l, m, r); // Merge the sorted subarrays
            }
            return compa;   //return number of comparisons
        }

        //---------------------------------------------------------------------------
        /* merge(T*, int, int, int) is a method that merges two sub arrays.
         *     INCOMING DATA: Template pointer, int, int, int.
         *     OUTGOING DATA: None. Two sub arrays are merged.
         */
        int merge(T *arr, int l, int m, int r) const
        {
            int comp = 0;   // Comparison counter is set to 0.
            int n1 = m - l + 1; //Size of first sub array.
            int n2 = r - m; //Size of second sub array.

            // Create two temporary arrays
            T Left[n1], Right[n2];

            // Data is copied from arr to sub arrays.
            for (int i = 0; i < n1; i++)
            {
                Left[i] = arr[l + i];
            }

            for (int j = 0; j < n2; j++)
            {
                Right[j] = arr[m + 1 + j];
            }

            // Merge the temporary arrays back into arr.
            int i = 0;
            int j = 0;
            int k = l;
            while (i < n1 && j < n2)
            {
                comp++; // Comparison is increased.

                if (Left[i] <= Right[j])
                {
                    arr[k] = Left[i];   //Place smaller value element in main array.
                    i++;    //Move to next index in left array.
                }

                else
                {
                    arr[k] = Right[j];  //Place smaller value element in main array.
                    j++;    //Move to next index in right array.
                }

                k++;    //Move to next index in main array.
            }

            // Copy the elements left in the left sub array.
            while (i < n1)
            {
                arr[k] = Left[i];   //Copy elements in left sub array to main array.
                i++;    //Move to next index in left array.
                k++;    //Move to next index in main array.
            }

            // Copy the elements left in the right sub array.
            while (j < n2)
            {
                arr[k] = Right[j];  //Copy elements in right sub array to main array.
                j++;    //Move to next index in right array.
                k++;    //Move to next index in main array.
            }

            return comp;    //Return the number of comparisons.
        }
};
