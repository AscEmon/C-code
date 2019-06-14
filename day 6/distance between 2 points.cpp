0# include<iostream>
#include<math.h>
using namespace std;
class point2;
class point1
{
    double x1,x2;
    double area;
public:
    void setValue()
    {
        cout<<"enter x1:";
        cin>>x1;
        cout<<"enter x2:";
        cin>>x2;
    }
  friend   void getLine(point1 t,point2 r);

    double getArea()
    {
        area=sqrt((x1-x2)*(x1-x2));
        return area;

    }

};
class point2
{
    double y1,y2;
    double area;
public:
    void setValue()
    {
        cout<<"enter y1:";
        cin>>y1;
        cout<<"enetr y2:";
        cin>>y2;
    }
 friend    void getLine(point1 t,point2 r);
    double getArea()
    {
         area=sqrt((y1-y2)*(y1-y2));
        return area;


    }
};
void getLine(point1 t,point2 r)
{
    double res=t.getArea()+r.getArea();
    cout<<"point is:"<<res<<endl;
}
int main()
{
    point1 tr;
    point2 cs;
    tr.setValue();
    cs.setValue();
    getLine(tr,cs);
    return 0;
}
