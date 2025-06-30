#include <iostream>
#include <cmath>

//primeNumberCheck
bool isPrime(int number){
    if (number < 2){
        return false;
    }

    for (int i = 2; i <= sqrt(number); i++){
        if (number % i == 0)
        return false;
    }


    return true;
}

int main(){
    int YourNumber;
    std::cout << "Your number pls ? ";
    std::cin >> YourNumber;

    std::cout << "Prime numbers up to this number \n";

    for (int i = 2; i < YourNumber; i++){
        if (isPrime(i)){
            std::cout << i << std::endl;
        }
        
    }
    
}