//Hrishikesh Ram
//Period 4A 09/18/2017

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

double Distance (int x1, int y1, int x2, int y2){
    return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}

double avgOf2 (int x, int y){
    return (x+y)/2.0;
}

double slope (int x1, int y1, int x2, int y2){
    return (double(y2)-double(y1))/(double(x2)-double(x1));
}

void output(int x1,int y1, int x2, int y2){
    double midX = avgOf2(x1,x2);
    double midY = avgOf2(y1,y2);
    double distance = Distance(x1,y1,x2,y2);
    double Slope = slope(x1,y1,x2,y2);[]

    cout<<setprecision(3);
    cout.setf(ios::fixed|ios::showpoint);
    cout<<endl<<setw(10)<<"The distance between the two points ("<<setw(10)<<x1<<","<<setw(10)<<y1<<") and ("<<x2<<","<<y2<<") is "<<distance<<" units."<<endl;
    cout<<endl<<setw(10)<<"The midpoint between the two points ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is ("<<midX<<","<<midY<<")."<<endl;
    cout<<endl<<setw(10)<<"The slope of the line between the two points ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is "<<Slope<<"."<<endl;

}

int main(){
    int x1,x2,y1,y2;
    cout<<"This program will return the midpoint of and the distance between two points."<<endl;
    cout<<endl<<"Enter the x value of the first point: ";
    cin>>x1;
    cout<<endl<<"Enter the y value of the first point: ";
    cin>>y1;
    cout<<endl<<"Enter the x value of the second point: ";
    cin>>x2;
    cout<<endl<<"Enter the y value of the second point: ";
    cin>>y2;
    output(x1,y1,x2,y2);

    return 0;
}
