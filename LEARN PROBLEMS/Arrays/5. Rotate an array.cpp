//Rotate an array by k shifts

#include<bits/stdc++.h>
using namespace std;

void rotateByShifts(vector<int>& arr, int k){
    // Selection of desired
    int N = arr.size();
    vector<int> temp(N); // temp vector of size N

    for(int i=0; i<N; i++){
        temp[(i+k)%N] = arr[i];
    }

    //copy the answer
    arr = temp;
    
}

void print(vector<int>& arr){
    for(auto i : arr)
        cout << i << " ";

    cout <<endl;
}
int main(){

    vector<int> nums = {1,4,0,2,3,0,1,0,0,2};
    int shifts = 3;
    cout << "Original Vector : ";
    print(nums);

    rotateByShifts(nums, shifts);
    cout << "Rotated Vector : ";
    print(nums);


    return 0;
}