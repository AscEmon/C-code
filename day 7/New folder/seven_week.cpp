#include<iostream>
#include<cstring>
using namespace std;

class BAIUST

{
   char *dept1;
   char *dept2;
   int d1stud[4];
   int d2stud[4];
public:
 BAIUST(char *d1,char *d2)
 {
     dept1=new char[strlen(d1+1)];
     strcpy(dept1,d1);
     dept2=new char[strlen(d2+1)];
     strcpy(dept2,d2);

} //allocate memory and copy d1, d2 to dept1 and dept2
void setstud(int d1s[],int d2s[])
{
    for(int i=0;i<4;i++)
    {
        d1stud[i]=d1s[i];
        d2stud[i]=d2s[i];

    }




} //set values of d1stud and d2stud of both teams
BAIUST(const BAIUST &ob)
{
    dept1=new char[strlen(ob.dept1+1)];
     strcpy(dept1,ob.dept1);
     dept2=new char[strlen(ob.dept2+1)];
     strcpy(dept2,ob.dept2);
         for(int i=0;i<4;i++)
    {
        d1stud[i]=ob.d1stud[i];
        d2stud[i]=ob.d2stud[i];

    }




} //write copy constructor
char *getdept1()
{
    return dept1;

} // return dept1 name
char *getdept2()
{
 return dept2;

} // return dept2 name
int *getstuddept1()
{
    return d1stud;

} // return array of d1stud
int *getstuddept2()
{
    return d2stud;

} // return array of d2stud
~BAIUST() //destructor function
{
    delete dept1;
    delete dept2;



}
};
void show(BAIUST ob)
{
    cout<<ob.getdept1()<<endl;
    //cout<<ob.getdept2()<<endl;
    int *p;
    p=ob.getstuddept1();
    for(int i=0;i<4;i++)
    {
    //p=ob.d1stud();

    cout<<"Number of student in level "<<i+1<<" is "<<*p<<endl;
    p++;
    }
    cout<<ob.getdept2()<<endl;

    p=ob.getstuddept2();

    for(int i=0;i<4;i++)
    {
        cout<<"Number of student in level "<<i+1<<" is "<<*p<<endl;
    p++;

    }





    //Print out two dept names and the number of students stored in the arrays
// Follow the output format shown below
}
int main()
{
BAIUST ob("CSE","AE");
int dept1[]={60,52,53,55};

int dept2[]={50,58,40,47};


ob.setstud(dept1,dept2);

show(ob);

return 0;

}
