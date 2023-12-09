#include <iostream>

using namespace std;

string login, haslo;

int main()
{

    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> haslo;
    

    if (login == "admin" && haslo == "admin")
    {
            cout << "Udalo ci sie zalogowac";
    }
    else
    {
        cout << "Nie udalo sie zalogowac";
    }

    return 0;

}