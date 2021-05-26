#include <iostream>
using namespace std;
class MyClass
{
private:
  int x;
  int y;
public:
  MyClass(/* args */);
  ~MyClass();
  MyClass(int x,int y);
  void display();
};

MyClass::MyClass(/* args */)
{
}
MyClass::MyClass(int x,int y){
  this->x = x;
  this->y = y;
}

MyClass::~MyClass()
{
}
void MyClass::display()
{
  cout<<"x : "<<x<<" "<<"y : "<<y<<endl;

}
int main()
{
  MyClass c = MyClass(20,40);
  c.display();
}