#include <iostream>

using namespace std;


int main(){
    int n;
    std::cin >> n;
    bool isPrime = false;
    
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            isPrime=true;
        }
        else{
            isPrime = false;
        }
    }
    if(isPrime == true){
        cout << "The number is a non prime no\n";
    } else{
        cout << "The number is a prime number \n";
    }

}