//Hrishikesh Ram Period 4A
//10-13-2017

#include<iostream>
#include<iomanip>
using namespace std;

void input(double &principal, double &rate, int &years) {
    cout<<"Welcome to the Interest Calculator!"<<endl;
    cout<<"Initial Principal: $";
    cin>>principal;
    cout<<"Interest Rate (in %): ";
    cin>>rate;
    cout<<"Years accrued: ";
    cin>>years;
}

double calcInterest(double principal, double rate) {
    double x = principal*(rate*0.01);
    return x;
}

void output(double &principal, int &years, double &rate) {
    cout.setf(ios::showpoint|ios::fixed);
    cout<<setprecision(2);
    cout<<"Your interest accumulation would be: "<<endl;
    cout<<"Year   Interest   New Total"<<endl;
    for(int i=1; i<=years; i++) {
        double accumInt = calcInterest(principal,rate);
        double newTotal = accumInt + principal;
        cout<<i<<"      $"<<left<<accumInt<<"   $"<<left<<newTotal<<endl;
        principal = newTotal;
    }
}

int main() {
    int years;
    double principal, rate;

    input(principal, rate, years);
    output(principal, years, rate);
    double a = 4;

    return 0;
}
