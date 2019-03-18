// Ask for a person's name and greet the person.

#include <iostream>
#include <string>

int main()
{
    // Ask for the person's name
    std::cout << "Please enter your first name: ";

    // Read the name
    std::string name; // Define name (type string)
    std::cin >> name; // Read user input into name

    // Write a Greeting.

    std::cout << " Hello " << name << "!!" << std::endl;
    return 0;
}