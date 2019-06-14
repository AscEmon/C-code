#include<iostream>
#include<cstring>
using namespace std;

class student{
    char *name;
    int roll;
public:
    student(char*p,int r1)
    {
        name=new char[strlen(p)+1];
        strcpy(name,p);
        roll=r1;
    }
    char *get_name()
    {
        return name;
    }
    int get_roll()
    {
        return roll;
    }


};

class marks:public student{
    char *dept;
    int sub;
    int in;
    int ex;
public:

    marks(char*d,int s,int i,int e,char*n,int r):student(n,r)
    {
        dept=new char[strlen(d)+1];
        strcpy(dept,d);
        sub=s;
        in=i;
        ex=e;
    }

    void disp()
    {
        cout<<"Name of the student:"<<get_name()<<endl;
        cout<<"Roll no:"<<get_roll()<<endl;
        cout<<"Subject name:"<< dept<<endl;
        cout<<"Subject code:"<<sub<<endl;
        cout<<"Internal marks:"<<in<<endl;
        cout<<"External marks:"<<ex<<endl;
    }
};

int main()
{
    marks m("CSE",206,30,40,"Rahim",201314050);
    m.disp();
}
