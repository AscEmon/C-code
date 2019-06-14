#include<iostream>
using namespace std;
inline int max(int a,int b)
{
    return(a>b?a:b);
}
int main()
{
    int x,y;
    cout<<"X:";
    cin>>x;
    cout<<"Y:";
    cin>>y;
    max(x,y);
    cout<<"The maximum number is"<<max(x,y);

    return 0;
}


