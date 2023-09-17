#include <format>
#include <iostream>

#include "static_vector.h"

int main() {
    try {
        static_vector<int, 5> sv1 = {1, 2, 3};
        static_vector<int, 5> sv2 = {4, 5};

        // Move assignment
        sv1 = std::move(sv2);

        for (int& value : sv1) {
            std::cout << value << " ";
        }
        std::cout << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}
