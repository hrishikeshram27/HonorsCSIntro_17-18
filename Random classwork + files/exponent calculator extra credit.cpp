//Hrishikesh Ram period 4A
//10-27-2017

#include<iostream>
using namespace std;

void input(int &base, int &exponent){
    cout<<"Please input a base: ";
    cin>>base;
    cout<<endl<<"Please input an exponent: ";
    cin>>exponent;
}

void calcExponent(int &bse,int &exp){
    if(exp>0){
        for(int i=2;i<=exp;i++){
            bse=;
            cout<<bse;
        }
    } else if(exp<0){
        for(int j=1;j<=(exp*(-1));j++){
            bse*=j;
            cout<<"1/"<<bse;
        }
    } else if(exp==1){
        cout<<bse;
    } else{
        cout<<"1";
    }
}

void output(int base1, int exponent1){
    cout<<base1<<" raised to the "<<exponent1<<" power is ";
    calcExponent(base1,exponent1);
    cout<<endl;
}

int main(){
    int base, exponent;
    input(base,exponent);
    output(base,exponent);

    return 0;
}
