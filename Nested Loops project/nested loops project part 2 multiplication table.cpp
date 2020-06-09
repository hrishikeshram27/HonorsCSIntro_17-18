//Hrishikesh Ram
//Period 4A 10/25/2017

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int a=0;a<n;a++){

        for (int b=0;b<n;b++){
            cout<<(a+1) * (b+1)<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
