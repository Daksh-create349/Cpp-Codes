#include <iostream>
using namespace std;

class calculator {
public:
    float area(float side) {
        return side*side;
    }

    
    float area(float length, float breadth) {
        return length * breadth;
    }
};

int main() {
    calculator c;

    cout << "Area of square: " << c.area(5.0f) << endl;
    cout << "Area of rectangle: " << c.area(4.5f, 3.0f) << endl;

    return 0;
}