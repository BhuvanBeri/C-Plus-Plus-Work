#include<iostream>
using namespace std;

bool search(int arr[], int size, int key) {

    for(int i=0; i<size; i++) {
        int index = arr[i];

        if(key == index) {
            return true;
        }
        else {
            return false;
        }
    }
}

int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, -15, -1};

    //whether 1 is present in it or not 
    cout << "Enter the element to search for " << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if(found) {
        cout << "Found " << endl;
    }
    else {
        cout << "Nothing found" << endl;
    }


    return 0;
}