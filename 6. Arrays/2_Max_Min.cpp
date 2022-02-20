#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMax(int num[], int size) {

    int max = INT_MIN;

    for(int i = 0; i < size; i++) {
        if(num[i] > max) {
            max = num[i];
        }
    }
    return max;
}

int main() {

    int size;
    cin >> size;

    int num[100];

    for( int i = 0; i < size; i++ ) {
        cin >> num[i];
    }
    cout << "Maximum value is " << getMax(num, size) << endl;
}