//Arithmetic Progression

#include<iostream>
using namespace std;

int arith_progression(int n) {

    int ap;
    ap = (3 * n + 7);
    return ap;
}

int main()
{

    int n;
    cin >> n;

    cout << "Arith Progression: " << arith_progression(n) << endl;

    return 0;

}