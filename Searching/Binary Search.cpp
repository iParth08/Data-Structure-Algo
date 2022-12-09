#include<iostream>
using namespace std;


int binarySearch(int arr[], int size, int key){
    //get START and END to find MID index
    int start = 0;
    int end = size-1;

    //calculate MID index
    int mid = start + (end-start)/2;    //to avoid int overflow, in case

    //do until array reaches to single element
    while(start <= mid){

        if(arr[mid] == key){
            return mid;                  //index returned
        }
        else if(key < arr[mid]){
            end = mid-1;                //ignore higher elements, array halved
        }
        else{
            start = mid+1;              //ignore lower elements, array halved
        }

        mid = start + (end-start)/2;    //mid updated
    }

    return -1;                          //element not found

}

int main(void){

    //Arrays sorted monotonic
    int even[6] = {12, 14, 15, 23, 27, 39};
    int odd[5] = {3, 7, 12, 18, 21};

    //Calling Binary Search
    int index = binarySearch(odd, 5, 12);

    //output
    if(index != -1)
        cout<<"Element Found at index "<<index<<endl;
    else
        cout<<"NOT FOUND. returned : "<<index<<endl;


    return 0;
}