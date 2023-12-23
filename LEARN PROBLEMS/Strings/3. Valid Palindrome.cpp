//Ignore non-alphanumeric and check if remaining makes up for a palindrome or not

#include<bits/stdc++.h>
using namespace std;

//ignore non alphanumeric
bool validChar(char ch){

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
        return true;
    }

    return false;
}

char toLowerCase(char ch){
    if((ch >= 'a' && ch <= 'z')  || (ch >= '0' && ch <= '9')){
        return ch;
    }
    else{
        return (ch - 'A' + 'a');
    }
}

bool isPalindrome(string temp){
    //two pointer approach

    int s = 0;
    int e = temp.length()-1;

    while(s <= e){
        if(temp[s++] != temp[e--])
            return false;
    }

    return true;
}

int main(){

    // string input = "race a car";
    string input = "A man, a plan, a canal: Panama";

    //taking O(N) space, TRY AGAIN FOR O(1)
    string temp = "";

    for(int i=0; i<input.length(); i++){
        if(validChar(input[i]))
            temp.push_back(input[i]);
    }

    //convert to lowercase for checking palindrome
    for(int i=0; i<temp.length(); i++){
        temp[i] = toLowerCase(temp[i]);
    }

    //check for Palindrome
    cout << isPalindrome(temp);

    return 0;
}