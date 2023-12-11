#include <iostream>

using namespace std;

long int fib(int n){
    if(n==1 || n==2) return 1;
    else return fib(n-1)+fib(n-2);
}

main(){
    cout<<fib(10)<<endl;
    return 0;
}