#include<iostream>
using namespace std;
 
 class Book
 {
 private:
     string bname;
     int id;
     string author;
     int price;
 public:
     Book();
     ~Book();
     Book (string bname, int id, string author, int price);
     string getBname();
     int getId();
     string getAuthor();
     int getPrice();
     void display();
 };
 
 Book::Book()
 {
     this->bname = "Java";
     this->id = 2;
     this->author = "Balgurusami";
     this->price = 400;
 }
 Book::Book (string bname, int id, string author, int price)
 {
     this->bname = bname;
     this->id = id;
     this->author = author;
     this->price = price;
 }
 
 Book::~Book()
 {
     cout<<""<<endl;
 }
 string Book::getBname()
 {
     return this->bname;
 }
 int Book::getId()
 {
     return this->id;
 }
 string Book::getAuthor()
 {
     return this->author;
 }
 int Book::getPrice()
 {
     return this->price;
 }
 void Book::display()
 {
     cout<<"Book Details : "<<endl;
     cout<<"Book Name :"<<bname<<" "<<"Book Id : "<<id<<" "<<"Book Author : "<<author<<" "<<"Book Price : "<<price<<endl;

 }
 int main()
 {
     Book b;
     b.display();
 }
 
