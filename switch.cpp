#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"case 1 for sum\ncase 2 for multiplication\n";
    cout<<"enter the value :";
    cin>>x;
    switch(x)
    {
        case 1:
        {
            int x,y,z=0;
            cout<<"enter the numbers";
            cin>>x>>y;
            z=x+y;
            cout<<"sum : "<<z;
            break;
        }
        case 2:
        {
            int x,y,z=0;
            cout<<"enter the numbers";
            cin>>x>>y;
            z=x*y;
            cout<<"multiplications:"<<z;
            break;
        }
        default:
        cout<<"invalid choice";
    }
    return 0;
}