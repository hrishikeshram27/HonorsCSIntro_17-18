#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char storage[13];
    ifstream cards;
    cards.open("H://My Documents/cards.txt");
    if(cards.is_open()){
        int i = 0;
        while(cards.good()){
            cards>>storage[i];
            cout<<storage[i]<<endl;
            i++;
        }
    } else {cout<<"Unable to open file";}

    cout<<storage;
    return 0;
}
