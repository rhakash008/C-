#include<iostream>
using namespace std;

class A{
  public:
  
  void func(int x)
  {
      cout<<"Value of x: "<<x<<endl;
  }
  void func(double y, double z)
  {
      cout<<"Value of y and z: "<<y<<" "<<z<<endl;
  }
  void func(int a,int b)
  {
      cout<<"Value of a and b: "<<a<<" "<<b<<endl;
  }
};

int main()
{
    A ob;
    ob.func(10);
    ob.func(4.33,7.99);
    ob.func(6,8);
    return 0;
}
