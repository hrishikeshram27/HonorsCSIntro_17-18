//Hrishikesh Ram
//Period 4A 10/9/17

#include<iostream>
using namespace std;

int main() {
    int x = 0;
    int total = 0;

    while (x < 10) {
        total += 1;
        x++;
        cout<<total<<endl;
    }

    for (int i=1;i<30;i++) {
        total += 2;
        cout<<total<<endl;
    }

    do {
        cout<<"The total is: "<<total<<endl;
    }while(total<30);

    return 0;
}
