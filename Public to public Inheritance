#include<iostream>
using namespace std;

class A
{
    public:
    string name;
    int age;
    
    void show()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class B: public A{
    public:
    int id;
    void show2(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main()
{
    B ob;
    ob.id=3780;
    ob.name="Akash";
    ob.age=22;
    ob.show2();
    return 0;
}
