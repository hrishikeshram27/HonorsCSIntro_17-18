//Hrishikesh Ram
//Period 4A, 09-08-2017

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;


double calc(double princ,double rate,int compound,int time){
    double parantheses = (rate/compound)+1;
    double exponent = compound*time;
    double a = pow(parantheses,exponent);
    double money = a*princ;
    return money;
}

int main() {
    double princ = 500;
    double rate = 4.25/100;
    int compound = 12;
    int time = 3;

    double money = 0.015;
    if(money/0.005 != int(money/0.005)){
        cout<<double(int((money+0.005)*100))/100;
    }else if(money/0.005 == int(money/0.005)){
        money += 0.001;
        cout<<double(int((money+0.005)*100))/100;
    }
    cout.setf(ios::fixed|ios::showpoint);
    cout<<endl<<setprecision(2)<<money;
}
