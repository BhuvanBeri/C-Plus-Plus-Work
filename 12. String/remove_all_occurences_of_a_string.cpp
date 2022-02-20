// leetcode question 1910

#include<iostream>
using namespace std;

string occurences(string str, string substr) {

    while(str.length()!=0 && str.find(substr) < str.length()) {
        str.erase(str.find(substr), substr.length());
    }
    return str;
}

int main()
{
    string str = ("daabcbaabcbc");
    string substr = ("abc");

    cout << occurences(str, substr) << endl;
}