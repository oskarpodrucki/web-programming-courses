#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

// int ile;
// clock_t start, stop;

// double czas;


// float srednia(float *tab, int ile){
//     float suma =0;

//     for(int i =0; i<ile; i++){
//         suma+=*tab;
//         *tab = 999;
//         tab++;
//     }

//     return suma/ile;
// }


main(){
    // cout<<"Ile liczb w tablicy: ";
    // cin>>ile;

    //Dynamiczne rezerwowanie i zwalnianie obszarów pamięci
    // int *tablica;
    // tablica = new int [ile];

    // for(int i = 0; i<ile; i++){
    //     cout<<(int)tablica<<endl;
    //     tablica++;
    // }

    // delete [] tablica;


    //Szybkość działania na tablicy 
    // int *tablica;
    // tablica = new int [ile];

    // start=clock();

    // for(int i = 0; i<ile; i++){
    //     tablica[i]=i;
    //     tablica[i]+=50;
    // }

    // stop = clock();
    // czas=(double)(stop - start) / CLOCKS_PER_SEC;
    // cout<<"Czas zapisu (bez wskaznika): "<<czas<<endl;

    // delete [] tablica;


    // int *wskaznik = tablica;
    // tablica = new int [ile];    

    // start=clock();

    // for(int i =0; i<ile; i++){
    //     *wskaznik = i;
    //     *wskaznik+=50;
    //     *wskaznik++;
    // }

    // stop = clock();
    // czas=(double)(stop - start) / CLOCKS_PER_SEC;
    // cout<<"Czas zapisu (ze wskazniem): "<<czas<<endl;


    // delete [] tablica;


    //Przekazywanie tablic do funkcji przez referencje
    // float tablica[3];

    // tablica[0] = 1.5;
    // tablica[1] = 2.3;
    // tablica[2] = 0.75;

    // cout<<"Srednia wynosi: "<<srednia(tablica,3)<<endl;

    // cout<<tablica[0]<<endl;
    // cout<<tablica[1]<<endl;
    // cout<<tablica[2]<<endl;


    //Współpraca z zewnętrznymi urządzeniami

    return 0;
}