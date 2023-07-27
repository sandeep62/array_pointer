#include<iostream>
using namespace std;
int add(int x,int y)
{
    int z=0;
    z=x+y;
    return z;
}
int main()
{
    int a=10,b=30;
    cout<<"the summation is :";
    cout<<add(a,b);
    return 0;
}