#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){
    //go through each element once until key found
    int i;
    for(i=0; i<size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    //after entire iteration, element not found
    if(i==size){
        return -1;
    }
}

int main(){

     //Arrays sorted and unsorted
    int sorted[6] = {12, 14, 15, 23, 27, 39};
    int unsorted[5] = {3, 16, 1, 12, 21};

    //Calling Binary Search
    int index = linearSearch(unsorted, 5, 12);

    //output
    if(index != -1)
        cout<<"Element Found at index "<<index<<endl;
    else
        cout<<"NOT FOUND. returned : "<<index<<endl;

    return 0;
}