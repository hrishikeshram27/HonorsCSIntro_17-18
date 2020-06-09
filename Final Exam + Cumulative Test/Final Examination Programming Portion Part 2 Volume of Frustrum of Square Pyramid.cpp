// Fix this program
// This program will calculate the volume of the frustum
// of a pyramid. This program contains errors that you
// must fix.

//Hrishikesh Ram Period 4A

#include <iostream>
#include <fstream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    ifstream myfile;
    double volume;
    double side1, side2, height;

    myfile.open("E://pyramid.txt");
    if (!myfile)
        cout << "error reading the input file";
    else{
        for (int i=0; i<5; i++){
            myfile >> height;
            myfile >> side1;
            myfile >> side2;
            int base1 = side1*side1;
            int base2 = side2*side2;
            int volume = (height/3)*(base1+base2+(sqrt((base1*base2))));
            cout << fixed;
            cout << setprecision(3);
            cout << "Pyramid " << i+1 << " volume is " << setw(8) << volume << endl;
        }
    }
}
