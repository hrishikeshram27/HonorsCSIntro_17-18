//Hrishikesh Ram and Victor Ramcharan

#include<iostream>
#include<fstream>
#include<locale>
#include<string>
using namespace std;

void input(string &str){
    ifstream myFile;
    myFile.open("H://My Documents/final input file.txt");
    while(myFile.good()){
        getline(myFile,str);
    }
}

void lowerToUpper(string &str){
    locale loc;
    for(int i=0;i<str.size();i++){
        str[i] = toupper(str[i],loc);
    }
}

void output(string &str){
    ofstream myFile;
    myFile.open("H://My Documents/final output file.txt");
    myFile<<str;
}

int main(){
    string inputS;
    input(inputS);
    lowerToUpper(inputS);
    output(inputS);

    return 0;
}
