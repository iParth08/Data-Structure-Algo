// Check if an array is sorted and rotated

#include<bits/stdc++.h>
using namespace std;

bool isSortedRotated(vector<int>& array){

    int N = array.size();
    int count = 0;

    for(int i=1; i<N; i++){

        if(array[i-1] > array[i])
            count++;
    }

    if(array[N-1] > array[0])
        count++;
    
    return (count <= 1 ? true : false);

}

int main(){

    vector<int> array = {7, 8, 1, 3, 5, 6};
    cout << isSortedRotated(array); 

    return 0;
}