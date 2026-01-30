#include <iostream>
#include <map>          // for map, multimap
#include <unordered_map> // for unordered_map
using namespace std;

int main() {
    // Map: stores key-value pairs in sorted order (by key)
    map<int, string> mp;

    mp[1] = "one"; // insert using []
    mp[2] = "two";
    mp[3] = "three";

    // Insert with insert()
    mp.insert({4, "four"});

    // Access values
    cout << mp[2] << endl; // "two"

    // Check existence
    if (mp.count(3)) cout << "Key 3 exists\n";

    // Erase a key
    mp.erase(2);

    // Iterate (always sorted by key)
    for (auto& p : mp) {
        cout << p.first << " -> " << p.second << endl;
    }

    // Unordered map: no sorting, but faster (average O(1))
    unordered_map<string, int> ump;

    ump["apple"] = 3;
    ump["banana"] = 5;
    ump["pear"] = 2;

    for (auto& p : ump) {
        cout << p.first << " -> " << p.second << endl;
    }
}
