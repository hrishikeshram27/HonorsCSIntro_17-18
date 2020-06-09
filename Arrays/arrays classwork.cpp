//Hrishikesh Ram 11-3-2017
//Period 4A

#include<iostream>
using namespace std;

int main(){
    int numbers[5];

    for (int i=0;i<5;i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>numbers[i];
    }
    int k = 0;
    for (int i=0;i<5;i++){
        cout<<numbers[i]<<endl;
        k += numbers[i];
    }
    cout<<"The sum of these numbers is: "<<k<<endl<<"The average of these numbers is: "<<k/5<<endl;

    return 0;
}
