// Decimal to Binary

#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int num;
    cin >> num;

    int ans = 0; 
    int i = 0;
    while(num != 0) {

        int bit = (num & 1);              // checks one by one each bit to be 1 or 0 

        ans = (bit * pow(10, i)) + ans;   // this is the formula to help calculate binary value

        num = (num >> 1);                 // doing right shift by 1 or simply dividing num by 2 
        i++; 
    }
    cout << ans << endl;                 // code is correct, there is some issue in the c++ compiler in vs code
    return 0;
}