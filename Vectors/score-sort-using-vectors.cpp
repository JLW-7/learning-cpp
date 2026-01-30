#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    int n;
    cin >> n;
    vector<Student> students(n);
    for (int i = 0; i < n; i++) {
        cin >> students[i].name >> students[i].score;
    }

    sort(students.begin(), students.end(), [](const Student &a, const Student &b) {
        if (a.score == b.score) {
            return a.name < b.name;
        }
        return a.score > b.score;
    });

    for (const auto &student : students) {
        cout << student.name << " " << student.score << "\n";
    }

    return 0;
}