#include <iostream>
#include<string>
using namespace std;

class businessman{
public:
   
    string name;
    string company;
    string post;
     businessman(string name , string company,string post){
        this->company=company;
        this->name=name;
        this->post=post;
       
    }

    };

int main()
{
    businessman t1("Nauman","Software house","Founder");

    // creating dynamic memory in which we dont need to declare any variable
// we create pointer to store some value
    int*ptr= new int(432);
    cout<<*ptr<<endl;
    //we can also print the adress of that new int 
    cout<<ptr;

  
    return 0;
}