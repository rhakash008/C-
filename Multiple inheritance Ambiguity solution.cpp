#include<iostream>
#include<string>
using namespace std;

class shop1
{
    public:
    void show()
    {
        cout<<"First shop"<<endl;
    }
};
class shop2
{
    public:
    void show()
    {
        cout<<"Second shop"<<endl;    
    }
};

class owner:public shop1,public shop2
{
    
};

int main()
{
    owner ob;
    ob.shop1::show(); //using scope resulation(::) to point the show function which we want to call
    ob.shop2::show();
    return 0;
}
