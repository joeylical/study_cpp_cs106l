#include<iostream>
#include<experimental/random>

struct Student {
    std::string name;
    std::string state;
    int age;
};

Student randomStudentForm(std::string state) {
    Student s = {
        "Haven",
        state,
        std::experimental::randint(0, 100)
    };
    return s;
}

int main() {
    Student s = randomStudentForm("AR");
    std::cout << s.name << std::endl << s.state << std::endl << s.age << std::endl;
    return 0;
}
