#include<iostream>
#include<vector>
using namespace std;

void twoPointerMerge(int *arr1, int n, int *arr2, int m, int *array){
    int i=0; //arr1
    int j=0; //arr2
    int k=0; //array

    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            array[k++] = arr1[i++];
        }
        else{
            array[k++] = arr2[j++];
        }
    }

    while(i<n)
        array[k++] = arr1[i++];
    
    while(j<m)
        array[k++] = arr2[j++];
}

void print(int *arr, int size){
    for(int i=0; i<size; i++)
        cout << i << " ";
}



int main(){

    int arr1[6] = {1,2,5,7,8,9}, n=6; 
    int arr2[4] = {0,3,4,6}, m =4;

    int array[10];

    
    cout <<endl << "Approach 1: Compare two arr_elm and Place"<<endl;
    twoPointerMerge(arr1, n, arr2, m, array);

    cout << "<Merged Sorted Array> : ";
    print(array, 10);

    return 0;
}