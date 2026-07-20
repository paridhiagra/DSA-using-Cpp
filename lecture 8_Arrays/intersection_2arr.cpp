#include <iostream>
using namespace std;

void printIntersection(int arr1[], int n1, int arr2[], int n2) {
    cout << "Intersection: ";

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;  // duplicate print rokne ke liye
            }
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {2, 4, 6, 8, 10};
    int arr2[] = {4, 6, 10, 12};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printIntersection(arr1, n1, arr2, n2);

    return 0;
}
