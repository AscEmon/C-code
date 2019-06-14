#include<iostream>
#include<cstdio>
#define pi 3.141599831
using namespace std;

class Area
{
    double result;
public:

    void area(double n)
    {
        result=pi*n*n;
    }
    void area(double n,double m)
    {
        result=n*m;
    }
    void area(double n,double m,double p)
    {
        result=n*m*p;
    }
    void Display()
    {
        cout<<"The area is: "<<result<<endl;
    }
};

int main()
{
    Area obj;
    int a,b,c,n;
    {
        while(n){
        cout<<"1.Area of Circle\n2.Area of rectangle\n3.Area of triangle"<<endl;
        cout<<"Enter your choice:"<<endl;

        cin>>c;

        switch(c)
        {
        case 1:
            {
                cout<<"Enter radius:";
                cin>>a;
                obj.area(a);
                obj.Display();
                break;
            }
            case 2:
                {
                    cout<<"Enter length:";
                    cin>>a;
                    cout<<"Enter Breadth:";
                    cin>>b;
                    obj.area(a,b);
                    obj.Display();
                    break;
                }
            case 3:
                {
                    cout<<"Enter Base:";
                    cin>>a;
                    cout<<"Enter Height:";
                    cin>>b;
                    obj.area(a,b,0.5);
                    obj.Display();
                    break;
                }
            default:
                {
                    cout<<"I am a machine not an ass "<<endl;
                }
        }
        cout<<"press 1 to continue or press 0 to stop";
        cin>>n;
}
    }
}
