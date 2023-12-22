/**
 * Problem:
 * 1. Aggressive cows are better far placed
 * 2. Stalls NEED NOT be alloated in contiguous manner ::: Array can be modified
 * 3. Distance between two cows should be maximum.
 * 
*/

#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& stallsPos, int size, int cows, int target){

    int cowCount = 1;
    int lastpos = stallsPos[0]; //fix one cow :: 

    for(int i=0; i<size; i++){

        //nextPos - lastPos >= target
        if(stallsPos[i] - lastpos >= target){
            cowCount++;
            if(cowCount == cows){
                return true;
            }
            lastpos = stallsPos[i];
        }
    }

    return false; //all cows could not be placed


}

int placeCows(vector<int>& stallsPos, int size, int cows){

    //defining search space
    int start = 0;
    int end = stallsPos[size - 1];
    int mid = start + (end-start)/2;

    int Onesol = -1;

    // find max possible distance between two
    while(start <= end){

        if(isPossible(stallsPos, size, cows, mid)){
            Onesol = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1; //if not possible, look for less distance
        }

        mid = start + (end-start)/2;
    }

    return Onesol;
}

int main(){
    vector<int> stallsPos{0, 3, 4, 7, 10, 9};
    int cows = 4;

    sort(stallsPos.begin(), stallsPos.end()); // for better handeling
    int stallsCount = stallsPos.size();

    int maxPossibleDistance = placeCows(stallsPos, stallsCount, cows);
    cout << "max distance between cows : " << maxPossibleDistance <<endl;

    return 0;
}