#include<iostream>
#include<string>
using namespace std;

class shop1
{
    public:
    float payment=600;
};
class shop2
{
    public:
    float due=400;
};

class owner:public shop1,public shop2
{
    
};

int main()
{
    owner ob;
    cout<<"Payment:"<<ob.payment<<endl;
    cout<<"Due: "<<ob.due<<endl;
    return 0;
}
