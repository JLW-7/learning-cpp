#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int cnt = 0;
    
    for (int i = 0;i < s.size();i++) {
        if (isdigit(s[i])) {
            cnt += 1;
        }
    }
    
    cout << cnt << endl;
    return 0;
}


// How many numbers are there in a string

// Sample Input
// Peking University is set up at 1898.
// Sample Output
// 4