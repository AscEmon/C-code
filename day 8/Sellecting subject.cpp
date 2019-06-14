#include<iostream>
using namespace std;
class depertment
{
    char name[30];
    int num;
    int marks[5];
public:
    void assigne()
    {
        cout<<"Name=";
        cin>>name;
        cout<<endl<<"Roll=";
        cin>>num;
        cout<<endl;
        for (int i=1;i<=5;i++)
        {
            cout<<"Subject "<<i<<"= ";
            cin>>marks[i];
            cout<<endl;
        }
    }
    double avarage()
    {
        int sum=0;
        for(int i=1;i<=5;i++)
        {
            sum=sum+marks[i];
        }
        double ava=(sum/5);
        return ava;
    }
    void show()
    {
        cout<<name<<endl;
        cout<<num<<endl;
    }


};

int main(void)
{
    depertment obj;
    obj.assigne();
    obj.avarage();
    obj.show();
    int a=obj.avarage();

    if(a>=90)
    {
        cout<<"Computer"<<endl;
    }

    else if(a>79&&a<90)
    {
        cout<<"Electrical"<<endl;
    }
    else if(a>74&&a<80)
    {
        cout<<"Mechanical"<<endl;
    }
    else if(a>69&&a<75)
    {
        cout<<"Electronics"<<endl;
    }
}
