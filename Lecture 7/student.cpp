#include<iostream>
using namespace std;
class Student{
    public:
    int rollNo;
    string name;
    void display(){
        cout<<"Roll No: "<<rollNo<<endl;
        cout<< "Name: "<<name<<endl;

    }

};

int main(){
    Student s1;
    s1.rollNo = 69;
    s1.name = "Daksh";
    s1.display();
}
