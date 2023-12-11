#include <iostream>
#include <windows.h>

using namespace std;

int dane[6];
int rozmiar;

//------------------------------------------------------------------------

void wyswietl_stos()
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);

    cout<<endl;
    cout<<"----------------"<<endl;
    cout<<"ZAWARTOSC STOSU:"<<endl;
    cout<<"----------------"<<endl;

    for (int i=rozmiar; i>=1; i--)
    {
        cout<<dane[i]<<endl;
    }

    if (rozmiar==0) cout<<"pusty"<<endl;

    cout << "----------------"<<endl<<endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

//------------------------------------------------------------------------

void push()
{
    if (rozmiar>=5)
    {
        cout << "Stos pelny!";
        Sleep(1000);
    }
    else
    {
        cout<<endl<< "PUSH (jaka liczbe polozyc na stosie): ";

        rozmiar=rozmiar+1;
        cin>>dane[rozmiar];
    }
}

//------------------------------------------------------------------------

void pop()
{
    if (rozmiar>=1)
    {
        cout<<endl<<"POP - nastapi usuniecie ze stosu liczby: "<<dane[rozmiar];
        Sleep(2000);

        rozmiar=rozmiar-1;
    }
    else
    {
        cout << "Stos pusty!";
        Sleep(1000);
    }
}
//------------------------------------------------------------------------

void size()
{
    cout<<endl<<"Liczba elementow na stosie: "<<rozmiar;
    Sleep(2000);
}

//------------------------------------------------------------------------

void empty()
{

    if (rozmiar==0) cout<<endl<<"EMPTY (stos pusty?) ->  TRUE";
    else cout<<endl<<"EMPTY (stos pusty?) ->  FALSE";
    Sleep(2000);
}

//------------------------------------------------------------------------


int main()
{

    int wybor;
    rozmiar=0;

    do
    {
        wyswietl_stos();

        cout << "MENU GLOWNE STOSU:"<<endl;
        cout << "------------------------------------------"<<endl;
        cout << "1. PUSH (dodaje element na szczyt stosu) "<<endl;
        cout << "2. POP (usuwa element ze szczytu stosu) "<<endl;
        cout << "3. SIZE (ile elementow na stosie) "<<endl;
        cout << "4. EMPTY (czy stos jest pusty?) "<<endl;
        cout << "5. Koniec programu "<<endl;
        cout << "------------------------------------------"<<endl;
        cout << "Wybor: ";
        cin >> wybor;

        switch (wybor)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            size();
            break;

        case 4:
            empty();
            break;

        }

    }
    while (wybor != 5);

    return 0;
}
