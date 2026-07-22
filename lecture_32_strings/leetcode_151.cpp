#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";

        // Reverse the entire string
        reverse(s.begin(), s.end());

        // Extract each word
        for (int i = 0; i < n; i++) {
            string word = "";

            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Reverse the current word
            reverse(word.begin(), word.end());

            // Ignore extra spaces
            if (word.length() > 0) {
                ans += " " + word;
            }
        }

        // Remove leading space
        return ans.substr(1);
    }
};

int main() {
    Solution obj;

    string s;

    cout << "Enter a sentence: ";
    getline(cin, s);

    cout << "Reversed Words: " << obj.reverseWords(s) << endl;

    return 0;
}