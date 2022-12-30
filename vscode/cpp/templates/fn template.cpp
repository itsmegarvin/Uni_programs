#include<iostream>
using namespace std;
template<class T1,class T2>
void add(T1 m,T2 n)
{
    cout<<"the sum is"<<m+n<<endl;
}
int main()
{
    int a=4,sum;
    float b=3.3;
    add(a,b);
    return 0;

}