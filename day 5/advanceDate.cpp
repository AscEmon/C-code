#include<iostream>
using namespace std;
class date
{
    int day,month,year;
public:
    date(int d,char *m,int y)
    {
        day=d;
        month=new char[strlen(m+1)];
        strcpy(month,m);
        year=y;
    }
    ~date()
    {
        delete(month);
    }
    void setdate(int d,char *m,int y);
    void getdate();
};
    void date::setdate(int d,char *m,int y)
    {
        day=d;
        month=m;
        year=y;
        //cout<<day<<":"<<month<<":"<<year;
            }
   void date::getdate()
    {
      cout<<day<<":"<<month<<":"<<year;
 }


int main()
{
    int d,m,y;
    date birthday(8,10,1997);
    birthday.getdate();
    cin>>d>>m>>y;
    birthday.setdate(d,m,y);
    birthday.getdate();

    return 0;
}

