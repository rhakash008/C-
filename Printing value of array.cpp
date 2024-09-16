#include<iostream>
using namespace std;

class A
{
    public:
    int a[5];
    int sum=0,i;
    
    void show()
    {
        // Taking input
        for(i=0;i<5;i++){
            cin>>a[i];
        }
        //For output
        for(i=0;i<5;i++){
            cout<<a[i]<<" ";
        }
    }
};

int main()
{
    A ob;
    ob.show();
    
    return 0;
}
