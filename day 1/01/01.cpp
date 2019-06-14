 #include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"input numbers:";
cin>> a,cin>>b,cin>>c;
if(a>b&&a>c)
{
    cout<<a<<"is maximum\n";
    if(b<c)
    {
        cout<<b<<"is minimum";
    }
    else
    {
        cout<<c<<"is minimum";
    }
}
else if(c>a && c>b)
{
    cout<<c<<"is maximum\n";
    if(b<a)
    {
        cout<<b<<"is minimum";
    }
    else
    {
        cout<<a<<"is minimum";
    }
}

else if(b>c&&b>a)
{
    cout<<b<<"is maximum\n";
    if(c<a)
    {
        cout<<c<<"is minimum";
    }
    else
    {
        cout<<a<<"is minimum";
    }
}


    return 0;
}

