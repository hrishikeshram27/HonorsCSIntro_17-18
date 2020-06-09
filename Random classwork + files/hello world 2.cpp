//Hrishikesh Ram
//Period 4A, 09/01/2017

#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream randomFile;
    randomFile.open("H://My Documents/HelloWorld.txt");
    randomFile<<"Hello World."<<endl;
    randomFile.close();

    return 0;
}
