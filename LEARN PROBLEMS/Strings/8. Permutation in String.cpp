//Leetcode 567

#include<bits/stdc++.h>
using namespace std;

bool isMatch(int *count, int *keep){
    for(int i=0; i<26; i++){
        if(count[i] != keep[i])
            return 0;
    }

    return 1;
}

bool havePermutation(string s1, string s2){

    //count of all occurences in patter (i.e pattern itself)
    int count[26] = {0};
    for(int i=0; i<s1.length(); i++){
        int idx = s1[i] - 'a';
        count[idx]++;
    }

    //Initiate window
    int j = 0;
    int windowSize = s1.length();
    int keep[26] = {0};

    while(j < windowSize && j < s2.length()){
        int idx = s2[j] - 'a';
        keep[idx]++;
        j++;
    }

    //check if first window succeeded
    if(isMatch(count, keep))
        return 1;

    //Slide the window, from j onwards
    while(j < s2.length()){

        //add next char
        int nIdx = s2[j] - 'a';
        keep[nIdx]++;

        //remove old char
        int rIdx = s2[j-windowSize] - 'a';
        keep[rIdx]--;

        j++;

        //check if permutation found
        if(isMatch(count, keep))
            return 1;

    }

    return 0;
}

int main(){

    string s1 = "ab"; //pattern
    // string s2 = "eidbaooo"; // may contain permutation of s1
    string s2 = "eidboaoo";

    cout << havePermutation(s1, s2);



    return 0;
}