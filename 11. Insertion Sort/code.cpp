#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {

    for(int i=1; i<n; i++) {  // since we are supposing 0th index sorted
        
        int j = i-1;
        int temp = arr[i];

        for(; j>=0; j--) {

            if(arr[j] > temp) {       // comparing present value of i with original 0th index i 
            //shift
                arr[j+1] = arr[j];    // simply copy value of next element with arr[j] behind i
            }
            else {
                // stop because this one would be bigger than other elements in left
                break;
            }
        }
        arr[j+1] = temp;
    }
}

void printArray(int arr[], int n) {

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};
    insertionSort(arr, 7);
    printArray(arr, 7);
}