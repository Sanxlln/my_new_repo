#include<iostream>

int main(){
    for(int i = 0; i < 10; ++i){
        std::cout <<i;
    }

    int number;
    std::cout <<"Enter a number";
    std::cin >> number;

    if( number > 0){
        std::cout << "True";
    }
}