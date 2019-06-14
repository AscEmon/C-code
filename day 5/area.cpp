#include<bits/stdc++.h>
#define pi 3.14159
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
    int choice,num1,num2;
    while(1)
    {
        cout<<"1.Area of Circle\n2.Area of rectangle\n3.Area of triangle"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
                cout<<"Enter radius:";
                cin>>num1;
                obj.area(num1);
                obj.Display();
                break;
            }
            case 2:
                {
                    cout<<"Enter length:";
                    cin>>num1;
                    cout<<"Enter width:";
                    cin>>num2;
                    obj.area(num1,num2);
                    obj.Display();
                    break;
                }
            case 3:
                {
                    cout<<"Enter Base:";
                    cin>>num1;
                    cout<<"Enter Height:";
                    cin>>num2;
                    obj.area(num1,num2,0.5);
                    obj.Display();
                    break;
                }
            default:
                {
                    cout<<"Invalid input"<<endl;
                }
        }
    }
}
