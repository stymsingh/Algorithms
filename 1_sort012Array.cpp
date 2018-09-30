#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort012(int *arr, int size)
{
    int low = 0;
    int high = size - 1;
    int mid = 0;
    while (mid <= high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(&arr[low++], &arr[mid++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(&arr[mid], &arr[high--]);
            break;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted Array: " << endl;
    printArray(arr, size);
    sort012(arr, size);
    cout << "\nSorted Array: " << endl;
    printArray(arr, size);
}