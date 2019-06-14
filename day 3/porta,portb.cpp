#include<iostream>
using namespace std;
class portB;
class portA
{
    int m;
public:
    portA(int a)
    {
        m=a;
    }
    friend int state(portA a,portB b);
};
class portB
{
    int m;
public:
    portB(int b)
    {
        m=b;
    }
    friend int state(portA a,portB b);
};
int state(portA a,portB b)
{
    if(a.m==0 &&b.m==0)
    {
        return 0;
    }
    else if(a.m==0 &&b.m==1)
    {
        return 1;
    }
     else if(a.m==1 &&b.m==0)
    {
        return 2;
    }
     else if(a.m==1 &&b.m==1)
    {
        return 3;
    }
    else
    {
        return 9;
    }
}
int main()
{
    int a,b;
    cout<<"PortA=";
    cin>>a;
    cout<<endl<<"PortB=";
    cin>>b;
    cout<<endl<<endl<<state(a,b);
    return 0;
}
