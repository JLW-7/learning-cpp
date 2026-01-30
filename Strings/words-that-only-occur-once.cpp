#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count[26] = {0};
    
    for (char i : s) {
        count[i - 'a']++;
    }
    
    for (char i : s) {
        if (count[i - 'a'] == 1) {
            cout << i << endl;
            return 0;
        }
    }
    
    cout << "no" << endl;
    return 0;
}
