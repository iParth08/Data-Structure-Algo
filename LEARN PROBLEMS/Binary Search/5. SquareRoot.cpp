//Find square root without using any built-in operator (pow,**)

#include<bits/stdc++.h>
using namespace std;

long long int intSqrt(int num){
    int start = 0;
    int end = num;
    long long int mid = start + (end-start)/2;
    long long int approxAns = -1, square;

    while(start <= end){
        square = mid*mid; //can exceed int limit, so long long int

        if(square == num)
            return mid; //perfect sqrt
        else if(square < num){
            approxAns = mid;
            start = start+1;
        }
        else{
            end = mid-1;
        }

        mid = start+(end-start)/2;
    }

    return approxAns;
}

double preciseRoot(int num, int precise, int intPart){
    //What if already a perfect root
    if(intPart*intPart == num){
        return intPart;
    }
    
    double factor = 1;
    double root;

    for(int i=0; i<precise; i++){
        factor = factor/10;
        for(double p = intPart; p*p < num; p += factor){
            root = p;
        }
    }

    return root;
}
int main(){

    int num;
    cout << "Give a square :";
    cin >> num;

    int intPart = intSqrt(num);
    cout << "Precise root : " << preciseRoot(num, 3, intPart);


    return 0;
}