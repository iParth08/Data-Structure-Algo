// Merge one sorted array {Small one} into another sorted array {large one}
//REMEMBER : Capacity of vector is how much it can accomodate 
        // : Size of vector is how many elements it has right now

#include<bits/stdc++.h>
using namespace std;
void mergeByThreePointer(vector<int>& nums1, vector<int>& nums2){
    // O(M+N)

    //Think of Three different cases

    int i = nums1.size()-1;
    int j = nums2.size()-1;
    int k = nums1.size() + nums2.size() - 1;

    while(j>=0){

        //Think about i>=0; i need to be restricted too.
        if(i>=0 && nums1[i] > nums2[j]){
            nums1[k] = nums1[i];
            k--;
            i--;
        }
        else{
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
}
int main(){
    vector<int> nums1 = {1,3,5,6,0,0,0};
    vector<int> nums2 = {2,4,7};

    mergeByThreePointer(nums1, nums2);

    for(auto i : nums1){
        cout << i << " ";
    }

    return 0;
}