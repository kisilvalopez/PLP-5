#include <iostream>
#include <string>
using namespace std;

//PLP5 create an object
class Simmons{
    //give object class attributes 
    //access specifier
public: 
    //data members
    //our variable, a string 'stormy'
    std::string stormy;
    //our function that will print out our sentence
    void printname(){ cout << "Stormy is: " << stormy << endl; }
};

class SimmonsInheritance: public Simmons{
public:
    //extra data member
    std::string extraInfo;
    //and extra member function
    void printExtraInfo(){
        cout << "Is Stormy Simmon's mascot? " << extraInfo << endl;
    }
};

int main(){
    //creating our object within main that will inherit from our first object
    SimmonsInheritance object1;

    //object that is instantiated and modified that we're giving to our functions
    object1.extraInfo = "Yes!!!!! ";
    object1.stormy = "a Shark!";

    //calling our functions
    object1.printExtraInfo();
    object1.printname();
    return 0;
}
