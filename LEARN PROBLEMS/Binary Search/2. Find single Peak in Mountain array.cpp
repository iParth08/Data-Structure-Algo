// A single Peak in a Mountain Array

#include<bits/stdc++.h>
using namespace std;

int peakElementInMountain(int *arr, int size){
    //binary Approach
        int start = 0;
        int end = size - 1;
        int mid = start + (end - start)/2;

        while(start < end){

            //increasing slope
            if(arr[mid] < arr[mid+1]){
                start = mid+1;
            }
            else{
                end = mid;
            } 

            mid = start + (end - start)/2;
        }

        return start;
        
}


int main(){
    int Mountain [10] = {1,2,3,4,5,7,6,3,2,0};
    
    int peak = peakElementInMountain(Mountain, 10);
    cout << "Peak : " <<Mountain[peak];
    return 0;
}

