#include <iostream>

using namespace std;

int a,b,c,d,m;

main(){
    cout<<"Podaj 4 liczby rozdzielone spacja: ";
    cin>>a>>b>>c>>d;

    m=a;
    if (b>m) m=b;
    if (c>m) m=c;
    if (d>m) m=d;

    cout<<"Najwieszka liczba to: "<<m;

    return 0;
}