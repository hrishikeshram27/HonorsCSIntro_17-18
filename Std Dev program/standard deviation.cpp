//Hrishikesh Ram
//Period 4A

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

void input(int&x, int&y, int &a, int &b, int &c) {
    cout<<"Please enter 5 values: "<<endl;
    cin>>x;
    cin>>y;
    cin>>a;
    cin>>b;
    cin>>c;
}

double meanOf5(int a, int b, int c, int d, int e) {
    return (a + b + c + d + e)/5.0;
}

double StdDev (int a, int b, int c, int d, int e) {
    double avg = meanOf5(a,b,c,d,e);
    double diff1 = (a - avg)*(a-avg);
    double diff2 = (b - avg)*(b-avg);
    double diff3 = (c - avg)*(c-avg);
    double diff4 = (d - avg)*(d-avg);
    double diff5 = (e - avg)*(e-avg);
    double avgOf5 = (diff1 + diff2 + diff3 + diff4 + diff5)/5.0;
    return sqrt(avgOf5);
}

void output(double mean, double SD) {
    cout.setf(ios::fixed|ios::showpoint);
    cout<<setprecision(3);
    cout<<"Calculating..."<<endl;
    cout<<"Mean: "<<mean<<endl<<"Standard Deviation: "<<SD<<endl;

    if (SD <= 10) {
        cout<<"SD range: Low";
    } else if (SD > 10 && SD < 50){
        cout<<"SD range: Mid";
    } else {
        cout<<"SD range: High";
    }
}

int main() {
    int one, two, three, four, five;
    cout<<"Welcome to the standard deviation calculator!";
    input(one, two, three, four, five);
    double Final_Mean = meanOf5(one, two, three, four, five);
    double Standard_Deviation = StdDev(one, two, three, four, five);
    output(Final_Mean, Standard_Deviation);

    return 0;
}
