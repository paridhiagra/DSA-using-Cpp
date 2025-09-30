#include<iostream>
#include<climits>
using namespace std;

int main(){
    // KADANE's ALGO
    // Leetcode problem : Maximum Subarray (53)
    int currSum = 0, maxSum = INT_MIN;
    int n = 9;
    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};

    for(int i = 0; i<n; i++){
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "Max subarray sum = " << maxSum << endl; // 6
}
