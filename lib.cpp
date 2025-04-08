#include<iostream>
#include<vector>
#include<map>
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
       std::map<int, std::string> students;

     // Додавання елементів до map
     students[101] = "Alice";
     students[102] = "Bob";
     students[103] = "Charlie";
     int studentID = 102;
     if (students.find(studentID) != students.end()) {
         std::cout << "Student with ID " << studentID << ": " << students[studentID] << std::endl;
     } else {
         std::cout << "Student with ID " << studentID << " not found." << std::endl;
     }
     std::cout << "All students: ";
     for (const auto& student : students) {
         std::cout << "(" << student.first << ": " << student.second << ") ";
     }
     std::cout << std::endl;
}
