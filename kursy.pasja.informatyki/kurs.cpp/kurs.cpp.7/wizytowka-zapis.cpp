#include <iostream>
#include <fstream>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main(){

    cout<<"Podaj imie: ";   cin>>imie;
    cout<<"Podaj nazwisko: ";   cin>>nazwisko;
    cout<<"Podaj nr tel: ";     cin>>nr_tel;

    fstream plik;
    plik.open("wizytowka.txt", ios::out | ios::app);

    plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<nr_tel<<endl;

    plik.close();

    return 0;
}