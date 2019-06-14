#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int real;
    int img;

public:
    /*void setValues()
    {
        cout<<"Enter real part:";
        cin>>real;
        cout<<"Enter imaginary part:";
        cin>>img;
    }
    void Display()
    {
        cout<<real<<"+i"<<img<<endl;
    }*/
    Complex(int r,int i)
    {
        real=r;
        img=i;
    }
    bool operator >(Complex const &ob)
    {
        if((real>ob.real)&&(img>ob.img))
        {
            return true;
        }
        else return false;
    }
    bool operator <(Complex const &ob)
    {
        if((real<ob.real)&&(img<ob.img))
        {
            return true;
        }
        else return false;
    }
    bool operator==(Complex const &ob)
    {
        if((real==ob.real)&&(img==ob.img))
        {
            return true;
        }
        else return false;
    }
    bool operator!=(Complex const &ob)
    {
        if((real!=ob.real)&&(img!=ob.img))
        {
            return true;
        }
        else return false;
    }
};

int main()
{
    Complex C1(1,2),C2(4,5),C3(1,2);
    if(C1>C2)
    {
        cout<<"Greater\n";
    }
    else cout<<"Not Greater\n";

    if(C1==C3)
    {
        cout<<"Equal\n";
    }
    if(C1<C2)
    {
        cout<<"Smaller\n";
    }
    if(C1!=C2)
    {
        cout<<"Not Equal\n";
    }
    return 0;
}

