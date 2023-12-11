#include <iostream>

using namespace std;

long int potega(int p, int w){
    if(w==0) return 1;
    else return p * potega(p, w-1);
}

main(){
    cout<<potega(3, 4)<<endl;
    return 0;
}