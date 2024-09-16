#include<iostream>
using namespace std;

class A
{
    protected:
    string name="Akash";
    int age=22;
    
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class B: public A{
    public:
    int id=3780;
    void show2(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main()
{
    B ob;
    
    ob.show2();
    return 0;
}
