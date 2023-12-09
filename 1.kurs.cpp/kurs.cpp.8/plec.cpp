#include <iostream>

using namespace std;

float liczby[100];

int main()
{

    string imie;

    cout<<"Podaj imie: ";
    cin>>imie;

    int dlugosc=imie.length();
    
    
    if(imie[dlugosc-1]=='a'){
        cout<<"Raczej jestes kobieta";
    }else{
        cout<<"Raczej jestes mezczyzna";
    }


    return 0;
    
}
