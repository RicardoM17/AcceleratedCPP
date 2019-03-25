// Simple program for computing student's grades

#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
#include <vector>

    
using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::streamsize;
using std::string;
using std::vector;

int main()
{
    // ask for and read the student's name
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl; // ask for and read the midterm and final grades
    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;
    // ask for the homework grades
    cout << "Enter all your homework grades, "
            "followed by end-of-file: ";
    // the number and sum of grades read so far
    int count = 0;
    double sum = 0;
    // a variable into which to read
    double x;

    vector<double> homework;
    // invariant:
    // we have read count grades so far, and
    // sum is the sum of the first count grades
    while (cin >> x)
    {
        homework.push_back(x);

    }

    //typedef defines the name vec_sz as a synonym for vector<double>::size_type
    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();

    // verift that array isn't empty
    if (size == 0) {
        cout << endl << " You must enter your grades. "
        "Please try again." << endl;
        return 1;
    }
    
    // Sort the array
    sort(homework.begin(), homework.end());

    // finding the median
    vec_sz mid = size/2;
    double median;
    median = size % 2 == 0 ? (homework[mid] + homework[mid-1]) / 2
                            : homework[mid];
    
    // write the result
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
    << 0.2 * midterm + 0.4 * final + 0.4 * median
    << setprecision(prec) << endl;
    return 0;
}