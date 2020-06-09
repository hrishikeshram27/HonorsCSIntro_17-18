//Hrishikesh Ram Period 4A
//1-7-2017

#include<iostream>
using namespace std;

void input(int &a){
    cout<<"Please enter an integer: ";
    cin>>a;
}

void setUp(int arrayOfSquares[], int &sumOfArray, int a){
    for(int i=0;i<a;i++){
        arrayOfSquares[i]=(i+1)*(i+1);
        sumOfArray += arrayOfSquares[i];
    }
}

void output(int arrayOfSquares[], int sumOfArray, int a){
    cout<<"Your array is: "<<endl;
    for(int j=0;j<a;j++){
        cout<<arrayOfSquares[j]<<"\t";
    }
    cout<<endl<<endl;
    cout<<"The average is: "<<endl;
    cout<<((double(sumOfArray))/(double(a)))<<endl;
}

int main(){
    int sumOfArray = 0;
    int a;
    input(a);
    int arrayOfSquares[a];
    setUp(arrayOfSquares, sumOfArray, a);
    output(arrayOfSquares, sumOfArray, a);

    return 0;
}
