#include<iostream>
using namespace std;
class rectengel;
class triangel
{
    double area;
    double base,hight;
public:

    void setValue()
    {
        cout<<"enter base:";
        cin>>base;
        cout<<"enter height:";
        cin>>hight;
    }
   friend void totalArea(triangel t ,rectengel r);

    double getArea()
    {
        area=0.5*base*hight;
        return area;
    }

};
class rectengel
{
    double area;
    double length,breadth;
public:
    void setValue()
    {
        cout<<"enter length:";
        cin>>length;
        cout<<"enter breadth:";
        cin>>breadth;

    }
   friend  void totalArea(triangel t ,rectengel r);
    double getArea()
    {
         area=length*breadth;
        return area;
    }

};
void totalArea(triangel t,rectengel r)
{
    double res=t.getArea()+r.getArea();
    cout<<res<<endl;
}
int main()
{
    triangel tr;
    rectengel cs;
    tr.setValue();
    cs.setValue();
    totalArea(tr,cs);
    return 0;
}
