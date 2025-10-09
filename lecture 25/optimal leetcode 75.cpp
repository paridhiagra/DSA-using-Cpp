#include<iostream>
using namespace std;

void sortArray(int arr[], int n){
    int mid = 0, high = n-1, low = 0;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid++, low++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n = 6;
    int arr[] = {2,0,2,1,1,0};

    sortArray(arr,n);
    printArr(arr,n);

    return 0;
}
