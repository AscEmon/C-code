 #include<iostream>
using namespace std;
class date
{
    int day,month,year;
public:
    date(int d,int m,int y)
    {
        day=d;
        month=m;
        year=y;
    }
    ~date()
    {
        cout<<"distracting";
    }
    void setdate(int d,int m,int y);
    void getdate();
};
    void date::setdate(int d,int m,int y)
    {
        day=d;
        month=m;
        year=y;
        //cout<<day<<":"<<month<<":"<<year<<endl;
            }
   void date::getdate()
    {
      cout<<day<<":"<<month<<":"<<year<<endl;
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
