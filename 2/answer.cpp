#include <string>
#include <vector>
#include <iostream>

int main() {

    std::cout << "Hello World!" << std::endl;

    std::string line;
    while (std::getline(std::cin, line)) {
        std::cout << "Read from stdin: " << line << std::endl;
    }

    return 0;
}