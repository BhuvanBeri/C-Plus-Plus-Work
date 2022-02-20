#include<iostream>
using namespace std;

void Bubble_Sort(int arr[], int n) {
    bool swapped = false;
    for(int i=0; i<n-1; i++) {
        // for round 1 to n-1

        for(int j=0; j<n-i; j++) {  // process elements till (n - i)th element
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) {  // optimized code, which will break in case array is already sorted
            break;
        }
    }
}

int printArray(int arr[], int n) {

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int arr[6] = {10, 1, 7, 6, 14, 9};
    Bubble_Sort(arr, 6);
    printArray(arr, 6);
}