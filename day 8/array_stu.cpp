#include <iostream>
using namespace std;
class Number{
    private:
        int num;
    public:
        //default constructor
        Number()
        {
          cout<<"constructing"<<endl;
        }

        //parameterized constructor
        Number(int a)
        {
            num=a;
            cout<<"parameterized constructor"<<endl;
        }

        //display number
        void display()
        {
            cout<<" "<<num;
        }

};

int main(){
    //declaration array of objects
    Number a[]={45,65,78,89,45};
    //with parameterized constructor
    for(int x=1;x<=5;x++)
    {
        a[x].display();
    }

   //display the value of the array.

    return 0;
}
