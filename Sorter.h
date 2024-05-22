// ---------------------------------------------------------------------------
// Name: Khant Khine
// Course-Section: CS355-Section 1
// Assignment: Project 5
// Date due: 05/01/2024
// Description: This is the class Sorter which is to be used as the base class for
//              other sorting algorithms. It has three attributes, template pointer access,
//              size of integer type, and mode which determines whether an instance of Sorter
//              has been filled randomly, filled in order, or filled in reverse. Therefore, it
//              has methods for resetting, printing, different types of filling, getting and
//              accessing modes, as well as a pure virtual sort method, to be implemented in
//              all children classes.
// ---------------------------------------------------------------------------
#ifndef SORTER_H
#define SORTER_H

#include<iostream>
using namespace std;

template <class T>
class Sorter
{
    private:
        T* access;  //Template pointer access to fill randomly, in order, or reverse order
        int size;   //Size of template pointer access
        int mode;   //Mode on whether access was filled randomly, in order, or in reverse

    public:

        //---------------------------------------------------------------------------
        /* Sorter(T*, int) is a template constructor of the Sorter class. It assigns the inputs to
         * private attributes access and size. Mode is set to 0 for access having not been
         * filled in yet.
         *     INCOMING DATA: Template pointer, integer.
         *     OUTGOING DATA: None. The private attributes are set from input, mode is set to 0.
         */
        Sorter(T* p, int s)
        {
            access=p;
            size=s;
            mode=0;
        }

        //---------------------------------------------------------------------------
        /* Reset(T*, int) is a template method of the Sorter class. It assigns the inputs to
         * private attributes access and size. Mode is set to 0 for access having not been
         * filled in yet.
         *     INCOMING DATA: Template pointer, integer.
         *     OUTGOING DATA: None. The private attributes are set from input, mode is set to 0.
         */
        void Reset(T* p, int s)
        {
            access = p;
            size = s;
            mode=0;
        }

        //---------------------------------------------------------------------------
        /* Print() is a method of the Sorter class. It displays the access attribute.
         *     INCOMING DATA: None.
         *     OUTGOING DATA: None. Attribute access is displayed.
         */
        void Print() const
        {
            for (int i = 0; i < size; ++i)
            {
                cout << access[i] << " ";
            }
            cout<<endl;
        }

        //---------------------------------------------------------------------------
        /* Sort() is a purely virtual method which will be required to be implemented by
         * children classes.
         *     INCOMING DATA: None.
         *     OUTGOING DATA: None.
         */
        virtual void Sort() const= 0;


        //---------------------------------------------------------------------------
        /* FillRandom() is a method of the Sorter class. It fills in the attribute access randomly
         * with the the number of attribute size.
         *     INCOMING DATA: None.
         *     OUTGOING DATA: None. Attribute access is filled in randomly with the number of attribute size.
         */
        void FillRandom() const
        {
            for (int i = 0; i < size; i++)
            {
                access[i] = rand() % size;
            }
        }

        //---------------------------------------------------------------------------
        /* FillInOrder() is a method of the Sorter class. It fills in the attribute access in order
         * with the the number of attribute size.
         *     INCOMING DATA: None.
         *     OUTGOING DATA: None. Attribute access is filled in order with the number of attribute size.
         */
        void FillInOrder() const
        {
            for (int i = 0; i < size; i++)
            {
                access[i] = i;
            }
        }

        //---------------------------------------------------------------------------
        /* FillReverse() is a method of the Sorter class. It fills in the attribute access in reverse
         * with the the number of attribute size.
         *     INCOMING DATA: None.
         *     OUTGOING DATA: None. Attribute access is filled in reverse with the number of attribute size.
         */
        void FillReverse() const
        {
            int j=0;
            for (int i = size-1 ; i >= 0; i--)
            {
                access[j] = i;
                j++;
            }
        }

        //---------------------------------------------------------------------------
        /* getAccess() is a method of the Sorter class. It returns the attribute access.
         *     INCOMING DATA: None.
         *     OUTGOING DATA: Template pointer. Attribute access is returned.
         */
        T* getAccess()const
        {
            return access;
        }


        //---------------------------------------------------------------------------
        /* getSize() is a method of the Sorter class. It returns the attribute size.
         *     INCOMING DATA: None.
         *     OUTGOING DATA: Integer. Attribute size is returned.
         */
        int getSize()const
        {
            return size;
        }

        //---------------------------------------------------------------------------
        /* getMode() is a method of the Sorter class. It returns the attribute mode.
         *     INCOMING DATA: None.
         *     OUTGOING DATA: Integer. Attribute mode is returned.
         */
        int getMode()const
        {
            return mode;
        }

        //---------------------------------------------------------------------------
        /* setMode(int) is a method of the Sorter class. It sets the attribute mode.
         *     INCOMING DATA: Integer.
         *     OUTGOING DATA: None. Attribute mode is set to input.
         */
        void setMode(int input)
        {
            mode=input;
        }
};
#endif
