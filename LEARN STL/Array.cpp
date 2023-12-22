#include<iostream>
#include<array>
using namespace std;

int main(){

    int basicArr[3] = {1,2,3}; //base structure for STL ARRAY

    // STL array is a simple static array
    array<int, 4> arr = {1,2,3,4};

    for(auto i : arr)
        cout << arr[i] << " ";

    cout << "\n";
    cout << arr.size() <<endl;
    cout << arr.front() <<endl;
    cout << arr.at(1) <<endl;
    cout << arr.back() <<endl;
    cout << arr.empty() <<endl;



    return 0;
}