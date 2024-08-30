#include<iostream>
using namespace std;

class Base {
public:
void fun() 
{ cout<<"Base"<<endl; }
};
class Parent1 : virtual public Base {
public:
};
class Parent2 : virtual public Base {
public:
};
class Child : public Parent1, public Parent2 {
};
int main()
{
Base *obj; 
obj = new Child;
obj->fun();
return 0;
}
