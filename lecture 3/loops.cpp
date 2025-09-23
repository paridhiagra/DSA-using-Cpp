#include<iostream>
using namespace std;

int main(){

    // ******* LOOPS *******

    // 1. while
    int i = 1;
    while(i <= 5){
        cout << i << " ";
        i++;
    }
    cout << endl;

    // 2. for
    int n1 = 5;
    for(int j = 1; j <= n1; j += 1){
        cout << j << " ";
    }
    cout << endl;

    // Sum of numbers from 1 to n
    int n2, sum = 0;
    cout << "Enter how many numbers we want to add: ";
    cin >> n2;
    for(int i = 1; i <= n2; i++){
        sum = sum + i;
    }
    cout << "Sum = " << sum << endl;

    // Sum of all odd numbers from 1 to num
    int j = 1, num = 10, oddSum = 0;
    for(j = 1; j <= num; j++){
        if(j % 2 != 0){
            cout << j << " ";
            oddSum += j;
        }
    }
    cout << endl;
    cout << "Sum of odd numbers = " << oddSum << endl;

    // same using while loop
    j = 1; 
    oddSum = 0; 
    while(j <= num){
        if(j % 2 != 0){
            oddSum += j;
        }
        j++;
    }
    cout << "Sum of odd numbers (while) = " << oddSum << endl;

    // using for loop print sum of all even numbers from 1 to num
    int evenSum = 0;
    for(int k = 1; k <= num; k++){
        if(k % 2 == 0){
            evenSum += k;
        }
    }
    cout << "Sum of even numbers = " << evenSum << endl;

    // 3. do-while
    do{
        cout << "Hello world" << endl;
    }while(3 > 5);

    int n3 = 10, i2 = 1;
    do{
        cout << i2 << " ";
        i2++;
    }while(i2 <= 5);
    cout << endl;

    // Example: check if number is prime or not
    int n4 = 7;
    bool isPrime = true;
    for(int i = 2; i*i <= n4; i++){    // better approach
        if(n4 % i == 0){ // non-prime
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout << n4 << " is Prime number" << endl;
    }else{
        cout << n4 << " is Non Prime number" << endl;
    }

    // Print stars
    int m = 5;
    for(int i = 1; i <= m; i++){
        cout << "*";
    }
    cout << endl;

    return 0;
}