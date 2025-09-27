#include<iostream>
using namespace std;

// sum of numbers from 1 to N
int sumN(int n){
    int sum = 0;

    for(int i = 1; i<=n; i++){
        sum = sum + i;
    }
    return sum;
}

// N factorial
int fact(int n){
    int fact = 1;

    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

// sum of digit of a number
int SumOfDigit(int num){
    int digitSum = 0;
    
    while(num > 0){
        int lastDig = num % 10;
        num = num / 10;
        digitSum += lastDig;
    }
    return digitSum;
}

// nCr binomial coeeficient for n & r.
int nCr(int n, int r){
    int fact_r = fact(r);
    int fact_n = fact(n);
    int fact_nmr = fact(n-r);

    return fact_n / (fact_r * fact_nmr);
}

// prime number
int prime(int n){
    bool isPrime = true;

    for(int i = 2; i<n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
}

// print all prime numbers from 2 to N.
void printPrimeNum(int n){
    bool isPrime = true;

    if(n <= 1){
        isPrime = false;
    }
    for(int i = 2; i<n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout << n << " ";
    }
}
int main(){
    // sum
    cout << "Sum = " << sumN(5) << endl;

    // factorial
    cout << "Factorial = " << fact(5) << endl;

    // sum of digit
    cout << "Sum of digit = " << SumOfDigit(2345) << endl;
    
    // nCr
    int n = 8, r = 2;
    cout << "nCr = " << nCr(n, r) << endl;
    
    // prime
    int x = 3;
    if(prime(x)){
        cout << "Prime" << endl;
    }
    else{
        cout << "Not Prime" << endl;;
    }
    
    // print all prime numbers
    int y = 11;
    for(int i = 2; i<=n; i++){
        printPrimeNum(i);
    }
    cout << endl;
}  
