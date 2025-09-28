#include<iostream>
using namespace std;

// using two pointer approach
void reverseArr(int arr[], int size){
    int start = 0, end = size - 1;

    while(start < end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int size = 7;

    reverseArr(arr, size);

    for(int i = 0; i<size; i++){
        cout << arr[i] << " "; //5 2 1 8 7 2 4
    }
    cout << endl;

    return 0;
}
