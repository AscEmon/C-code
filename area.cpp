#include<iostream>
using namespace std;
class rectengel;
class triangel
{
    double area;
    double i,j;
public:

    void setValue()
    {
        cout<<"enter base:";
        cin>>i;
        cout<<"enter height:";
        cin>>j;
    }
   friend void totalArea(triangel t ,rectengel r);

    double getArea()
    {
        area=0.5*i*j;
        return area;
    }

};
class rectengel
{
    double area;
    double l,b;
public:
    void setValue()
    {
        cout<<"enter length:";
        cin>>l;
        cout<<"enter breadth:";
        cin>>b;

    }
   friend  void totalArea(triangel t ,rectengel r);
    double getArea()
    {
         area=l*b;
        return area;
    }

};
void totalArea(triangel t,rectengel r)
{
    double res=t.getArea()+r.getArea();
    cout<<"the area is:"<<res<<endl;
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
