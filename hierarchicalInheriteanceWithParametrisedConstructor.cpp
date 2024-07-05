//Heirarchical Inheritance (parametrised costructor) 
#include<iostream>
using namespace std;

class Employee {
    
    public :
    
    string name;
    string dept;
    int salary;
    
    Employee(string n, string d, int s) {
        //here even if we dont use this-> it will work fine
        //why ?? because we have different data memebers name and constructor parameters
        // we can write like
        //name = n; and this will work fine
        //name = name thiis is incorrect and we have to use this->
        this->name = n;
        this->dept = d;
        this->salary = s;
    }
};

// If the parameter names are different from the member variables, you do not need to use this->
// If the parameter names are the same as the member variables, you must use this-> to refer to the member variables.

class Student1 : public Employee {
    
    public :
    
    Student1(string name, string dept, int salary) : Employee(name,dept,salary) {}
    
    void getName() {
        cout << "name of student1 is " << name <<endl;
    }
};

class Student2 : public Employee {
    
    public :
    
    Student2(string name, string dept, int salary) : Employee(name,dept,salary) {}
    
    void getDept() {
        cout << "dept of student2 is " << dept <<endl;
    }
};

int main() {
    //from programmer
    // Student1 s1("Sapana", "CS" , 123456789);
    // Student2 s2("Soni", "CSE", 123456789);
    // s1.getName();
    // s2.getDept();
    
    //from user
    
    string n1,d1,n2,d2;
    int sal1,sal2;
    // When taking multiple inputs on the same line using cin, it will not handle strings with spaces correctly.
    // cout << "name department and salary of student1 : ";
    // cin>>n1>>d1>>sal1;
    
    cout <<"Enter student1 name ";
    getline(cin,n1);
    
    cout <<"Enter student1 dept ";
    cin>>d1;
    
    cout <<"Enter student1 salary ";
    cin>>sal1;
    
    
    
    cout << "name department and salary of student2 : ";
    cin>>n2>>d2>>sal2;
    
    Student1 s1(n1,d1,sal1);
    Student2 s2(n2,d2,sal2);
    
    s1.getName();
    s2.getDept();
    
    
    return 0;
    
}
// you can create objects without parameterized constructors (as default constructor will make obj on its own with defalut value) and set their values using member functions (make function setValues).
