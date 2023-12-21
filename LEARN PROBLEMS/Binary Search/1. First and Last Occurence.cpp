#include<bits/stdc++.h>
using namespace std;

int firstOcc(int *arr, int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    int firstOcc;

    while(start <= end){
        if(arr[mid] == key){
            firstOcc = mid;
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return firstOcc;
}

int lastOcc(int *arr, int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    int lastOcc;

    while(start <= end){
        if(arr[mid] == key){
            lastOcc = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
         mid = start + (end - start)/2;
    }

    return lastOcc;
   
}

void firstAndLastOccurence(int *arr, int size, int key){

    pair<int, int> pos;
    pos.first = firstOcc(arr, size, key);
    pos.second = lastOcc(arr, size, key);

    cout << pos.first << " " << pos.second << endl;
}

int main(){
    int even[6] = {1,2,3,3,3,4};
    int odd[5] = {2,2,3,3,3};

    firstAndLastOccurence(even, 6, 3);
    firstAndLastOccurence(odd, 5, 3);
    return 0;
}