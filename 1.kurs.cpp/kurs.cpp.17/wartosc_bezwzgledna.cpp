#include <iostream>
#include <cmath>

using namespace std;

int x=31, R, D, o1, o2;

int main()
{
   cout<<"(1947-2014) Ile razy LA Lakers wystapili w finale NBA?"<<endl;
   cout<<"Rick: ";
   cin>>R;
   cout<<"Daryl: ";
   cin>>D;

   o1 = abs(x-R); //fabs dla float i double
   o2 = abs(x-D);

   if (o1<o2) cout<<"Wygral Rick!"; else if(o2<o1) cout<<"Wygral Daryl!";
   else cout<<"Remis!";

    return 0;
}
