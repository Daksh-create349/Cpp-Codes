#include <iostream>
using namespace std;
class calculator {
    public:
    int add(int a, int b) {
        return a + b;
    }
    float add(float a, float b) {
        return a + b;
    }
    float add(float a, float b , float c){
        return a + b + c;
    }

};
int main() {
    calculator c;
    cout << "Sum of integers: " << c.add(5, 10) << endl;
    cout << "Sum of floats: " << c.add(5.5f, 10.3f) << endl;
    cout << "Sum of three floats:"<< c.add(2.5f,4.5f,5.0f)<< endl;
    return 0;
}
