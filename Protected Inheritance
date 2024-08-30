#include<iostream>
using namespace std;

class person
{
    protected:
    string name="Akash";
   
    public:
     int age=22;
     
   // private:
     //id=3780;
};

class student: protected person{
  public:
  void show()
  {
      cout<<"Name: "<<name<<endl;
      cout<<"Age: "<<age<<endl;
      //cout<<"ID: "<<id<<endl;
  }
};

int main()
{
    student ob;
    ob.show();
    return 0;
}
