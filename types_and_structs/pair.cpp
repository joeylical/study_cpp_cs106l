#include<iostream>

struct Student {
};

std::pair<bool, Student> lookupStudent(std::string name) {
    // ...
    Student s;

    // type deduction
    return std::make_pair(true, s);
}

int main() {
    std::pair<int, std::string> numSuffix = {1, "st"};
    std::cout << numSuffix.first << numSuffix.second << std::endl;

    return 0;
}

