#include<iostream>
#include<bits/Stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int count = 1;
    char ch = 'A';

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i-1; j++) {
            
            cout << "- ";
            // ch = ch+count;
        }
        
        cout << endl;
    }
    for(int i = 0; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
    }
}