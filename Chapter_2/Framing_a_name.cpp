// Ask for a person's name and generate a framed greeting.

#include <iostream>
#include <string>

// We can use
using std::cout;
using std::endl;

// to avoid using std:: before each cout or endl

int main()
{
    // Ask for the person's name
    std::cout << "Please enter your first name: ";

    // Read the name
    std::string name; // Define name (type string)
    std::cin >> name; // Read user input into name

    // The number of blanks surrounding the greeting
    const int pad = 1;

    // total number of rows to write
    const int rows = pad * 2 +3;

    // Build the center message
    const std::string greeting = "Hello, " + name + "!";

    // Separate the output from the input
    cout << std::endl;

    // Size of all lines in collumns
    const std::string::size_type cols = greeting.size() + pad * 2 + 2;

    // write rows rows of output

    for (int r = 0; r!=rows; ++r){
        // write a row of output

        std::string::size_type c = 0;

        while(c != cols){
            
            // If we are writing the greeting
            if (r == pad +1 && c == pad +1) {
                cout << greeting;
                c += greeting.size();
            } else
            {
                // If we are on the border
                if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                    cout << "*";
                } else
                {
                    cout << " ";
                }
                ++c;
                
            }
            
            
            
        }
        

        cout << endl;

    }

    return 0;

}