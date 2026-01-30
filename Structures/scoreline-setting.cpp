#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

struct Participant {
    string name;
    int score;
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<Participant> participants(n);
    for (int i = 0; i < n; i++) {
        cin >> participants[i].name >> participants[i].score;
    }

    
    return 0;
}
