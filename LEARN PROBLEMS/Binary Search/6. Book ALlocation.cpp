/**
 * Problem Statement :
 * 1. Assign every book
 * 2. Every student must get some books
 * 3. Books should be assigned in a contiguous manner
 * 4. Max number of pages assigned to a student should be minimum***
*/

#include<bits/stdc++.h>
using namespace std;

bool isPossible(int *bookPages, int books, int students, int target){

    int studCount = 1;
    int pagesSum = 0;

    //go through each book
    for(int i=0; i<books; i++){

        if(pagesSum + bookPages[i] <= target){
            pagesSum += bookPages[i];
        }
        else{
            studCount++;
            if(studCount > students || bookPages[i] > target){
                return false;
            }
            pagesSum = bookPages[i];
        }
    }

    return true;
}

int bookAllocation(int *bookPages, int books, int students){
    
    int sum = 0;
    for(int i=0; i<books; i++){
        sum += bookPages[i];
    }

    //search space :: max number of pages to read .... lies in this space
    int start = 0;
    int end = sum;
    int mid = start + (end-start)/2;

    int Onesol = -1;

    //minimize the read
    while(start <= end){

        if(isPossible(bookPages, books, students, mid)){
            Onesol = mid;
            end = mid -1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end-start)/2;
    }

    return Onesol;
}

int main(){
    int bookPages [] = {10,20,30,40};
    int size = sizeof(bookPages)/sizeof(int);

    int students = 2;
    int minPagesToRead = bookAllocation(bookPages, size, students);
    cout << "Every student just need to read " << minPagesToRead << endl;
    
    return 0;
}