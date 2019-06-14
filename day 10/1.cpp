#include<iostream>
using namespace std;

class Bits
{
    int bit;
public:
    Bits(){bit=0;}

    friend istream& operator>>(istream  &is,Bits &b);
    friend ostream& operator<<(ostream  &is,Bits &b);

    Bits operator &(Bits & ob)
    {
        Bits tmp;
        tmp.bit=bit&ob.bit;
        return tmp;
    }
    Bits operator|(Bits &ob)
    {
        Bits tmp;
        tmp.bit=bit|ob.bit;
        return tmp;
    }


    Bits operator^(Bits  &ob)
    {
        Bits tmp;
        tmp.bit=bit^ob.bit;
        return tmp;
    }
    Bits operator! ()
    {
        Bits tmp;
        tmp.bit=!bit;
        return tmp;
    }


};
istream &operator>>(istream &is,Bits &b)
{
    is>>b.bit;
    return is;
}
ostream& operator<<(ostream &os,Bits &b)
{
    os<<b.bit;
    return os;
}

int main()
{
    Bits b1,b2;
    cout<<"A=";
    cin>>b1;
    cout<<endl<<"B=";
    cin>>b2;
    Bits b3=b1&b2;
    cout<<"AND:"<<b3<<endl;
    Bits b4= !(b1&b2);
    cout<<"NAND:"<<b4<<endl;
    Bits b5=b1|b2;
    cout<<"OR:"<<b5<<endl;
    Bits b6= !(b1|b2);
    cout<<"NOR:"<<b6<<endl;
    Bits b7=b1^b2;
    cout<<"XOR:"<<b7<<endl;
    Bits b8= !(b1^b2);
    cout<<"XNOR:"<<b8<<endl;
    Bits b9= !b2;
    cout<<"NOT:"<<b9<<endl;

    return 0;
}
