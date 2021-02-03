/*
CH-230-A
a9_p8.c
Qais Qamhia
qqamhia@jacobs-university.de
*/
#include <iostream>
using namespace std;

// Determines the max value in an array and subtracts it of all elements
void subtract_max(int*& arr, int elem)
{
    int max = arr[0]; 
    for (int i = 1; i < elem; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < elem; i++)
    {
        arr[i] -= max;
    }
}

// Release the memory of an array
void deallocate(int*& arr)
{
    delete [] arr;
}

int main()
{
    // Read number of integers in an array from keyboard
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Allocation of an array, and getting its elements
    int* a = new int[n];
    cout << "Enter your elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    subtract_max(a, n);
    cout << "The new values of the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    deallocate(a);
    return 0;
}
