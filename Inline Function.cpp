#include<iostream>
using namespace std;

class A
{
    public:
    
    int a=10,b=3,c=4;
    float d=4.4,e=5.555,f=.99;
    
    void show();
    void show2();
};

inline void A::show()
{
    cout<<"Show the integar value:"<<endl<<a<<endl<<b<<endl<<c<<endl;
}
inline void A::show2()
{
    cout<<"Show the float value:"<<endl<<d<<endl<<e<<endl<<f<<endl;
}

int main()
{
    A obj;
    obj.show();
    obj.show2();
    
    return 0;
}
