#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

struct Student {
    string name;
	int score;
};

int main() {
	int n;
	cin >> n;
	Student students[20];
	for(int i = 0; i < n; i++) {
	    cin >> students[i].name >> students[i].score;
	}
    
    sort(students, students + n, [](const Student &a, const Student &b) {
        if (a.score == b.score) {
            return a.name < b.name;
        }
        return a.score > b.score;
    });
    
    for(int i = 0; i < n; i++) {
        cout << students[i].name << " " << students[i].score << "\n";
    }
}