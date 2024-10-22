#include <iostream>
using namespace std;

bool isPrime(int n, int divisor = 2) {
    if (n <= 2) return n == 2;
    if (n % divisor == 0) return false;
    if (divisor * divisor > n) return true;
    return isPrime(n, divisor + 1);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
    return 0;
}
