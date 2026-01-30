#include <iostream>
#include <string>

using namespace std;

// Struct is like classes in Python

// Define a struct called Dog and initialize its attributes, name, age and breed.
struct Dog {
    string name;
    int age;
    string breed;
};

// Do the same for a Student struct
struct Student {
    int id;
    string name;
    int age;
    double score;
};

int main() {
    // Create an instance of Dog called myDog
    Dog myDog;

    // Assign values to its attributes
    myDog.name = "Buddy";
    myDog.age = 3;
    myDog.breed = "Golden Retriever";

    // Print the dog's attributes
    cout << "Dog's Name: " << myDog.name << endl;
    cout << "Dog's Age: " << myDog.age << endl;
    cout << "Dog's Breed: " << myDog.breed << endl;

    // But there's a simpler way by using an array, let's use the student struct as an example
    Student s1, s2;
    s1 = {1, "Alice", 20, 85.5};
    s2 = {2, "Bob", 22, 90.0};

    // Print the students' attributes
    cout << "Student 1 ID: " << s1.id << endl;
    cout << "Student 1 Name: " << s1.name << endl;
    cout << "Student 1 Age: " << s1.age << endl;
    cout << "Student 1 Score: " << s1.score << endl;

    cout << "Student 2 ID: " << s2.id << endl;
    cout << "Student 2 Name: " << s2.name << endl;
    cout << "Student 2 Age: " << s2.age << endl;
    cout << "Student 2 Score: " << s2.score << endl;

    return 0;
}