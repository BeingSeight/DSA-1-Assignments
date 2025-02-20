/* Create a program for Selection Sort using Class Concept. 
Trace the code and see the output */

#include <iostream>
using namespace std;

class SelectionSort {
public:
    void selectionSort(int arr[], int n)
    {
        int i, j, minIndex, temp;
        for (i = 0; i < n - 1; i++)
        {
            minIndex = i;
            for (j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[minIndex])
                {
                    minIndex = j;
                }
            }
            temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
};

int main()
{
    SelectionSort obj;
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    obj.selectionSort(arr, n);
    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}