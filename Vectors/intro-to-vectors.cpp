#include <iostream>
#include <cstdio>
// Be sure to #include <vector> if you're gonna use it
#include <vector>
using namespace std;

int main() {
    // Initialize empty vector
    vector<int> d;  // empty vector of ints

    // Initialize with size and default value
    vector<int> d(5);     // size = 5, all elements = 0
    vector<int> d(5, 7);  // size = 5, all elements = 7

    // Initialized with list
    vector<int> d = {1, 2, 3, 4};  // {1, 2, 3, 4}

    d.push_back(5); // append 5 to the end of vector

    d.pop_back(); // remove last element

    d.clear(); // remove all elements

    d.front(); // get first element, not d.begin()

    d.back(); // get last element, not d.end()

    // Remove an element using its index
    int index = 2; // remove the element at index 2 (i.e. 30)
    d.erase(d.begin() + index);

    // Remove an element using its value
    int value = 3;
    auto it = find(d.begin(), d.end(), value);
    if (it != d.end()) d.erase(it);

    // Remove all occurences of a value
    d.erase(remove(d.begin(), d.end(), value), d.end());

    // Remove based on a condition (e.g. condition is x < 10)
    d.erase(remove_if(d.begin(), d.end(), [](int x){ return x < 10; }), d.end());

    // Access an element
    cout << d[0] << endl; // first element
    cout << d[4] << endl; // fifth element
    cout << d.at(4) << endl; // fifth element using at (in bounds checking)

    // Loop through a vector
    // Index based
    for (int i = 0; i < 5; i++) {
        cout << d[i] << " ";
    }
    // Range based
    for (const auto& i : d) {
        cout << i << " ";
    }
}

