#include<iostream>
using namespace std;
int main(void)
{
    char a[]="Nawlen kabir Arnob";
    char *X=a;
    while(!*X==NULL)
    {
        cout<<*X;
        X++;
    }
}

