// Get maximum frequency character appearing in the string. 
// give the lexicographically smaller character
// Something like hashing
//only alphabets 


#include<bits/stdc++.h>
using namespace std;

char giveMaxOccuringChar(string str){

    //creating frequency array O(N)
    int freqArr[26] = {0}; // a or A --> 0
    int idx = 0;
    for(int i=0; i<str.length(); i++){
       
        if(str[i] >= 'a' && str[i] <= 'z')
            idx = str[i] - 'a';
        else
            idx = str[i] - 'A';

        freqArr[idx]++;
        
    }

    //get FIRST max from frequency array
    int max = 1;
    char ch;
    for(int i=0; i<26; i++){
        if(max < freqArr[i]){
            max = freqArr[i];
            ch = 'a' + i;
        }
    }

    return ch;

}
int main(){

    // string str = "testsample"; //e-2, s-2, t-2 [e]
    string str = "tttTaaa"; //e-2, s-2, t-2 [e]

    cout << giveMaxOccuringChar(str);

    return 0;
}