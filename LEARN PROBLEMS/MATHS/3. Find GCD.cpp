#include<iostream>
using namespace std;

// Euclid's Algo in Iterative form

int findGCD(int a, int b){

    //base case
    if(a==0)
    return b;

    if(b==0)
    return a;

    //other cases
    while(a != b){

        if(a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a;
}
int main(){

    int a, b;
    cout << "Enter a , b : ";
    cin >> a >> b;

    printf("GCD(%d, %d) = %d\n", a, b, findGCD(a, b));

    return 0;
}