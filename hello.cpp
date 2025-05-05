#include <iostream>
#include <string>


struct Person {
    std::string name;
    int age;
    std::string nationality;
};

Person create_person(std::string _name, int _age, std::string _nationality) {
   Person newPerson;
   newPerson.name = _name;
   newPerson.age = _age;
   newPerson.nationality = _nationality;
   return newPerson;
}

std::ostream& operator<<(std::ostream& os, const Person& person) {
    os << "Name: " << person.name << "Age: " << person.age << "Nationality: " << person.nationality;
    return os;
}

int main(){
    Person dennis = create_person("Dennis", 16, "ukarinian");
    std::cout << dennis << "\n";
    return 0;
}