//Print the Big with template

#include<iostream>
using namespace std;

template<typename T>T myMax(T x,T y)
{
    return(x>y)?x:y;
}
int main()
{
    cout<<myMax<int>(3,7)<<endl;
    cout<<myMax<float>(4.5,4.4)<<endl;
    cout<<myMax<char>('g','f')<<endl;
    return 0;
}

//Size of DATA in byte

#include<iostream>
using namespace std;

template<class T>class info
{
    public:
    info(T A)
    {
        cout<<"\n"<<"A="<<A<<"Size of data in bytes: "<<sizeof(A);
    }
};
int main()
{
info<char>p('a');
info<int>q(40);
info<float>r(7.99);
return 0;
}
