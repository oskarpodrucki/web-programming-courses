#include <iostream>
#include <cmath>

using namespace std;

float kat;

int main()
{
   cout << "Podaj wartosc kata: ";
   cin>>kat;

   cout<<sin(kat*M_PI/180.0)<<endl;
   cout<<cos(kat*M_PI/180.0)<<endl;


   if (fabs(tan(kat*M_PI/180.0))>=999999999|| fabs(1/tan(kat*M_PI/180.0))<=-999999999)
        cout<<"Tangens nie istnieje!"<<endl;
    else
        cout<<tan(kat*M_PI/180.0)<<endl;

   if (fabs(1/tan(kat*M_PI/180.0))>=999999999 || fabs(1/tan(kat*M_PI/180.0))<=-999999999)
        cout<<"Cotangens nie istnieje!"<<endl;
    else
        cout<<1/tan(kat*M_PI/180.0)<<endl;



   return 0;
}
