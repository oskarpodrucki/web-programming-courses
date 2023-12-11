#include <iostream>
#include <windows.h>

using namespace std;

//---------------------- ZMIENNE GLOBALNE----------------------------
int wybor;
int *korzen;

//-------- VOID USTAWIAJACY KURSOR W MIEJSCU X,Y NA EKRANIE --------

void gotoxy(int x, int y)
{
  COORD c;
  c.X=x-1;
  c.Y=y-1;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

//-------------------------- ZMIENNE ------------------------------

    int dane[16];
    bool pusty[16];


//----------------------- WYSWIETLANIE DRZEWA -----------------------
void wyswietl_drzewo()
{
system("CLS");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
//wyswietlenie drzewa
gotoxy(40,1); if (pusty[1]==true) cout<<"_"; else cout<<dane[1];
gotoxy(20,4); if (pusty[2]==true) cout<<"_"; else cout<<dane[2];
gotoxy(60,4); if (pusty[3]==true) cout<<"_"; else cout<<dane[3];
gotoxy(10,6); if (pusty[4]==true) cout<<"_"; else cout<<dane[4];
gotoxy(30,6); if (pusty[5]==true) cout<<"_"; else cout<<dane[5];
gotoxy(50,6); if (pusty[6]==true) cout<<"_"; else cout<<dane[6];
gotoxy(70,6); if (pusty[7]==true) cout<<"_"; else cout<<dane[7];
gotoxy(5,10); if (pusty[8]==true) cout<<"_"; else cout<<dane[8];
gotoxy(15,10); if (pusty[9]==true) cout<<"_"; else cout<<dane[9];
gotoxy(25,10); if (pusty[10]==true) cout<<"_"; else cout<<dane[10];
gotoxy(35,10); if (pusty[11]==true) cout<<"_"; else cout<<dane[11];
gotoxy(45,10); if (pusty[12]==true) cout<<"_"; else cout<<dane[12];
gotoxy(55,10); if (pusty[13]==true) cout<<"_"; else cout<<dane[13];
gotoxy(65,10); if (pusty[14]==true) cout<<"_"; else cout<<dane[14];
gotoxy(75,10); if (pusty[15]==true) cout<<"_"; else cout<<dane[15];
cout<<endl<<endl<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

//------------------- DODAJ LICZBE DO DRZEWA ------------------------
void add()
{
    int liczba;
    cout<<"Jaka liczbe dodac do drzewa: ";
    cin>>liczba;

    //drzewo puste
    if (pusty[1]==true)
    {
        korzen=&dane[1];
        *korzen=liczba;
        pusty[1]=false;
    }
    else //drzewo niepuste
    {
    bool znalazlem_miejsce=false;
    int wezel=1;

    while (znalazlem_miejsce==false)
    {
        if (pusty[wezel]==true)
        {
            znalazlem_miejsce=true;
            dane[wezel]=liczba;
            pusty[wezel]=false;

        }
        else if(liczba<dane[wezel])
        {
            //w lewo
            wezel=2*wezel;
        }
        else
        {
            //w prawo
            wezel=2*wezel+1;
        }
        if(wezel>15)
        {
            cout<<"Potrzebne byloby wieksze drzewo!";
            Sleep(3000);
            znalazlem_miejsce=true;
        }
    }
    }

}

void find()
{
int liczba;
cout<<"Jaka liczbe znalezc w drzewie: ";
cin>>liczba;

bool znalazlem=false;
int wezel=1;

    while (znalazlem==false)
    {
        if(liczba==dane[wezel])
        {
            cout<<"Znaleziono liczbe w wezle nr: "<<wezel;
            Sleep(3000);

            znalazlem=true;
        }
        else if(liczba<dane[wezel])
        {
            //w lewo
            wezel=2*wezel;
        }
        else
        {
            //w prawo
            wezel=2*wezel+1;
        }
        if(wezel>15)
        {
            cout<<"Nie znaleziono!";
            Sleep(3000);
            znalazlem=true;
        }
    }
}


//----------------------- G£OWNY PROGRAM ----------------------------
int main()
{
    for (int i=1; i<=15; i++)
    {
        pusty[i]=true;
    }
    korzen=NULL;

    do
    {
    wyswietl_drzewo();

    cout<<"----------------------------------"<<endl;
    cout<<"   EMULATOR DRZEWA BINARNEGO "<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"1. ADD (dodaje element do drzewa)"<<endl;
    cout<<"2. FIND (szuka elementu w drzewie)"<<endl;
    cout<<"3. EXIT (zakonczy ten program)"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"   WYBOR: ";
    cin>>wybor;
    cout<<endl;

    switch(wybor)
    {
        case 1: add(); break;
        case 2: find(); break;
    }

    }while (wybor!=3);




    return 0;
}
