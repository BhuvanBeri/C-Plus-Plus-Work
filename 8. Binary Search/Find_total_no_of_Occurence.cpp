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

    int arr[5] = {3, 2, 4, 3, 3};
    int total_no_of_occurrences = 0;
    total_no_of_occurrences = total_no_of_occurrences + (lastOcc(arr, 5, 3) - firstOcc(arr, 5, 3)) + 1;
    cout << "Total occurrences: " << total_no_of_occurrences << endl;
}