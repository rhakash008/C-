#include<iostream>
using namespace std;

int main()
{
    int x=5;
    int* ptr= &x;
   
    cout<<"First the value of x: "<<*ptr<<endl;
    
    ptr=new int(6);
    cout<<"Giving value using new: "<<*ptr<<endl;
    
    delete ptr;
    cout<<"Using Delete: "<<*ptr<<endl; //To free the memory
    ptr=nullptr;
    return 0;
}
