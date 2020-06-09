//Hrishikesh Ram, 05-03-2018
//Intro to CS, Cumulative Test
//gather all libraries and declare usage of standard namespace
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<locale>
using namespace std;
//void function to gather inputs from a file and place into vector
void input(vector <string> &vec){
    //input file stream, and open file to read in from
    ifstream myFile;
    myFile.open("E://INTRO TO CS CUMULATIVE TEST TEXT FILE.txt");
    //temp string to use to input getline values into vector vec
    string temp;
    //while loop to getline values and put them into temp and then into vector
    while(myFile.good()){
        getline(myFile,temp);
        vec.push_back(temp);
    }
    //output "Original Inputs", then output original vector that is unsorted, for later on
    cout<<"Original Inputs:"<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
}
//void function to sort vector
void strSort(vector <string> &vec){
    //temp string to hold vector elements when switching
    string temp;
    //double for loop and if statement to compare and sort strings
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size()-1;j++){
            if(vec[j]>vec[j+1]){
                temp = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = temp;
            }
        }
    }
}
//void function to output the vector correctly
void output(vector <string> &vec){
    //locale variable to convert first letter of each string to upper case
    locale loc;
    //for loop to make sure the first letter of each string is capitalized
    for(int i=0;i<vec.size();i++){
        (vec[i])[0] = toupper((vec[i][0]),loc);
    }
    //output "Final Output"
    cout<<endl<<"Final Outputs:"<<endl;
    //for loop to display vector
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
}
//main function
int main(){
    //declare vector to call functions on
    vector <string> GroceryList;
    //call functions on vector
    input(GroceryList);
    strSort(GroceryList);
    output(GroceryList);
    //return 0 to end program
    return 0;
}
