// When a sorted array is rotated, the elm around which it is rotated is called pivote

#include<bits/stdc++.h>
using namespace std;

int pivotInRotatedArr(int *arr, int size){
    // two monotonic incr slopes - graphically

    int s = 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while(s<e){
        //rotated slope
        if(arr[mid] > arr[s]){
            s = mid + 1;
        }

        //init slope
        else if(arr[mid] < arr[e]){
            e = mid;
        }

        mid = s+(e-s)/2;
    }

    return e;
}
int main(){
    //Sorted array : [1,2,3,4,5,6,7,8,9]
    //Rotated by 3 elements

    int rotated[9] = {7,8,9,1,2,3,4,5,6};
    int pivotIdx = pivotInRotatedArr(rotated, 9);
    cout << "Pivot (Lower) : " << rotated[pivotIdx];
    return 0;
}