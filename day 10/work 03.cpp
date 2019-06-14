#include<iostream>
using namespace std;
class Complex {
   int r, i;
   public:
    bool operator >(Complex &cx);
    bool operator ==(Complex &cx);
    bool operator <(Complex &cx);
    bool operator !=(Complex &cx);

};
bool Complex:: operator ==(Complex &cx)
{
  if((r==cx.r)&&(i==cx.i))
        {
            return true;
        }
        else return false;
}
bool Complex:: operator >(Complex &cx)
{
         if((r>cx.r)&&(i>cx.i))
        {
            return true;
        }
        else return false;

}
bool Complex:: operator <(Complex &cx)
{
        if((r<cx.r)&&(i<cx.i))
        {
            return true;
        }
        else return false;

}
bool Complex:: operator !=(Complex &cx)
{
    if((r!=cx.r)&&(i!=cx.i))
        {
            return true;
        }
        else return false;
}
int main(void)
{
  Complex C1(1,2), C2(4,5), C3(1,2) ;

  if (C1> C2)
  {
      cout <<"Greater"<<endl;
  }
  else cout<<"Not greater"<<endl;
  if (C1==C3)
  {
    cout << "Equal"endl;
  }
  else cout<<"Not Equal"<<endl;

  if (C1 < C2)
  {
    cout << "Smaller"endl;
  }
  else cout<<"larger"<<endl;

  if (C1 != C2)
  {
    cout << "Not Equal"endl;
  }
    else<<"equal"<<endl;


}

