#include <iostream>
#include <climits>   // for INT_MAX and INT_MIN
using namespace std;

int main() {
    // find largest and smallest
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallestIndex = -1;
    int largestIndex = -1;
    int nums[6] = {5, 15, 22, 1, -15, 24};
    int size = 6;

    for(int i = 0; i < size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            smallestIndex = i;
        }
        else{
            largest = nums[i];
            largestIndex = i;
        }
        // to check min and max without loop
        // smallest = min(nums[i], smallest);
        // largest = max(nums[i], largest);
    }

    cout << "smallest = " << smallest << " at index " << smallestIndex<< endl;
    cout << "largest = " << largest << " at index  " << largestIndex << endl;

    return 0;
}
