#include<iostream>
using namespace std;
template<class T>
class A
{
    public:
    T a;
};
template<class T>
class B:public A<T>
{
    public:
    T b;
};

int main()
{
    B <int>o1;
    B <int>o2;
    o1.b=10;
    o2.a=20;
    cout<<"the value of a is"<<o2.a;
    return 0;
}
    