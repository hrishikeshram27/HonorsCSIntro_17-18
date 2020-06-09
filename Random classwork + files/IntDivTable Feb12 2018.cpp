//Hrishikesh Ram Pd.4A

#include<iostream>
#include<fstream>
using namespace std;

/*
Note: Can do this program in 3 lines with the following:
    int seed,a,b;
    cin>>seed>>a>>b;
    cout<<(b+(seed-1))/(a+(seed-1));
*/

int main(){
    int seed, rownum, colnum;
    cout<<"Please input start seed for numerator and denominator.";
    cin>>seed;
    int table[6][6];

    table[0][0] = -1;
    for(int i=1;i<6;i++){
        table[0][i] = seed;
        seed++;
    }
    seed-=5;

    for(int i=1;i<6;i++){
        table[i][0] = seed;
        seed++;
    }
    seed-=5;

    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            table[i][j] = (j+(seed-1))/(i+(seed-1));
        }
    }

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cout<<table[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<endl<<"Please input a row and column number (both 1-5) in that order to see the value: ";
    cin>>rownum>>colnum;
    cout<<endl<<table[rownum][colnum]<<endl;

    return 0;
}
