#include<iostream>

using namespace std;

class com

{

int r,i;

public:

void sant()

{

cout<<"enter the complex number";

cin>>r>>i;

}

void display()
{

cout<<"the sum of complex num is"<<r<<"+"<<i<<"i";

}

friend com add(com,com);

};

 com add(com a,com b)

{

com p;

p.r=a.r+b.r;

p.i=a.i+b.i;

return p;

}

int main()

{

com a,b,c;

a.sant();

b.sant();

c=add(a,b);

c.display();

return 0;

}
