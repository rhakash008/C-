///////////
#include<iostream>
using namespace std;

class A {
public:
static int i;

A(){
cout<<"\nHi\n";
}
};

int A::i = 1;

int main()
{
A obj1;
obj1.i=2;
cout<<"\nobj1 before obj2: "<<obj1.i;
A obj2;
obj2.i=3;

cout<<"\nobj1 after obj2: "<<obj1.i<< ", obj2:"<<
obj2.i<<"\n";
return 0;
}

/////////////////////////////////////

#include<iostream>
using namespace std;

void show()
{
    static int count;
    cout<<" "<<count++;
}

int main()
{
    for(int i=0;i<3;i++)
    {
        show();
    }
}
