#include<iostream>
#include<vector>
using namespace std;

int main(){

    //IT IS LIKE DYNAMIC ARRAY
    vector<int> vec;
    vector<float> aflVec(5, 0); //vec(size, init)
    vector<int> copy(vec);

    cout << "Initial Capacity : " << vec.capacity() <<endl;

    vec.emplace_back(1);
    cout << "1 pushed => Capacity : " << vec.capacity() <<endl;
    vec.push_back(2);
    cout << "2 pushed => Capacity : " << vec.capacity() <<endl;
    vec.push_back(3);
    cout << "3 pushed => Capacity : " << vec.capacity() <<endl;

    cout << "Size : elementCount " <<vec.size() <<endl;

    for(auto elm : vec){
        cout << elm << " ";
    }

    vec.pop_back();
    vec.pop_back();
    cout << "\nAfter 2 pop :- " <<endl;

    cout <<"isEmpty : " <<vec.empty() <<endl;
    cout << "At front : " <<vec.front() <<endl;
    cout << "At back : " <<vec.back() <<endl;

    cout << "Before Clear : Capacity = " << vec.capacity() <<endl;
    cout << "Size = " <<vec.size() <<endl;
    vec.clear();
    cout << "After Clear : Capacity = " << vec.capacity() <<endl;
    cout << "Size = " <<vec.size() <<endl;
    cout << "isEmpty = " << vec.empty() <<endl;



    return 0;
}