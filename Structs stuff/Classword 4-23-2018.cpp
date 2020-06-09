// Hrishikesh Ram 4A
// 4-23-2018

#include<iostream>
#include<string>
using namespace std;

struct Book{
    string title;
    int pages;
    string author;
    bool checkedIn;
};

int main(){
    Book number1;
    Book number2;
    Book number3;
    Book number4;
    Book number5;
    string dummy;

    getline(cin,number1.title);
    getline(cin,dummy);
    cin>>number1.pages;
    getline(cin,number1.author);
    number1.checkedIn = 1;
    getline(cin,dummy);
    cin>>number1.checkedIn;


    getline(cin,number2.title);
    getline(cin,dummy);
    cin>>number2.pages;
    getline(cin,number2.author);
    number2.checkedIn = 1;
    getline(cin,dummy);
    cin>>number1.checkedIn;

    getline(cin,number3.title);
    getline(cin,dummy);
    cin>>number3.pages;
    getline(cin,number3.author);
    number3.checkedIn = 1;
    getline(cin,dummy);
    cin>>number1.checkedIn;

    getline(cin,number4.title);
    getline(cin,dummy);
    cin>>number4.pages;
    getline(cin,number4.author);
    number4.checkedIn = 1;
    getline(cin,dummy);
    cin>>number1.checkedIn;

    getline(cin,number5.title);
    getline(cin,dummy);
    cin>>number5.pages;
    getline(cin,number5.author);
    number5.checkedIn = 1;
    getline(cin,dummy);
    cin>>number1.checkedIn;

    Book bookArray[5];
    bookArray[0] = number1;
    bookArray[1] = number2;
    bookArray[2] = number3;
    bookArray[3] = number4;
    bookArray[4] = number5;

    return 0;
}
