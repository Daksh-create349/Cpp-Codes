// Dynamic memory allocation -> memory allocated at runtime from heap
// using (new allocates memory and delete)

#include <iostream>
using namespace std;

int main() {
    int* ptr;          // pointer to int

    ptr = new int;     // dynamically allocate memory for one int

    cout << "Enter a number: ";
    cin >> *ptr;       // store value in dynamically allocated memory

    cout << "You entered: " << *ptr << endl;

    delete ptr;        // free the allocated memory

    return 0;
}