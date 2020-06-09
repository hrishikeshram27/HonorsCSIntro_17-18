//Hrishikesh Ram 4A

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    //open input file
    ifstream inFile;
    inFile.open("D://inputoutputpractice1.txt");

    //create string (can be int as well, or other types) to take input from file
    string input;

    //get input
    while(inFile.good()){
        getline(inFile,input);
    }

    //close input file
    inFile.close();

    cout<<input<<endl;

    //open output file
    ofstream outFile;
    outFile.open("D://inputoutputpractice2.txt");

    //write input to output file
    outFile << input;

    //close output file
    outFile.close();

    //return 0 to end program
    return 0;
}
