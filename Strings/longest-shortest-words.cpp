// getline(cin, s); — Reads an entire line of text (including spaces) into string s.
// stringstream ss(s); — Creates a string stream from the input line, allowing extraction of words separated by spaces.
// Then it initializes two strings: longest and shortest (both initially empty).
// The while (ss >> word) loop extracts one word at a time from the line.
// Inside the loop:
// If longest is empty or the current word is longer than longest, update longest to this word.
// Similarly, if shortest is empty or the current word is shorter than shortest, update shortest.
// After processing all words, it prints the longest word on one line and the shortest word on the next line.

#include <iostream>
#include <cstdio>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    
    string word;
    string longest = "", shortest = "";
    
    while (ss >> word) {
        if (longest.empty() || word.length() > longest.length()) {
            longest = word;
        }
        if (shortest.empty() || word.length() < shortest.length()) {
            shortest = word;
        }
    }
    
   cout << longest << "\n" << shortest << endl;
}