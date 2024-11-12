#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    // Open a file to write
    file.open("numbers.html");
    // Define the header for a table in html
    file << "<html>\n<head>\n<title>List of Numbers</title>\n</head>\n<body>\n";
    file << "<table>\n<tr><th>Even Numbers</th><th>Odd Numbers</th></tr>\n";
    // Iterate through numbers <= 50, put evens under even, odds under odds.
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            file << "<tr><td>" << i << "</td><td></td></tr>\n";
        }
        else {
            file << "<tr><td></td><td>" << i << "</td></tr>\n";
        }
    }
    file << "</table>\n</body>\n</html>";
    // Close file.
    file.close();
    // Print the file then close.
    ifstream input("numbers.html");
    cout << input.rdbuf();
    input.close();
    return 0;
}
