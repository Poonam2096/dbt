#include<iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imag;
    public:
    Complex(); 
    Complex(int real,int imag);
    ~Complex(){cout<<"Inside destructor"<<endl;}
    int getReal();
    int getImag();
    void setReal(int real);
    void setImag(int imag);
    void accept();
    void disp();

};

Complex::Complex()
{
    this->real=10;
    this->imag=20;
}
Complex::Complex(int real,int imag)
{
    this->real=real;
    this->imag=imag;
}

int Complex::getReal()
 {
     return this->real;
 }
int Complex::getImag()
{
    return this->imag;
}

void Complex::setReal(int real)
{
    this->real=real;
}
 void Complex::setImag(int imag)
 {
     this->imag=imag;
 }

 void Complex:: accept()
 {
     cout<<"Enter real value : ";
     cin>>this->real;
     cout<<"Enter Imag Value : ";
     cin>>this->imag;
 }
void Complex:: disp()
{
    cout<<"Real : "<<this->real<<" Imag : "<<this->imag<<endl;
}

int main(void)
{
    Complex c1;
    c1.disp();
    return 0;
}