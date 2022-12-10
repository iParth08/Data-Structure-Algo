#include<iostream>
using namespace std;

//Insertion Sort : In each round, compare neighbour element with sorted part and insert it after element smaller than it by shifting larger elements to right (for ascending order, reverse conditions for descending order);

void insertionSort(int arr[], int size){

    //round control :: size-1 rounds required
    for(int i=1; i<size; i++){

        int elm = arr[i];         //0th already sorted

        int j = i-1;
        while(j>=0){

            //compare next element against sorted elements
           if(elm < arr[j]){
                arr[j+1] = arr[j];      //shift right
           }
           else{
                break;                  //stop here
           }

            j--;
        }
        arr[j+1] = elm;
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
    insertionSort(unsorted, 10);

    //display sorted array
    displayArray(unsorted, 10);

    return 0;
}