#include<iostream>
using namespace std;
class Complex
{
    int a,b;
public:
    Complex()
    {
        a=b=0;
    }
    Complex(int x,int y)
    {
        a=x;
        b=y;
    }
    Complex operator +(Complex C2);
    Complex operator -(Complex C2);
    Complex operator ++();
    Complex operator ++(int unused);
    void show()
    {
        if(b>=0)
        {
            cout<<a<<"+"<<b<<"i"<<endl;
        }
        else
        {
            cout<<a<<b<<"i"<<endl;
        }
    }


};

Complex Complex:: operator+(Complex C2)
{
    Complex C3;
    C3.a=a+C2.a;
    C3.b=b+C2.b;
    return C3;
}
Complex Complex:: operator-(Complex C2)
{
    Complex C3;
    C3.a=a-C2.a;
    C3.b=b-C2.b;
    return C3;
}
Complex Complex:: operator++()
{
    Complex C3;
    a++;
    b++;
    return *this;
}
Complex Complex:: operator++(int unused)
{

    ++a;
    ++b;
    return *this;
}

int main()
{

  Complex C1(1,2), C2(4,5),C3;
   C3=C1+C2;
   C3.show();
   C3=C1-C2;
   C3.show();
   C3 = ++C1;
   C3.show();
   C3 = C2++;
   C3.show();
}
