#include<iostream>
#include<string>
using namespace std;

class A
{
    public:
    void show1()
    {
        cout<<"From class A"<<endl;
    }
};
class B:public A
{
    public:
    void show2()
    {
        cout<<"From class B"<<endl;    
    }
};

class C:public B
{
    public:
    void show3()
    {
        cout<<"From class C"<<endl;
    }
};

int main()
{
    C ob;
    ob.show1();
    ob.show2();
    ob.show3();
    return 0;
}
