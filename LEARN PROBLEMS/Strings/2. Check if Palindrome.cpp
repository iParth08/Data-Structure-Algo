// Ignore character other than alpha-numeric and s is case-insesitive
// Now check if it is palindrome or not

#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{
    // Write your code here.
    int alpha = 0;
    for(int i=0; i<s.size(); i++){

        if( (s[i] >= 'A' && s[i] <= 'Z' ) || (s[i] >= 'a' && s[i] <= 'z')){
            s[alpha++] = tolower(s[i]);
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            s[alpha++] = s[i];
        }
    }
    int st = 0;
    int en = alpha-1;

    while(st <= en){
        if(s[st] != s[en]){
            return false;
        }
        st++;
        en--;
    }

    return true;
}

int main(){

    string s = "aaBBa@"; // ==> codeedoc

     /**
     * Test Cases
     *  6
        c1 O$d@eeD o1c
        N2 i&nJA?a& jnI2n
        A1b22Ba
        codingninjassajNiNgNidoc
        5?36@6?35
        aaBBa@

    */

    cout << s << endl;
    cout << checkPalindrome(s);
    return 0;
}