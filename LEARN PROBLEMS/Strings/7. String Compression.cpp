//Leetcode 443

#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {
        
        int i=0;
        int ansIndex = 0;
        int n = chars.size();

        while(i < n){

            int j = i+1; //one character ahead

            while(j < n && chars[i] == chars[j]){
                j++; //keep all same occurences
            }

            //Case 1: Array traversal complete
            //Case 2: new char encountered

            chars[ansIndex++] = chars[i]; //store current char
            int count = j-i;

            //next character
            i=j;

            if(count > 1){
                // chars[ansIndex++] = count; //alert 10 will require two char
                string cnt = to_string(count);
                for(char ch : cnt){
                    chars[ansIndex++] = ch;
                }
            }
        }

        return ansIndex;
    }
int main(){
    vector<char> chars{'a','a','b','b','c','c','c'};

    for(char ch : chars){
        cout << ch << ",";
    }

    cout <<endl << "size" << compress(chars) <<endl;
    
    return 0;
}