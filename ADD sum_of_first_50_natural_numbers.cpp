
/*
 * Program    : Sum of First 50 Natural Numbers
 * Name       : Mohid amer
 * Reg No     : L2f25bscs0071
 * Assignment : 01 - Getting Started with GitHub
 */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int cons n= 50;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
int formulaSum = N * (N + 1) / 2;

cout << "Sum using formula n(n+1)/2: "
     << formulaSum << endl;


    cout << "Sum of first 50 natural numbers (loop): "
         << sum << endl;

    return 0;
}
