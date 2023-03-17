#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++){ // loop of traversing
        for (j = 0; j < n - i - 1; j++){ // loop of swapping
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {5, 1, 8, 4, 47, 47, 22, 78, 0, 100};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "-----------------\n";
    cout << "The Sorted array: \n";
    printArray(arr, N);
    cout << "-----------------\n";
    return 0;
}

//setprecison(n:15) الارقام بعد العلامه العشريه
//2n هنشيلها كلها عشانن فى constant