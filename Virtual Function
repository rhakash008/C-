#include<iostream>

using namespace std;
class Base {
public:
virtual void print() {
cout<<"Base Function"<<endl;
}
};
class Derived1 : public Base {
public:
void print() {
cout<<"Derived Function 1"<<endl;
}
};
class Derived2 : public Base
{
    public:
    void print()
    {
        cout<<"Derived Function 2"<<endl;
    }
};

int main() {
Base *ptr;
ptr = new Derived1;
ptr->print();
ptr = new Derived2;
ptr->print();

return 0;
}
