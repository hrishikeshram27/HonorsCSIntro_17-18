//Hrishikesh Ram 4A

#include<iostream> // standard
#include<string> // str.erase()
#include<algorithm> // remove
using namespace std;

string delSpaces(string &str){
    //erase all chars, in this case spaces, although this can be changed
    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    //return string with no spaces
    return str;
}

int main(){
    string hello = "h e l l o";
    cout<<hello<<endl;
    delSpaces(hello);
    cout<<hello<<endl;
    return 0;
}
