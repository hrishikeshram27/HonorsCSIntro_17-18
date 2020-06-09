//Hrishikesh Ram 4A

#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

//function that bubble sorts a vector (can use for array as well)
void bubble(vector <int> &vec){
    //create temporary variable
    int hold;

    //double for loop to swap values if out of order using temporary "hold" variable
    for(int i=0; i<vec.size(); i++){
        for(int j=0; j<vec.size(); j++){
            if(vec[j]>vec[j+1]){
                hold=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=hold;
            }
        }
    }
}

//main function
int main(){
    //declare vector
    vector <int> vec1;

    //declare input file stream called myFile and open the bubblesorttext.txt file
    ifstream myFile;
    myFile.open("D://bubblesorttext.txt");

    //declare integer variable "value" as a temporary variable to store myFile values and push them back to the vector
    int value;

    //while there are still lines to take in, keep pushing back the ints to the vector
    while(myFile.good()){
        myFile>>value;
        vec1.push_back(value);
    }

    //call bubble sort function on the vector
    bubble(vec1);

    //for loop to output vector elements, each on a separate line
    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<endl;
    }

    //close file
    myFile.close();

    //return 0 to end program
    return 0;
}
