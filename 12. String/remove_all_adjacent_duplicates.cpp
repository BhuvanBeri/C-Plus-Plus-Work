#include<iostream>
#include<vector>
using namespace std;

string remove(string s) {

    vector<int>st;

    for (int i = 0; i<s.length(); i++)
        {
            if(st.empty())              // if st is empty then add string[i]
                
                st.push_back(s[i]);
            
            else if(st.back()==s[i])    // if last element of st is same with string[i], remove it
                
                st.pop_back();
            
            else
                
                st.push_back(s[i]);
        }
        string ans(st.begin(),st.end());  // read full string from begin to end
    return ans;
}

int main()
{
    string str = ("daabcbaabcbc");

    cout << remove(str) << endl;
}