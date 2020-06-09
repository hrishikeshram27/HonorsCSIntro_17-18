//Hrishikesh Ram 4A

#include<iostream>
#include<string>
using namespace std;

void input(double a1[]){
    cout<<"Input: ";
    for(int i=0; i<3; i++){
        cin>>a1[i];
    }
}

string shapeName(double a1[]){
    string shapeName;
    if(a1[0] == 3){
        shapeName = "Triangle";
    }else if(a1[0] == 4){
        shapeName = "Quadrilateral";
    }else if(a1[0] == 5){
        shapeName = "Pentagon";
    }else if(a1[0] == 6){
        shapeName = "Hexagon";
    }else if(a1[0] == 7){
        shapeName = "Heptagon";
    }else if(a1[0] == 8){
        shapeName = "Octagon";
    }else if(a1[0] == 9){
        shapeName = "Nonagon";
    }else if(a1[0] == 10){
        shapeName = "Decagon";
    }else{
        shapeName = "Whoops! That isn't a valid number of sides! Try again.";
    }
    return shapeName;
}

double area(double a1[]){
    double perimeter = ((a1[0])*(a1[1]));
    double area = ((0.5)*(perimeter)*(a1[2]));
    return area;
}

void output(double a1[], double a2[], double a3[], double a4[], double a5[]){
    string a = shapeName(a1);
    string b = shapeName(a2);
    string c = shapeName(a3);
    string d = shapeName(a4);
    string e = shapeName(a5);

    cout<<endl<<a<<" Area = "<<area(a1)<<endl<<endl;
    cout<<b<<" Area = "<<area(a2)<<endl<<endl;
    cout<<c<<" Area = "<<area(a3)<<endl<<endl;
    cout<<d<<" Area = "<<area(a4)<<endl<<endl;
    cout<<e<<" Area = "<<area(a5)<<endl<<endl;
}

int main(){
    double a1[3];
    double a2[3];
    double a3[3];
    double a4[3];
    double a5[3];

    input(a1);
    input(a2);
    input(a3);
    input(a4);
    input(a5);

    output(a1,a2,a3,a4,a5);

    return 0;
}
