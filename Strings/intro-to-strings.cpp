#include <iostream>
#include <string>   // important!!
using namespace std;

int main() {
    // ===============================
    // 1. Creating strings
    // ===============================
    string s;                  // empty string: ""
    string s2 = "hello";       // initialized with value
    string s3(5, 'x');         // "xxxxx" (5 x's)
    
    // Modify / append to a string
    s += "abc";                // append
    s.push_back('d');          // append single char → s = "abcd"
    s.pop_back();              // remove last char → s = "abc"

    // Access characters
    cout << s[0] << endl;      // 'a'
    cout << s.at(1) << endl;   // 'b' (with bounds checking)

    // Length of string
    cout << s.size() << endl;  // number of chars

    // ===============================
    // 2. Looping through characters
    // ===============================

    string word = "ECLIPSED";

    // --- (a) Index-based loop ---
    for (int i = 0; i < word.size(); i++) {
        cout << word[i] << " ";
    }
    cout << endl;

    // --- (b) Range-based loop ---
    for (char c : word) {
        cout << c << " ";
    }
    cout << endl;

    // --- (c) Using iterators ---
    for (auto it = word.begin(); it != word.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // --- (d) Loop with while ---
    int i = 0;
    while (i < word.size()) {
        cout << word[i] << " ";
        i++;
    }
    cout << endl;

    // ===============================
    // 3. Searching inside strings
    // ===============================
    string text = "hello world";
    size_t pos = text.find("world");
    if (pos != string::npos) {
        cout << "found at index " << pos << endl;
    }

    return 0;
}
