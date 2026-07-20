#include<iostream>
using namespace std;

int main(){
    
    // // using in built string function
    // string str = "apna college";    // dynamic in nature => resize in runtime
    // cout << str << endl;   // apna college

    // str = "hello";
    // cout << str << endl;

    // // char chArr[] = "apna college";
    // // chArr = "hello";     => it will give error means it is not modifiable

    // // combining two string => concatenation
    // string str1 = "apna";
    // string str2 = "college";
    // cout << str1 + str2 << endl;  // apnacollege

    // // checking if string 1 and 2 are equal or not
    // string str3 = "paridhi";
    // // string str4 = "paridhi";
    // string str4 = "agrawal";

    // // cout << (str3 == str4) << endl;   // 1 => true
    // cout << (str3 > str4) << endl;   // 0 => false ===> bcs dictionary order wise(lexicographically) konsi pehle aayegi konsi nahi uske according answer aata hai 

    // // for length we use => string_name.length()
    // cout << str3.length() << endl;  // 7

    // // for taking input
    // string str5;
    // cout << "Input string: ";
    // getline(cin, str5, '&');
    // cout << "Output: " << str5 << endl;

    // loops on string
    string str6 = "apna college";

    // for(int i= 0; i<str6.length(); i++){
    //     cout << str6[i] << " ";   // a p n a   c o l l e g e
    // }

    for( char ch : str6){
        cout << ch << " ";
    }
    cout << endl;

    return 0;
}