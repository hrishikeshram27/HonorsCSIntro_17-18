//Hrishikesh Ram 4A

#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

int main(){
    ifstream inFile;
    inFile.open("C://Users/Hrishikesh Ram/Documents/vectorsPractice.txt");
    string number;
    vector <char> numberChars;
    while(inFile.is_open()){
        if(!inFile.is_open()){
            inFile.close();
            cout<<"Unable to open file.";
            break;
        }
        if(inFile.good()){
            getline(inFile, number);
            for(int i=0;i<number.size();i++){
            numberChars.push_back(number[i]);
            }
            if(numberChars.size() == 7){
                numberChars.insert(numberChars.begin()+3, '-');
            }else if(numberChars.size() == 10){
                numberChars.insert(numberChars.begin(), '(');
                numberChars.insert(numberChars.begin()+4, ')');
                numberChars.insert(numberChars.begin()+8, '-');
            }
            for(int j=0;j<numberChars.size();j++){
                cout<<numberChars[j];
            }
            break;
        }
        break;
    }

    inFile.close();
    return 0;
}
