// Hrishikesh Ram 4A
// 4-23-2018

#include<iostream>
#include<vector>
#include<string>
#include<locale>
using namespace std;

//declare struct called BOOK with elements title (string), pages (int), author (string), checkedIn (bool, default value of 1)
struct BOOK{
    string title;
    int pages;
    string author;
    bool checkedIn;
};

//bubble sort function
void bubble(vector <BOOK> &vec){
    //create temporary variable char and temporary int to hold char's placement, twice to hold subsequent char in double for loop
    char hold;
    char hold1;
    int pos;
    int pos1;

    //another temp variable to help with switching titles in bubble sort
    BOOK temp;

    //locale for uppercase
    locale loc;

    //create sorted alphabet variable
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


    //get sort type in variable type (string)
    string type;
    cout<<"How would you like to sort? By title, pages, or by author? Type the one you would like here: ";
    cin.ignore();
    cin>>type;

    //if sort type is title, sort by title (string)
    if(type == "title"){
        //double for loop to swap values if out of order using temporary "hold" variable
        for(int i=0; i<vec.size(); i++){
            for(int j=0;j<vec.size()-1;j++){
                //get first char
                hold = vec[j].title[0];
                //convert to uppercase
                hold = toupper(hold,loc);
                //find position in alphabet
                pos = alphabet.find(hold);

                //same thing for j+1 (subsequent char in vec.title {string})
                hold1 = vec[j+1].title[0];
                hold1 = toupper(hold1,loc);
                pos1 = alphabet.find(hold1);

                //if statement to switch the entire BOOK, not just the title (string)
                if(pos>pos1){
                    temp = vec[j];
                    vec[j] = vec[j+1];
                    vec[j+1] = temp;
                }
            }
        }
    }
    //if sort type is author, sort by author (string)
    else if(type == "author"){
        //double for loop to swap values if out of order using temporary "hold" variable
        for(int i=0; i<vec.size(); i++){
            for(int j=0;j<vec.size()-1;j++){
                //get first char
                hold = vec[j].author[0];
                //convert to uppercase
                hold = toupper(hold,loc);
                //find position in alphabet
                pos = alphabet.find(hold);

                //same thing for j+1 (subsequent char in vec.author {string})
                hold1 = vec[j+1].author[0];
                hold1 = toupper(hold1,loc);
                pos1 = alphabet.find(hold1);

                //if statement to switch the entire BOOK, not just the author (string)
                if(pos>pos1){
                    temp = vec[j];
                    vec[j] = vec[j+1];
                    vec[j+1] = temp;
                }
            }
        }
    }

    //if sort type is pages, sort by pages (int)
    else if(type == "pages"){
        //double for loop to swap values if out of order using temporary "hold" variable
        for(int i=0; i<vec.size(); i++){
            for(int j=0;j<vec.size()-1;j++){
                //if statement to switch the entire BOOK, not just the pages (int)
                if(vec[j].pages>vec[j+1].pages){
                    temp = vec[j];
                    vec[j] = vec[j+1];
                    vec[j+1] = temp;
                }
            }
        }
    }
}

//main function
int main(){
    //declare vector of type BOOK (struct)
    vector <BOOK> library;

    //declare temporary BOOK (struct) type variable to store values to input into vector
    BOOK temp;

    //declare boolean type variable to hold answer for entering another book or not
    bool next;

    //get input for variable next (bool)
    cout<<"Would you like to enter a book? Enter '1' for yes or '0' for no here: ";
    cin>>next;

    //if statement to end if first input itself is 0
    if(!next){
        return 0;
    }

    //while the person wants to enter a book
    while(next){
        //gather inputs for all elements of struct and store in variable temp (BOOK struct)
        cout<<"Please enter a title, pages, & author"<<endl;
        cin.ignore();
        getline(cin, temp.title);
        cin>>temp.pages;
        cin.ignore();
        getline(cin, temp.author);

        //default for checkedIn element of struct is true, so automatically set it equal to 1
        temp.checkedIn = 1;

        //add temp to the vector
        library.push_back(temp);

        //gather next input for while loop condition, if 1, then continue, if 0 then break
        cout<<"Would you like to enter another book? Enter '1' for yes or '0' for no here: ";
        cin>>next;
    }

    //call bubble sort function on finished vector library (BOOK)=
    bubble(library);

    //cout categories for the outputs
    cout<<"Title"<<"\t"<<"\t"<<"Pages"<<"\t"<<"\t"<<"Author"<<endl;

    //output the vector's elements
    for(int i=0;i<library.size();i++){
        cout<<library[i].title<<"\t"<<"\t"<<library[i].pages<<"\t"<<"\t"<<library[i].author<<endl;
    }

    //return 0 and end program
    return 0;
}

