#include<iostream>
using namespace std;

void fib (int n) {

    int a = 0;
    int b = 1;

    cout << a << " " << b <<" ";

    for(int i=2; i<n; i++) {

        int new_value = a+b;
        a = b;
        b = new_value;
        cout << new_value << " ";
    }
    return;
}

int main() {

    int n;
    cin >> n;

    cout << "The " << n <<"th term of the series is = ";
    fib(n);
    return 0;
}