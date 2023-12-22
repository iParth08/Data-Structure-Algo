#include<iostream>
#include<vector>
using namespace std;

void twoPointerReverse(vector<int>& arr){
    int s = 0;
    int e = arr.size()-1;

    while(s <= e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void print(vector<int> arr){
    for(auto i : arr)
        cout << i << " ";
}



int main(){

    vector<int> array = {1,2,5,7,8,9};

    cout << "Original Sequence : ";
    print(array);
    
    cout <<endl << "Approach 1: Swap elements at two end-end points"<<endl;
    twoPointerReverse(array);

    cout << "Reverse Sequence : ";
    print(array);

    return 0;
}