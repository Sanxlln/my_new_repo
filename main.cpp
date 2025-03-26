#include<iostream>
#include<map>


int sum(int a, int b) {
   return a + b;
}

int main(){
 std::cout <<"Hello word";

 while(true){
    std::cout << "It's true";
 }
 std::cout <<"  ";

 std::map<int, int> m;
 for(int i = 0; i < 5; ++i){
   m[i] = i * 10
 }
 for( auto& pair : m){
   std::cout << pair.first << "--" << pair.second;
 }

 std::cout << sum(3, 5); 
 return 0;

}