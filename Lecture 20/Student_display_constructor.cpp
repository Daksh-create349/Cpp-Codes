#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    Student(int r, string n) {
        roll = r;
        name = n;
    }

    void display() {
        cout << roll << " " << name;
    }
};

int main() {
    Student s1(101, "ravi");
    s1.display();

    return 0;
}