#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing Done " << endl;
    cout << endl;
}

void charprintArray(char arr[], int size) { 
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing Done " << endl;
    cout << endl;
}

int main() {

    int number[15];   // declare array

    cout << "Value at 14 index " << number[14] << endl;
    cout << "Value at 20 index " << number[20] << endl;

    //initialize arrays 

    int second[3] = {5, 7, 11};
    int third[15] = {2, 7};

    cout << "Value at 2nd index is " << second[2] << endl;

    int n = 3;
    //print array
    for ( int i=0; i<n; i++) {
        cout << third[i] << " ";
    }
    cout << endl;

    int array[12] = {1};
    printArray(array, 12);
    cout << endl;

    // to make all indexes with any given value
    int arr[10];
    fill_n(arr,10,1);
    printArray(arr, 10);

    char ch[5] = {'A', 'B', 'C', 'D', 'E'};
    cout << ch[4] << endl;
    charprintArray(ch,5);
}