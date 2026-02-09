

#include <iostream>
using namespace std;

class Sample {
private:
    int* p;  

public:
    
    Sample(int value) {
        p = new int;    
        *p = value;
        cout << "Memory allocated and value set to " << *p << endl;
    }

    
    void display() {
        cout << "Value stored in dynamic memory: " << *p << endl;
    }

    
    ~Sample() {
        delete p;        
        cout << "Memory deallocated" << endl;
    }
};

int main() {
    Sample obj(50);  
    obj.display();    

    return 0;         
}