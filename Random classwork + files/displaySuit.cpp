//Hrishikesh Ram Period 4A
//11-09-2017

#include<iostream>
using namespace std;

void converter(char c[]){
    for(int i=0;i<13;i++){
        c[i]=c[i]+4;
    }
}

void displaySuit(char faces[], char suits[], int&n){
    cout<<"Menu:"<<endl<<endl<<"View: "<<endl;
    cout<<"1)Clubs"<<endl<<"2)Diamonds"<<endl<<"3)Spades"<<endl<<"4)Hearts"<<endl<<"5)Quit"<<endl<<"6)Convert"<<endl;
    cin>>n;
    while(n != 5){
        if(n==1){
            for(int i=0;i<13;i++){
                cout<<faces[i]<<suits[0]<<endl;
            }
        } else if (n==2){
            for(int i=0;i<13;i++){
                cout<<faces[i]<<suits[1]<<endl;
            }
        } else if (n==3){
            for(int i=0;i<13;i++){
                cout<<faces[i]<<suits[2]<<endl;
            }
        } else if (n==4){
            for(int i=0;i<13;i++){
                cout<<faces[i]<<suits[3]<<endl;
            }
        } else if (n==6){
            converter(faces);
        }
        cout<<"Menu:"<<endl<<endl<<"View: "<<endl;
        cout<<"1)Clubs"<<endl<<"2)Diamonds"<<endl<<"3)Spades"<<endl<<"4)Hearts"<<endl<<"5)Quit"<<endl;
        cin>>n;
    }
}

int main(){
    int n;
    char faces[13] = {'1','2','3','4','5','6','7','8','9','J','Q','K','A'};
    char suits[4] = {'C','D','S','H'};
    displaySuit(faces,suits,n);
    return 0;
}
