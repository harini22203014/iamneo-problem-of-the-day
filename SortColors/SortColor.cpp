// selection sort
#include <bits/stdc++.h>
using namespace std;


void selectionSort(int arr[], int n)
{
    int min_idx;

   
    for (int i = 0; i < n - 1; i++) {


        min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}

}

// Driver program
int main()
{
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    selectionSort(arr, n);
    cout << "Sorted array: \n";
     for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
       
     }
    return 0;
}
