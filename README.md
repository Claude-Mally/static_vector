# static_vector
Toy project actually generated by ChatGPT

This is what I asked ChatGPT

* Create a c++17 template similar to std::vector<T> with a maximum capacity specified in a template argument
* add more features and error handling to match the full functionality and robustness of std::vector
* Add iterators to make it work with for range loops
* regenerate with all code
* rename to static_vector and add move constructor and move assignment that works with smaller or equal capacity and size, or throw.
* Regenerate with snake_case template name, like in the standard library


## compilation of a simple example
    g++ main.cpp -std=c++17 -Wall -pedantic -Wextra -Wfatal-errors -Wconversion -Wshadow -Wunreachable-code -O2 -o test.out

## execution
    ./test.out

#output
4 5 


## Installing google test (linux Ubuntu)
    sudo apt update
    sudo apt upgrade
    sudo apt install libgtest-dev
    cd /usr/src/googletest/googletest
    sudo cmake CMakeLists.txt
    sudo make
    sudo cp lib/*.a /usr/lib

## compilation of unit test
    g++ unitTest.cpp -std=c++17 -Wall -pedantic -Wextra -Wfatal-errors -Wconversion -Wshadow -Wunreachable-code -lgtest -lgtest_main -O2 -o unitTest.out

## running unitTests
    ./unitTest.out

