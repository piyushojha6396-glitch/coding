#include<iostream>
using namespace std;

class Bike{
public:
    static int noOfBikes; //belong to class
    int tyreSize;
    int engineSize;
    // default constructor
    // values initalize karo
    Bike (int tyreSize, int engineSize=200){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    }


    void setNoofBikes(int no){
        noOfBikes=no;
        noOfBikes++;
    }

};
int main(){
    // Bike tvs(12,100);
    // Bike honda(13,150);
    Bike royalEnfield(15,350);
    royalEnfield.setNoofBikes(1);
    

    Bike bajaj(13);
    // cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    // cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    // cout<<royalEnfield.tyreSize<<" "<<royalEnfield.engineSize<<endl;

}