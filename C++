#include<iostream>
using namespace std;

class A
{
    private:
    
    float base=55.5;
    float hight=77.03;
    
    friend void Area(A);
   
};

void Area(A ob)
{
    double total=.5*ob.base*ob.hight;
    cout<<"Area of the triangle: "<<total<<endl;
}

int main()
{
    A ob;
    Area(ob);
    return 0;
}
