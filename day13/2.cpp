#include<iostream>
#include<cstring>
using namespace std;

class publication{
    char *title;
    float price;
public:
    char t[20];
    float p;
    int get_data()
    {
        cout<<"Publication Title: ";
        cin>>t;
        cout<<"Price: ";
        cin>>p;

        title=new char[strlen(t)+1];
        strcpy(title,t);
        price=p;
    }

    void print_data()
    {
        cout<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
    }

};

class book:public publication{
    float accession;
public:
    float a;

    int get_data()
    {
        publication::get_data();
        cout<<"Accession: ";
        cin>>a;
        accession=a;

    }

    void print_data()
    {
        publication::print_data();
        cout<<"Accsession No.: "<<accession<<endl;

    }
};

class magazine:public publication{
    int volume;
public:
    int v;
    int get_data()
    {
        cout<<"Volume: ";
        cin>>v;
        volume=v;

    }

    void print_data()
    {

        cout<<"Volume: "<<volume<<endl;

    }
};

class journal:public book, public magazine{
    char *name;
public:
    char n[20];
    int get_data()
    {
        book::get_data();
        magazine::get_data();
        cout<<"Journal Name: ";
        cin>>n;
        name=new char[strlen(n)+1];
        strcpy(name,n);

    }

    void print_data()
    {
        cout<<"Journal Name: "<<name<<endl;
        book::print_data();
        magazine::print_data();
    }
};
int main()
{
    journal ob;
    ob.get_data();
    ob.print_data();
}


