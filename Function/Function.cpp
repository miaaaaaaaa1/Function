#include <iostream>
using namespace std;

//завдання 1
double power(double base, int exponent) {
    double result = 1.0;

    for (int i = 0; i < (exponent); i++) {
        result *= base;
    }

    if (exponent < 0) {
        return 1.0 / result;
    }

    return result;
}

//завдання 2
int sumInRange(int num1, int num2) {
    int sum = 0;

    int start = min(num1, num2);
    int end = max(num1, num2);

    for (int i = start; i <= end; i++) {
        sum += i;
    }

    return sum;
}

//завдання 5
bool LuckyNumber(int number) {
    if (number < 100000 || number > 999999) {
        cout << "The number must be six digits!" << endl;
        return false;
    }

    int digit1 = number / 100000;         
    int digit2 = (number / 10000) % 10;  
    int digit3 = (number / 1000) % 10;  
    int digit4 = (number / 100) % 10; 
    int digit5 = (number / 10) % 10;  
    int digit6 = number % 10;          

    int sumFirstThree = digit1 + digit2 + digit3;
    int sumLastThree = digit4 + digit5 + digit6;

    return sumFirstThree == sumLastThree;
}

int main() {
    double base;
    int exponent;

    cout << "Enter the base degree: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << base << "in degree " << exponent << "is equal to" << result << endl;


    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int result = sumInRange(num1, num2);
    cout << "The sum of numbers in the range between" << num1 << " and " << num2 << "is equal to " << result << endl;


    int number;

    cout << "Enter a six-digit number: ";
    cin >> number;

    if (LuckyNumber(number)) {
        cout << number << "is a lucky number!" << endl;
    }
    else {
        cout << number << "is not a lucky number." << endl;
    }
}
