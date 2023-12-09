#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x, y;
char wybor;

int main(){

while (wybor!=5)
{
    cout<<"Podaj 1 liczbe: ";
    cin>>x;

    cout<<"Podaj 2 liczbe: ";
    cin>>y;

    cout<<endl;
    cout<<"MENU GLOWNE"<<endl;
    cout<<"-------------------"<<endl;
    cout<<"1. Dodawanie"<<endl;
    cout<<"2. Odejmowanie"<<endl;
    cout<<"3. Mnozenie"<<endl;
    cout<<"4. Dzielenie"<<endl;
    cout<<"5. Koniec programu"<<endl;
    cout<<"-------------------"<<endl<<endl;
    cout<<"Wybierz: ";
    wybor=getch();

    cout<<endl;

    switch (wybor)
    {
    case '1':
        cout<<"Suma = "<<x+y;
        break;
    case '2':
        cout<<"Roznica = "<<x-y;
        break;
    case '3':
        cout<<"Iloczyn = "<<x*y;
        break;
    case '4':
        if(y==0){
            cout<<"Nie dzielimy przez zero";
        }
        else{
            cout<<"Iloraz = "<<x/y;
        }
        break;
    case '5':
        exit(0);
    default: cout<<"Nie ma takiej opcji w menu!";
    }

    getchar();getchar();
    system("cls");
}

    return 0;
    
}