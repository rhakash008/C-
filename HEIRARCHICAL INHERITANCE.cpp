#include<iostream> //when inherating more then one from base class 
using namespace std;

class A
{
    public:
    void show()
    {
     cout<<"Base Class"<<endl;   
    }
};
class B:public A
{
  public:
  void fun()
  {
      cout<<"1st child class"<<endl;
  }
};
class C:public A
{
    public:
    void print()
    {
        cout<<"2nd child class"<<endl;
    }
};

int main()
{
    B ob; C obj;
    cout<<"Calling from 1st child class"<<endl;
    ob.show();
    ob.fun();
    cout<<endl;
    cout<<"Calling from 2nd child class"<<endl;
    obj.show();
    obj.print();
    return 0;
}
