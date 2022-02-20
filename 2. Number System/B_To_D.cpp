// Binary to Decimal

#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int num;
    cin >> num;

    int ans = 0;
    int i = 0;

    while(num != 0) {
                                        // modulus of 10 is used to seperate last digit of number to be solved individually
        int digit = num % 10;                // took digit here cause our entered binary number will be 
                                            // considered as decimal by computer and will make each
        ans = (digit * pow(2, i)) + ans;   // number as in binary again, thus we won't solve bitwise, rather work on every digit entered oneby one.

        num = num / 10;             // dividing number by 10 to remove the last digit of number.
        i++;

    }
    cout << ans << endl;
    return 0;
}