#include<iostream>
#define PI 3.1415
using namespace std;

float area(float);
float area(float,float);

int main()
{
    float radius,length,breadth;
    cout<<"enter the radius for the circle:"<<endl;
    cin>>radius;
    cout<<"enter the length and breadth for the rectangle:"<<endl;
    cin>>length>>breadth;
    area(radius);
    cout<<"the area of the circle of radius"<<""<<radius<<""<<"is"<<""<<area(radius)<<endl;
    area(length,breadth);
    cout<<"the area of rectangle of length"<<""<<length<<""<<"and breadth"<<""<<breadth<<""<<"is"<<area(length,breadth);
}
float area(float p)
{
    float a;
    a= PI*p*p;
    return a;
}
float area(float m,float n)
{
    float a;
    a=m*n;
    return a;
}
