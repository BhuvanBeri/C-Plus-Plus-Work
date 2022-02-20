#include<iostream>
using namespace std;

//Function Signature        
void printCounting(int n) {   // <- note: Formal Arguments

    for(int i=1; i<=n; i++) {  // <- note: Function Body
        cout << i << " ";
    }
}

int main() {

    int n;
    cin >> n;

    printCounting(n);  // Function call with actual arguments

    return 0;
}