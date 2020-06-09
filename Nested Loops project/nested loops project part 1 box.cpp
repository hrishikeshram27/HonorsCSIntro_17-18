//Hrishikesh Ram
//Period 4A 10/23/2017

#include<iostream>

using namespace std;

int main(){
    int s;
    cin>>s;
    int x=0;
    while (x<s+2){
        if(x==0)
        {
            int m=0;

            cout<<"+";

            while(m<s)
            {
                cout<<"/\\";
                m++;
            }

            cout<<"+";
            cout<<endl;
        } else if(x!=s+1){
            int n=0;

            cout<<"|";

            while(n<s)
            {
                cout<<"  ";
                n++;
            }

            cout<<"|";
            cout<<endl;
        } else{
            int p=0;

            cout<<"+";

            while(p<s)
            {
                cout<<"/\\";
                p++;
            }

            cout<<"+";
            cout<<endl;
        }
        x++;
    }
    return 0;
}
