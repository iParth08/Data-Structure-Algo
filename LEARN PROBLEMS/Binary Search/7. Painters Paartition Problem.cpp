/**
 * Problem Statement :
 * 1. Assign every block a painter
 * 2. Every painter must paint some blocks
 * 3. Blovks should be painted in a contiguous manner
 * 4. Every unit of block requires unit time
 * 4. Max time a painter must paint should be minimum***
*/

#include<bits/stdc++.h>
using namespace std;

bool isPossible(int *blockUnits, int blocks, int painters, int target){

    int painterCount = 1;
    int timeSum = 0;

    //go through each book
    for(int i=0; i<blocks; i++){

        if(timeSum + blockUnits[i] <= target){
            timeSum += blockUnits[i];
        }
        else{
            painterCount++;
            if(painterCount > painters || blockUnits[i] > target){
                return false;
            }
            timeSum = blockUnits[i];
        }
    }

    return true;
}

int painterAllocation(int *blockUnits, int blocks, int painters){
    
    int sum = 0;
    for(int i=0; i<blocks; i++){
        sum += blockUnits[i];
    }

    //search space :: max number of pages to read .... lies in this space
    int start = 0;
    int end = sum;
    int mid = start + (end-start)/2;

    int Onesol = -1;

    //minimize the read
    while(start <= end){

        if(isPossible(blockUnits, blocks, painters, mid)){
            Onesol = mid;
            end = mid -1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end-start)/2;
    }

    return Onesol;
}

int main(){
    // int blockUnits [] = {10,20,30,40};
    int blockUnits [] = {2,1,5,6,2,3};
    int size = sizeof(blockUnits)/sizeof(int);

    int painters = 2;
    int minTimeToPaint = painterAllocation(blockUnits, size, painters);
    cout << "Every painter just need to paint for " << minTimeToPaint << endl;
    
    return 0;
}