#include<iostream>
using namespace std;

 long long int sqrtInteger(int n) {  // gives value of integer square
        
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

double morePrecision(int n, int precision, int tempSol) {   // from square of integer it checks from n to precision in form of .1 or .01 etc to give more precision to answers
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) { 
        factor = factor/10;               // at this point normal number 1 is made to be 0.1 so as to act as precision

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}