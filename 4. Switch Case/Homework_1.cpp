// How to exit the infinite loop in switch cases?

#include<iostream>
using namespace std;
int main() {

    int num = 1;

    while(1) {                            // will cause the infinite loop

        switch (num) {

            case 1: cout << "In the case 1" << endl;
            break;
        }
        exit(0);          // Exit the infinite loop
    }
    return 0;
}