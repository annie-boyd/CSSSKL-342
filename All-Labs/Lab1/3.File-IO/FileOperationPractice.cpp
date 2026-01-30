/* FileOperationPractice 
    Lab 1
    This program takes in three files with different 
    end of line characters and prints the contents.
    Created by Annie Boyd
    1/9/2026
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string files[] = {"textfile1.txt", "textfile2.txt", "textfile3.txt"};
    ifstream inFile;

    for (const string& filename : files) {
        inFile.open(filename);

        if (!inFile) {
            cerr << "Could not open " << filename << endl;
            continue;
        }

        string line;

        cout << "Contents of " << filename << ":\n";

        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    }
}

// I didn't have any issues with displaying the text files correctly
// even though they had different end of line characters.

