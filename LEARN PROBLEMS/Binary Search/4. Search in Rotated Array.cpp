// A rotated array has two different monotonic slopes -graphically
// Just identify in which slope to search
// 

#include<bits/stdc++.h>
using namespace std;

int pivotInRotatedArr(int *arr, int size){
    // two monotonic incr slopes - graphically

    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while(s<e){
        //rotated slope
        if(arr[mid] > arr[0]){
            s = mid + 1;
        }

        //init slope
        else if(arr[mid] < arr[size-1]){
            e = mid;
        }

        mid = s+(e-s)/2;
    }

    return e;
}

int binarySearch(int *arr, int st, int en, int key){
    int s = st;
    int e = en;
    int m = s+(e-s)/2;

    while(s<=e){
        if(arr[m] == key)
            return m;
        else if(arr[m] < key)
            s = m + 1;
        else
            e = m-1;
        
        m = s+(e-s)/2;
    }

    return -1;
}
int main(){
    //Sorted array : [1,2,3,4,5,6,7,8,9]
    //Rotated by 3 elements

    int rotated[] = {7,8,9,1,2,3,4,5,6};
    int size = sizeof(rotated)/sizeof(int);
    int key = 3; 

    int pivot = pivotInRotatedArr(rotated, size);
    
    if(key >= rotated[pivot] && key <= rotated[size-1]){
        cout << binarySearch(rotated, pivot, size-1, key);
    }
    else{
        cout << binarySearch(rotated, 0, pivot-1, key);
    }
    
    return 0;
}