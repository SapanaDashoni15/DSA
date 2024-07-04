//Binary Overloading for addition of complex numbers

#include<iostream>
using namespace std;

class Complex {
    private:
    int real;
    int img;
    
    public:
    void input() {
        cout<<"Enter real and img parts:";
        cin>>real>>img;
    }
    
    Complex operator +(Complex obj) {
        Complex temp;
        
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        
        return temp;
    }
    
    void output() {
        cout << "Output is: " <<real<<"+" << img<<"i";
    }
};

int main() {
    
    Complex com1, com2,res;
    cout<<"Enter first complex no. i.e \n";
    com1.input();
    cout <<"Enter second complex no. i.e \n";
    com2.input();
    
    res = com1 + com2;
    res.output();
    return 0;
    return 0;
}
