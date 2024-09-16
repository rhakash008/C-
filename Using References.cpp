#include<iostream>
using namespace std;

void swap(int &a, int &b) //creat references of a and b using (&)
{
    int temp =a;
    a=b;
    b=temp;
}

int main()
{
    int x=20;
    int y=30;
    
    cout<<"Before swapping: x= "<<x<<", y= "<<y<<endl;
    
    swap(x,y); //swapping the location value to use the references
    cout<<"After swapping: x= "<<x<<", y= "<<y<<endl;
    
}
