//Shift all zeroes to Right...else order preserved

#include<bits/stdc++.h>
using namespace std;

void shiftZeroes(vector<int>& arr){
    // Selection of desired
    int nonZeroPos = 0;
    for(int i=0; i<arr.size(); i++){

        if(arr[i] != 0){
            arr[nonZeroPos++] = arr[i];
        }
    }

    while (nonZeroPos < arr.size()) 
    {
        arr[nonZeroPos++] = 0;
    }
    
}
void print(vector<int>& arr){
    for(auto i : arr)
        cout << i << " ";

    cout <<endl;
}
int main(){

    vector<int> nums = {1,4,0,2,3,0,1,0,0,2};
    cout << "Original Vector : ";
    print(nums);

    shiftZeroes(nums);
    cout << "Zero Shifted : ";
    print(nums);


    return 0;
}