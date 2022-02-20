#include<iostream>
using namespace std;

int binary_search(int arr[], int size, int key) {

    int start = 0;
    int end = size-1;

    int mid = start + (end-start) / 2; // This is the best optimized way to prevent 2^31 - 1 int overflow for long terms getting divided and added again and again

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }

        mid = start + (end-start) / 2;
    }
    return -1;
}
//          O(Log n)Time complexity which is way better than O(n) time complexity of Linear search
int main() {

    int even[6] = {0,1,2,3,4,5};
    int odd[5] = {0,1,2,3,4};

    int index = binary_search(even, 6, 5);
    cout << "Index: " << index << endl;

    return 0;
}