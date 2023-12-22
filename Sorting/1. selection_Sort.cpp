#include<iostream>
using namespace std;

//Selection Sort : In each round, select min and swap with right position. Move forward.
void selectionSort(int arr[], int size){

    //round control :: size-1 rounds required
    for(int i=0; i<size-1; i++){

        int min_index = i;

        //finding minimum value index in rest array
        for( int j=i; j<size; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }

        //swap position with min to get it to right place
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;

    }
}

//just to display array
void displayArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<" "<<arr[i];
    }
}

int main(){

    //Unsorted Array
    int unsorted[10] = {12, 11, 7, 4, 8, 19, 56, 7, 33, 0};

    //Running Sort
    selectionSort(unsorted, 10);

    //display sorted array
    displayArray(unsorted, 10);

    return 0;
}