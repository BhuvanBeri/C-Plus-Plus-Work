// Print sum of all elements in an array

#include<iostream>
using namespace std;

int sumOfArray(int arr[], int size) {

    int sum = 0;
    for(int i = 0; i < size; i++) {
        
        sum = sum + arr[i];
    }
    return sum;
}

int main() {

    int arr[100];
    cout << "Enter size of array" << endl;
    int size;
    cin >> size;

    cout << "Enter the elements of an array" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "The sum of the elements of an array is: " << sumOfArray(arr,size) << endl;
    return 0;
}