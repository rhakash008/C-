#include<iostream>
using namespace std;

class A{
    int n;
    
    public:
    A(){
        n=0;
    }
    void operator++()
    {
        ++n;
    }
    void operator++(int)
    {
        ++n;
    }
    void display()
    {
        cout<<"Value: "<<n<<endl;
    }
    
};

int main()
{
    A ob;
    ob.display();
    ++ob;
    ob.display();
    return 0;
    
}
