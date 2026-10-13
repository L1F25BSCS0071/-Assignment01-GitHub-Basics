
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int cons n= 50;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum of first 50 natural numbers (loop): "
         << sum << endl;

    return 0;
}
