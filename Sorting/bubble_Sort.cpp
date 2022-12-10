#include<iostream>
using namespace std;

//Selection Sort : In each round, compare neighbour elements and swap larger element with small, pushing larger to end.
void bubbleSort(int arr[], int size){
   int i;
    

    //round control :: size-1 rounds required
    for( i=0; i<size-1; i++){
        
        bool swapped = false;

        //shriking array with each round
        for( int j=0; j<size-i-1; j++){
           if(arr[j] > arr[j+1]){

            swapped = true; //check if swapped

            //swapping larger with small, pushing larger element toward right
                swap(arr[j], arr[j+1]);
           }
        }

        //No swapping required, i.e array already sorted.
        if(!swapped)
            break;
    }

    cout<<(i+1);

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
    int sorted[10] = {1, 2, 3, 5, 6, 8, 9, 10, 12, 17};     //in 1 round

    //Running Sort
    bubbleSort(unsorted, 10);

    //display sorted array
    displayArray(unsorted, 10);

    return 0;
}