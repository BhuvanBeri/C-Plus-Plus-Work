// what is pass by value?

#include<iostream>
using namespace std;

void dummy (int n) {          // this n is just a duplicate of original n (passed by value)
                                // thus it is having different storage
    n++;                        // Here this n got incremented as 16 but will remain in this storage
    cout << "n is " << n << endl;
}

int main () {

    int n;
    cin >> n;                 // this n is different (use different storage)

    dummy(n);

    cout << "number n is " << n << endl;    // the changes made in the other duplicate storage n won't reflect here
                                            // until you use return function to return the passed value back to original storage
    return 0;
}