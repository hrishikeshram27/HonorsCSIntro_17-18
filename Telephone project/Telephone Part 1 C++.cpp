//Hrishikesh Ram, 4A
// 01/09/2017

#include<iostream>
#include<string>
using namespace std;

string format_number(string &number){
    int numlen = number.length();

    if(numlen == 7){
        number.insert(0,"(919)");
        number.insert(8,"-");
    }

    if(numlen == 8 && number.find("-") == 3){
        number.insert(0,"(919)");
    }

    if(numlen == 10){
        number.insert(0,"(");
        number.insert(4,")");
        number.insert(8,"-");
    }

    if(numlen>=11){
        if(numlen==11 && number[0]=='1'){
            number.insert(1,"-");
            number.insert(2,"(");
            number.insert(6,")");
            number.insert(7,"-");
            number.insert(11,"-");
        }

        if(numlen>11 && number[0]=='1'){
            number.insert(1,"-");
            number.insert(2,"(");
            number.insert(6,")");
            number.insert(7,"-");
            number.insert(11,"-");
            number.insert(16," ext ");
        }

        if(numlen >= 11 && number[0]!='1'){
            number.insert(0,"(");
            number.insert(4,")");
            number.insert(8,"-");
            number.insert(13," ext ");
        }
    }

    return number;
}

int main(){
    string number;
    cout<<"Enter a phone number: ";
    getline(cin,number);

    format_number(number);
    cout<<number;

    return 0;
}
