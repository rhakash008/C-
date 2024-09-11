#include<iostream>
using namespace std;

class A{
    private:
    int num;
    
    public:
    A(int n){
        num=n;
    }
    A operator+(A ob2)
    {
        A ob3(0);
        ob3.num=num+ob2.num;
        return ob3;
    }
    void show()
    {
        cout<<"Value: "<<num<<endl;
    }
    
};

int main()
{
    A ob1(5);
    A ob2(10);
    A sum(0);
    sum=ob1+ob2;
    sum.show();
    
    return 0;
    
}
