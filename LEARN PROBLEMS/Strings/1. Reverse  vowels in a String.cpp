// Reverse all the vowels present in a string

#include<bits/stdc++.h>
using namespace std;

bool isVowel(char ch){
    // cout << ch << endl;
    string vowels = "aeiouAEIOU";
    // O(N*M) :: same as finding by loop
    for(int i=0; i<vowels.length(); i++){
        if(vowels[i] == ch)
            return true;
    }

    return false;
}
string reverseVowels(string str){

    //two pointer approach
    int st = 0;
    int en = str.size()-1;

    //not (st <= en)
    while(st < en){

        if(isVowel(str[st]) && isVowel(str[en])){
            // cout << "swapp :" << str[st] << str[en] <<endl;
            swap(str[st], str[en]);
            st++;
            en--;
        } 

        // cout << "cursor :" << str[st] << str[en] <<endl;
        if(!isVowel(str[st])){
            st++;
        } 
        if(!isVowel(str[en])){
          en--;  
        } 
    }

    return str;
}

int main(){

    string str = "race a car"; //"race a car"
    string revStr = reverseVowels(str);

    cout << revStr << endl;


    return 0;
}

