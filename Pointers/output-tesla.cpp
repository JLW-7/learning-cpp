#include <iostream>
using namespace std;
// Outputs Tesla Tes
void Print(const char * p1, const char * p2) 
{  
    for (; p1 != p2; p1++) {
        cout << * p1;
    }

    // Can also use a while loop:
    // while (p1 != p2) {
    //     cout << * p1;
    //     p1++;
    // }
}

int main() {
	const char * s = "Tesla123";
	Print(s, s + 5);
	cout << endl;
	Print(s,s + 3);
	cout << endl;
	return 0;
}
	