#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){  // O(n^2)

    for(int i = 0; i<n-1; i++){
        int smallestIndex = i; // unsorted part starting
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[smallestIndex]) {
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 5;
    int arr[] = {4,1,5,2,3}; 

    selectionSort(arr, n);
    printArr(arr, n);

    return 0;
}
