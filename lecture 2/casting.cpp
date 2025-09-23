#include<iostream>
using namespace std;

int main(){
        //******* TYPE CASTING *******
    char grades = 'A';

    int value = grades;  // implicit type casting
    cout << value << endl; 

    double pricee = 100.999;

    int newPrice = (int)pricee;  // explicit type casting
    cout << newPrice << endl;

    return 0;
}