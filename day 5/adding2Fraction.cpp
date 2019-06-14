#include<iostream>
using namespace std;

class fractionAdd
{
    int numerator, denominator;
public:

    void add()
    {
    cout<<"Enter the numerator";
    cin>>numerator;
    cout<<"Enter the denominator";
    cin>>denominator;
    }
    friend fractionAdd add(fractionAdd x,fractionAdd y);
    void display()
    {
    cout<<"the sum of the fractions is "<<numerator<<"/"<<denominator;
    }
};


fractionAdd add(fractionAdd x,fractionAdd y)
{
    fractionAdd object;
    object.denominator=x.denominator*y.denominator;
    object.numerator=((object.denominator/x.denominator)*x.numerator)+((object.denominator/y.denominator)*y.numerator);
    return object;
}
int main()
{
    fractionAdd x,y,c;

x.add();

y.add();

c=add(x,y);

c.display();


    return 0;
}
