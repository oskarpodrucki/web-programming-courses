#include <iostream>
#include <windows.h>

using namespace std;

int dane[5];
int ile;
int glowa;
int ogon;

//------------------------------------------------------------------------

void wyswietl_kolejke()
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);

    cout<<endl;
    cout<<"-------------------"<<endl;
    cout<<"ZAWARTOSC KOLEJKI: "<<endl;
    cout<<"-------------------"<<endl;


    if (ile==0)
    {
        cout<<"pusta";
    }

    else
    {

        int indeks;

        for (int i=0; i<ile; i++)
        {
            indeks=glowa+i;
            if (glowa+i>=5) indeks=glowa+i-5;
            cout<<dane[indeks]<<" ";
        }

    }

    cout<<endl<<"-------------------"<<endl<<endl;


    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

//------------------------------------------------------------------------

void push()
{
    if (ile>=5)
    {
        cout << "Kolejka pelna!";
        Sleep(1000);
    }
    else
    {
        cout<<endl<< "PUSH (jaka liczbe wstawic do kolejki): ";
        cin>>dane[ogon];
        ogon=(ogon+1)%5;
        ile=ile+1;
    }
}

//------------------------------------------------------------------------

void pop()
{
    if (ile==0)
    {
        cout<<"Kolejka jest pusta!";
        Sleep(1000);
    }
    else
    {
        cout<<endl<<"POP - nastapi usuniecie z kolejki liczby: "<<dane[glowa];
        glowa=(glowa+1)%5;
        ile=ile-1;
		Sleep(1000);

    }


}
//------------------------------------------------------------------------

void size()
{
    cout<<endl<<"Liczba elementow w kolejce: "<<ile;
    Sleep(1000);
}

//------------------------------------------------------------------------

void empty()
{

    if (ile==0) cout<<endl<<"EMPTY (kolejka pusta?) ->  TRUE";
    else cout<<endl<<"EMPTY (kolejka pusta?) ->  FALSE";
    Sleep(1000);
}

//------------------------------------------------------------------------

int main()
{

    int wybor;
    ile=0;
    glowa=0;
    ogon=0;

    do
    {

        wyswietl_kolejke();

        cout<<"glowa="<<glowa<<"   ogon="<<ogon<<"   ile="<<ile<<endl<<endl;

        cout << "MENU GLOWNE KOLEJKI:"<<endl;
        cout << "------------------------------------------"<<endl;
        cout << "1. PUSH (dodaje element na koniec kolejki) "<<endl;
        cout << "2. POP (usuwa element z poczatku kolejki) "<<endl;
        cout << "3. SIZE (ile elementow w kolejce) "<<endl;
        cout << "4. EMPTY (czy kolejka jest pusta?) "<<endl;
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
