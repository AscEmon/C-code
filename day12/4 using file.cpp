#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

class Person{
	char *name;
	int age;
	char gen;
public:
    Person(){}
    Person(char *n, int a, char g)
    {
        name=new char[strlen(n)+1];
        strcpy(name,n);
        age=a;
        gen=g;
    }

    void set(char *n, int a, char g)
    {
        name=new char[strlen(n)+1];
        strcpy(name,n);
        age=a;
        gen=g;
    }
    void show()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gen<<endl;

    }
};

class Student: virtual protected Person{
	int id;
	char *d;
protected:
    Student(){}
    Student(int i,char *dept)
    {
        id=i;
        d=new char[strlen(dept)+1];
        strcpy(d,dept);
    }
    void set(int i,char *dept)
    {
        id=i;
        d=new char[strlen(dept)+1];
        strcpy(d,dept);
    }
    void  show()
    {
        cout<<id<<endl;
        cout<<d<<endl;
    }
};

class Worker: virtual protected Person{
    int s;
    char *cn;

protected:
    Worker(){}
    Worker(int sa, char *comp)
    {
        s=sa;
        cn=new char[strlen(comp)+1];
        strcpy(comp,cn);
    }

    void set(int sa, char *comp)
    {
        s=sa;
        cn=new char[strlen(comp)+1];
        strcpy(cn,comp);
    }
    void show()
    {
        cout<<s<<endl;
        cout<<cn<<endl;
    }
};

class Parttime_student:protected Student, protected Worker{

public:
    Parttime_student(){}
    void set(int id, char *dept, char *name, int age, char gen, int salary, char *company)
    {
        Person::set(name, age, gen);
        Student::set(id, dept);
        Worker::set(salary, company);

    }
    void  show( )
    {
        Student::show();
        Person::show();
        Worker::show();
    }
};

int  main()
{
    freopen("in.txt","r", stdin);
    int id, age, n, salary;
    char dept[10], name[10], gen, company[10];
    cin>>n;
    Parttime_student *p;
    p=new Parttime_student[n];
    for(int i=0; i<n; i++)
    {
       cin>>id>>dept>>name>>age>>gen>>salary>>company;
       p[i].set(id, dept, name, age, gen, salary, company);
       p[i].show();
       cout<<endl;

    }
    return 0;

}

