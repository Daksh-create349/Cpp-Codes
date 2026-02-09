#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    int maths, english, hindi;
    int total;
    float percentage;

public:
    
    Student(int r, int m, int e, int h) {
        rollNo = r;
        maths = m;
        english = e;
        hindi = h;

        total = maths + english + hindi;
        percentage = total / 3.0;

        cout << "Student details saved.\n";
    }

    // Destructor
    ~Student() {
        cout << "Student details destroyed.\n";
    }

    // Display result
    void display() {
        cout << "\nRoll Number: " << rollNo << endl;
        cout << "Maths: " << maths << endl;
        cout << "English: " << english << endl;
        cout << "Hindi: " << hindi << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    int roll, m, e, h;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Maths marks: ";
    cin >> m;

    cout << "Enter English marks: ";
    cin >> e;

    cout << "Enter Hindi marks: ";
    cin >> h;

    
    Student s(roll, m, e, h);

    
    s.display();

    return 0;   
}