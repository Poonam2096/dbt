#include<iostream>
using namespace std;
class Date
{
private:
    int dd;
    int mm;
    int yy;
public:
    Date();
    ~Date();
    Date(int dd, int mm, int yy);
    int getDd();
    int getMm();
    int getYy();
    void setDd(int dd);
    void setMm(int mm);
    void setYy(int yy);
    void display();
};

Date::Date(/* args */)
{
    this->dd = 20;
    this->mm = 11;
    this->yy = 1996;
}

Date::~Date()
{
}
Date::Date(int dd, int mm, int yy)
{
    this->dd = dd;
    this->mm = mm;
    this->yy = yy;
}
int Date::getDd()
{
    return this->dd;
}
int Date::getMm(){
    return this->mm;
}
int Date::getYy(){
    return this->yy;
}
void Date::display(){
    cout<<"DD/MM/YY"<<" : "<<dd<<"/"<<mm<<"/"<<yy<<endl;

}
int main()
{
    Date d1;
    d1.display();
}