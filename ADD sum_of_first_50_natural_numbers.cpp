#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // WRITING to a file 
    ofstream outFile("result.txt");        

    if (!outFile) {
        cout << "Error: could not open file for writing." << endl;
        return 1;
    }

    int sum = 0;
    for (int i = 1; i <= 50; i++) {
        sum += i;
    }

    outFile << "Sum of first 50 natural numbers: " << sum << endl;
    outFile.close();

    //  READING from a file 
    ifstream inFile("result.txt");

    if (!inFile) {
        cout << "Error: could not open file for reading." << endl;
        return 1;
    }
