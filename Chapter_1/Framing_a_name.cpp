// Ask for a person's name and generate a framed greeting.

#include <iostream>
#include <string>

int main()
{
    // Ask for the person's name
    std::cout << "Please enter your first name: ";

    // Read the name
    std::string name; // Define name (type string)
    std::cin >> name; // Read user input into name

    // Build the center message
    const std::string greeting = "Hello, " + name + "!";

    // Build the second and fourth lines of the output
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "+ " + spaces + " +";

    // Build the top and bottom lines of the output
    const std::string first(second.size(), '+');

    // Write all messages
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "+ " << greeting << " +" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    return 0;

}