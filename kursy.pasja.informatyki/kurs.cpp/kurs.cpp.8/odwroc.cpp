#include <iostream>

using namespace std;

float liczby[100];

int main()
{

    string wyraz;

    cout<<"Podaj wyraz do odwrocenia: ";
    cin>>wyraz;

    int dlugosc = wyraz.length();

    for(int i = dlugosc-1; i>=0; i--){
        cout<<wyraz[i];
    }

    return 0;
    
}
