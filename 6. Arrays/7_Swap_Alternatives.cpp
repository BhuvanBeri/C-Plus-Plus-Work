#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size) {

    for(int i=0; i<size; i+=2) {                  // i is incrementing the array index by 2
        if(i+1 < size) {                         // if i+1 is less than total size of array, it means we have element spared to swap
            swap(arr[i], arr[i+1]);             // swapped i with i+1 and then after loop ending moved to i+2 
        }
    }
}
void printArray(int arr[], int size) {

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// alternative to swap method built in

void swapMethodInternalWorking(int arr[], int size) {   // this is the basic functioning of the prebuilt in method known as swap

    for(int i=0; i<size; i++) {
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
    }
    cout << arr[size] << " ";
    cout << endl;
}

int main() {

    int even[8] = {0,1,2,3,4,5,6,7};   // make it {1,0,3,2,5,4,7,6}
    int odd[5] = {0,1,2,3,4};           // make it {1,0,3,2,4}

    swapAlternate(even, 8);
    printArray(even, 8);

    return 0;
}