#include<iostream>
using namespace std;

class A
{
    public:
    int a[5];
    int sum=0,i;
    void show()
    {
        for(i=0;i<5;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
         cout<<"SUM: "<<sum<<endl;
    }
};

int main()
{
    A ob;
    ob.show();
   // cout<<"SUM: "<<sum<<endl;
    return 0;
}
