#include<bits/stdc++.h>
using namespace std;
class rectangle
{
public:
    int length, breadth;
    void getArea()
    {
        cout<<"Area is :"<<length*breadth<<endl;
    }

};
int main()
{
    int s,b;
    cout<<"length:";
    cin>>s;
    cout<<"breadth:";
    cin>>b;
    rectangle a;
    a.length=s;
    a.breadth=b;
    a.getArea();
    return 0;
}

