// ex- arr = 7 9 1 2 3
// here it is having 7 9 as sorted and 1 2 3 as sorted again and can say it is 
// in rotated position too. here we can consider it as 2 lines
// one line with start position and second line with end position.
// In second line mid value would be at the very beginning thus based on this
// we made this program

#include<iostream>
using namespace std;

int getPivot(int arr[], int n){

    int s = 0;
    int e = n-1;
    int mid = s + (e - s)/2;

    while(s < e) {

        if(arr[mid] >= arr[0]) 
        {
            s = mid + 1;
        }
        else 
        {
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;        // even return e would give same value because both end up at same index
}

int main()
{
    int arr[5] = {3, 8, 10, 17, 1};
    cout << "Pivot in the array is at index: " << getPivot(arr, 5) << endl;
}