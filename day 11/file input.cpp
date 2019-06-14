#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

class person
{
	string name;
	int age;
	string gender;

public:
person()
{

}
person(string n,int a,string g)
{



}

void set(string n,int a,string g)
{

name=n;
age=a;
gender=g;

}
void show()
{
cout<<"name:"<<name<<endl;
cout<<"Age:"<<age<<endl;
cout<<"gender:"<<gender<<endl;
}
};

class student : virtual  protected person
 {

	int id;
	string depertment;

protected:
student()
{

}
student(int i,string dpt)
{


}
void set(int i,string dpt)
{
id=i;
depertment=dpt;


}
void  show()
{
cout<<"Student's id:"<<id<<endl;
cout<<"Depertment:"<<depertment<<endl;
}
};

class worker : virtual  protected person
 {
     int salary;
     string company	;

protected:
worker()

{
}
worker(int s,string c)
{



}

void set(int s,string c)
{
    salary=s;
    company=c;

}
void show()
{
cout<<"company's name:"<<company<<endl;
cout<<"Salary:"<<salary<<endl;


}
};

class per_time_worker :public student, public worker
 {		//inherit B and C classes

public:
per_time_worker()
{}
void set(int i,string dpt,string n,int a,string g,int s,string c)
{
    student::set(i,dpt);
    person::set(n,a,g);
    worker::set(s,c);


}
void  show( )
{
student::show();
person::show();
worker::show();
}
};

int  main()
{
    freopen("in.text","r",stdin);
    per_time_worker p;
    int n,age,salary,id;
    string name,deptname,companyname,gender;
    cin>>n;
    for (int i=1;i<=3;i++)
    {
        cin>>id,deptname,name,age,gender,salary,companyname;
        p.set(id,deptname,name,age,gender,salary,companyname);
        p.show();
    }
    return 0;

}

