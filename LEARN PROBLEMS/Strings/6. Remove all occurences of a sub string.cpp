//Leetcode problem 1910

#include<bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part) {
        // DO AGAIN with Recursion
        while(s.length() !=0 && s.find(part) < s.length()){
            s.erase(s.find(part), part.length());
        }

        return s;
}
int main(){
    string str = "daabcbaabcbc";
    string part = "abc";

    cout << removeOccurrences(str, part);
    return 0;
}