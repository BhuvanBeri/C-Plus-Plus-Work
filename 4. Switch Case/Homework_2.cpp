// Why continue is not valid in a switch case?

#include<iostream>
using namespace std;

int main() {

    int num = 1;

    switch (num) {

        case 0: cout << " Case 0" << endl;
        continue;                              // thus we get a error using continue as it can only be used in loops

    }
}