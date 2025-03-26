#include<iostream>
#include<vector>

int main(){
    for(int i = 0; i < 10; ++i){
        std::cout <<i;
    }

    std::vector<int> vec;
    int number;
    std::cout <<"Enter a number";
    std::cin >> number;

    if( number > 0){
        std::cout << "True";
    }else{
        std::cout <<"False";
    }
}