//Hrishikesh Ram
//Period 4A

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    double storage[10];
    ifstream olympic;
    olympic.open("H://My Documents/olympic average file.txt");
    int i = 0;
    if(olympic.is_open()){
        while(olympic.good()){
        olympic>>storage[i];
        i++;
        }
        double mx=storage[0], mn=storage[0];
        for(int i=0;i<10;i++){
            if(storage[i]>mx){
                mx = storage[i];
            }else if (storage[i]<mn){
                mn = storage[i];
            }
        }
        for(int i=0;i<10;i++){
            if(storage[i]==mx){
                storage[i] = 0;
            }else if(storage[i]==mn){
                storage[i] = 0;
            }
        }
        double sum=0, avg;
        for (int i=0;i<10;i++){
            sum += storage[i];
        }
        avg = sum/8;
        cout<<"Average: "<<avg<<endl<<"High Score: "<<mx<<endl<<"Low Score: "<<mn<<endl;
    } else {cout<<"Unable to open file.";}
}
