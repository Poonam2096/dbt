#include <iostream>
using namespace std;
 
class Person
{
private:
    string name;
    int age;
    string city;
public:
    Person();
    Person(string name,int age,string city);
    ~Person(){}
    string getName();
    int getAge();
    string getCity();

    void setName(string name);
    void setAge(int age);
    void setCity(string city);
    void display();
};

Person::Person(/* args */)
{
    this->name = "Poonam";
    this->age = 24;
    this->city = "Nanded";
}

Person::Person( string name,int age,string city)
{
    this->name = name;
    this->age = age;
    this->city = city;
}

string Person::getName()
{
   return this-> name;
}
int Person::getAge()
{
    return this->age;
} 
string Person::getCity()
{
    return this->city;
}
void Person::display(){
    cout<<"Name : "<<getName()<<endl;
    cout<<"Age : "<<getAge()<<endl;
    cout<<"City : "<<getCity()<<endl;
}

int main() {
    Person person;
    person.display();
}
