// First and Last Position of an Element In Sorted Array

#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end) {

        if(arr[mid] == key) {
        ans = mid;
        end = mid - 1;         // So that we can get first occurence from left side
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else if(arr[mid] > key) {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;
    int mid = start + (end-start) / 2;
    int ans = -1;

    while(start <= end) {

        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]) {
            start = mid + 1;
        }
        else if(key < arr[mid]) {
            end = mid - 1; 
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main() {

    int even[6] = {0,1,1,3,1,5};
    int odd[5] = {0,1,1,3,1};

    cout << "First occurence of 1 is at index " << firstOcc(even, 6, 1) << endl;
    cout << "Last occurence of 1 is at index " << lastOcc(even, 6, 1) << endl;

    return 0;
}