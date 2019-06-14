#include<iostream>
#include<cstring>
using namespace std;

class A
{
	string name;
	double weight;//declare name and weight as private variable

public:
A()
{

}
A(string n,double w)
{



}

void set(string n,double w )
{

name=n;
weight=w;


}
void show()
{
cout<<"name:"<<name<<endl;
cout<<"weight:"<<weight<<endl;

}
};

class B : virtual  protected A
 {			//inherit A class as protected
	string Fathername;
	int age;//declare age and fathername as private varible

protected:
B()
{

}
B(int a,string f)
{


}
void set(string f,int a)
{
Fathername=f;
age=a;


}
void  show()
{
cout<<"Father's name :"<<Fathername<<endl;
cout<<"age:"<<age<<endl;
}
};

class C : virtual  protected A
 {
     string Mothername;
     string gender	;		//inherit A class as protected
	//declare gender and mothername as private variable

protected:
C()

{
}
C(string m,string g)
{



}

void set(string m,string g)
{
    Mothername=m;
    gender=g;

}
void show()
{
cout<<"Mother's name:"<<Mothername<<endl;
cout<<"Gender:"<<gender<<endl;


}
};

class citizen :public B, public C
 {		//inherit B and C classes

public:
citizen()
{}
void set(string name,double w,string f,int a,string m,string g)
{
A::set(name,w);
B::set(f,a);
C::set(m,g);


}
void  show( )
{
A::show();
B::show();
C::show();

}
};

int  main()
{
  citizen ob;
  ob.set("anika",50.55,"salim",56,"lipa","f");
  ob.show();

    return 0;

}

