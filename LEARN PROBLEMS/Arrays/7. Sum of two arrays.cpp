//  Add two arrays as if adding two integers

#include<bits/stdc++.h>
using namespace std;

void sumOfTwoArrays(vector<int>& arr1,  vector<int>& arr2, vector<int>& sum){

    int carry = 0;
    int n1 = arr1.size()-1;
    int n2 = arr2.size()-1;
    int add = 0;

    // handles equal sizes
    while(n1 >= 0 && n2 >= 0){
        add = arr1[n1--] + arr2[n2--] + carry;

        //place digit
        sum.push_back(add%10);
        // take carry
        carry = add/10;
    }

    //array 1 is longer
    while(n1 >= 0){
        add = arr1[n1--] + carry;

        //place digit
        sum.push_back(add%10);
        // take carry
        carry = add/10;
    }

    //array 2 is longer
    while(n2 >= 0){
        add = arr2[n2--] + carry;

        //place digit
        sum.push_back(add%10);
        // take carry
        carry = add/10;
    }

    //if carry remains
    if(carry != 0)
        sum.push_back(carry);
    
    // reverse to get original sequence
    reverse(sum.begin(), sum.end());
}

void print(vector<int> & arr){
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;
}

int main(){

    vector<int> arr1 = { 9, 8, 7};
    vector<int> arr2 = {2, 1};
    vector<int> sum;

    sumOfTwoArrays(arr1, arr2, sum);

    print(sum);



    return 0;
}