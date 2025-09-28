#include <iostream>
#include<climits>
using namespace std;

// function to calculate sum and print product
int sumAndProduct(int arr[], int size) {
    int sum = 0;
    int product = 1;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Product = " << product << endl; // print product here
    return sum;  // return sum
}

int main() {
    int arr[] = {2, 3, 4, 5};
    int size = 4;

    int sum = sumAndProduct(arr, size);  // sum returned
    cout << "Sum = " << sum << endl;

    int nums[6] = {5, 15, 22, 1, -15, 24};
    int sz = 6;

    int smallest = INT_MAX, largest = INT_MIN;
    int smallestIndex = -1, largestIndex = -1;
  
/*********************************************************************************/
  
  // swap the max and min of an array
    
    // find smallest and largest and their indices
    for(int i = 0; i < sz; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
            smallestIndex = i;
        }
        if(nums[i] > largest){
            largest = nums[i];
            largestIndex = i;
        }
    }

    // swap smallest and largest
    int temp = nums[smallestIndex];
    nums[smallestIndex] = nums[largestIndex];
    nums[largestIndex] = temp;

    // print the modified array
    cout << "Array after swapping min and max: ";
    for(int i = 0; i < sz; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
