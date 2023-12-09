#include <iostream>

using namespace std;

int uczniowie = 0;
int cukierki = 0;

int x, y;

int main()
{

    cout << "Cukierki" << endl
         << endl;

    cout << "Ile uczniow jest w Twojej klasie:" << endl;
    cin >> uczniowie;

    cout << "" << endl
         << endl;

    cout << "Ile cukierkow kupila mama:" << endl;
    cin >> cukierki;

    cout << "" << endl
         << endl;

    x = cukierki / (uczniowie - 1);
    cout << "Cukierkow dla kazdego ucznia: " << x;

    cout << "" << endl;

    y = cukierki - x * (uczniowie - 1);
    cout << "Cukierki dla Jasia: " << y;

    return 0;
}