#include<iostream>
using namespace std;
class point
{
    int a,b;
    char c;
public:
    point (char C, int A, int B)
    {
        c=C;
        a=A;
        b=B;
    }
    ~point()
    {

    }
    point operator ++(int)
    {
        point temp;
        temp.a=++a;
        temp.b=++b;
        temp.c=c;
        return temp;
    }
    point operator ++(int unused)
    {

        point temp;
        temp.a=a++;
        temp.b=b++;
        temp.c=c;
        return temp;
    }
    point operator --(int)
    {

        point temp;
        temp.a=--a;
        temp.b=--b;
        temp.c=c;
        return temp;
    }
    point operator ()
    {
        return(c,a++,b++)
    }
};
int main(void)
{
    point p ("A",5,6), q("B",-3,4), r("C",7,14,), s("D",18,36);
    q = p++ ;
    q = ++p ;
    r = s--;
    //r=2+s;


}
