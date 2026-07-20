#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[] = {'a', 'b', 'c'};
    char str[] = {'a', 'b', 'c', '\0'};
    // cout << str << endl;   // abc≡@
    cout << str << endl;   // abc properly prints the string because of the null character '\0' at the end of the array.  
    
    char str1[] = "hello";
    cout << str1 << endl;   // hello
    cout << str1[2] << endl;   // l
    cout << strlen(str1) << endl;   // 5

    // ---------- Character arrays I/O ----------
    
    char str2[100];
    cout << "Enter char array: ";  // hello &&& if we gives hello world then it will return only first word hello because cin stops reading after space.
    cin >> str2;

    cout << "Output: " << str2 << endl;  // Output: hello

    // using cin.getline() function to read the entire line including spaces
    char str3[100];
    cout << "Enter char array: ";  // hello my name is paridhi
    cin.getline(str3, 100);  // it will read the entire line including spaces.
    cout << "Output: " << str3 << endl;  // Output: hello my name is paridhi

    char str4[100];
    cout << "Enter char array: ";  // hello my name is$ paridhi
    cin.getline(str4, 100, '$');

    cout << "Output: " << str4 << endl;  // Output: hello my name is
// ----------------------------------------------------------------------------  
    char str5[100];

    cout << "Enter char array: ";  // hello world 
    cin.getline(str5, 100);
    for(char ch: str5){
        cout << ch << " ";  // h e l l o   w o r l d 
    // }
// ----------------------------------------------------------------------------
    char str6[] = "apna college";
    int len = 0;
    cout << "Length of the string is: " << strlen(str6) << endl;  // 12
// ------------------------------------------------------------------
    for(int i = 0; str6[i] != '\0'; i++){
        len++;;  // a p n a   c o l l e g e
    }
    cout << "Length of the string is: " << len << endl;


    return 0;
}