#include<iostream>
#include<math.h>
using namespace std;
class coordinate
{
    double x,y,r,theta;
public:

    void setCoordinate()
    {
        cin>>r;
        cin>>theta;

    }
    void fun()
    {
    x=r*cos(theta*(3.1416/180));
    y=r*sin(theta*(3.1416/180));
    }
    double getFunx()
    {
        return x;
    }
    double getFuny()
    {
        return y;
    }
};

int main(void)
{
    coordinate ob;
    ob.setCoordinate();
    ob.fun();
    cout<<"X="<<ob.getFunx();
    cout<<"Y="<<ob.getFuny();

}
