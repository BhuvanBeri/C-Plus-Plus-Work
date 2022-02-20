#include<iostream>
using namespace std;

void update(int arr[], int size) {        // here int arr[] means we gave address of original array
    cout << "Inside the function" << endl;   // thus working on original value directly. This happens in array but not in normal int data since there we use pass by value function.

    //Updating arrays first element
    arr[0] = 120;                        // thus this change gets reflected in original arr too.

    for(int i = 0; i < 3; i++) {
        cout << arr[i] << endl;
    } 
    cout << endl;

    cout << "Going back to the main function" << endl;
}

int main() {

    int arr[3] = {1,2,3};     // since arr[3] means arr is base address with total index upto 3.

    update(arr,3);

    cout << "Printing the main function" << endl;
    for(int i=0; i<3; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}