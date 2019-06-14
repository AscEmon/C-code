#include<iostream>
using namespace std;
namespace function1
{
    int add(int x,int y)
    {
        return x+y;
    }
}
namespace function2
{
    void add(int x,int y)
    {
        cout<<x+y;
    }
}
using namespace function2;
int main()
{
    int a,b;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;

    add(a,b);
    //cout<<c;
    return 0;

}
