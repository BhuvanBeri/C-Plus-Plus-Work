// in codestudio too
// replace space with @40 in a string

#include<iostream>
using namespace std;

string replace(string str) {
    string temp = "";

    for(int i=0; i<str.length(); i++) {
        if(str[i] == ' ') {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else {
            temp.push_back(str[i]);
        }
    }
    return temp;
}

int main()
{
    string str = ("Hello Who are you");
    cout << replace(str) << endl;
}