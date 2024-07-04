#include<iostream>
using namespace std;

class Increase {
    
    public:
    int value;
    
    Increase() {
        value = 10;
    }
    
    void operator ++() {
        value+=5;
    }
    
    void display() {
        cout<< "value is " << value <<endl;
    }
};

int main() {
    
    Increase Inc;
    ++Inc;
    Inc.display();
    return 0;
}
