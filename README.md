# static_vector
Toy project actually generated by ChatGPT

This is what I asked ChatGPT :

* Create a c++17 template similar to std::vector<T> with a maximum capacity specified in a template argument
* Add more features and error handling to match the full functionality and robustness of std::vector
* Add iterators to make it work with for range loops
* Regenerate with all code
* Rename to static_vector and add move constructor and move assignment that works with smaller or equal capacity and size, or throw.
* Regenerate with snake_case template name, like in the standard library


# linux compilation
g++ main.cpp -std=c++17 -Wall -pedantic -Wextra -Wfatal-errors -Wconversion -Wshadow -Wunreachable-code -O2 -o test.out

# execution
./test.out

#output
4 5 
