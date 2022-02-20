#include<iostream>
using namespace std;

int main() {

    int total_amount;
    cout << "Enter total amount" << endl;
    cin >> total_amount;

    int Rs100, Rs50, Rs20, Rs1;

    switch (1) {

        case 1: Rs100 = total_amount/100;
                total_amount = total_amount%100;
                cout << "Rs 100 notes needed are: " << Rs100 << endl;
        case 2: Rs50 = total_amount/50;
                total_amount = total_amount%50;
                cout << "Rs 50 notes needed are: " << Rs50 << endl;
        case 3: Rs20 = total_amount/20;
                total_amount = total_amount%20;
                cout << "Rs 20 notes needed are: " << Rs20 << endl;
        case 4: Rs1 = total_amount/1;
                total_amount = total_amount%1;
                cout<< "Re 1 notes needed are: " << Rs1 << endl;
    }
    return 0;
}