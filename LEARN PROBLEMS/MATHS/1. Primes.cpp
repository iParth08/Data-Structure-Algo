#include<bits/stdc++.h>
using namespace std;

//1.0 > check if Prime
bool isPrime(int n){
    //base
    if(n <= 1){
        return false;
    }

    for(int i=2; i<=n/2; i++){

        if(n%i == 0)
            return false;
    }

    return true;
}

int main(){

    int n;
    cin >> n;

    cout << isPrime(n);
}