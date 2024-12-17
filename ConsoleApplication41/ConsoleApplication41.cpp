#include <iostream>
#include <cmath> 
using namespace std;

double power(double base, double exponent) {
    double result = pow(base, exponent);
    return result;
}

long sumRange(long start, long end) {
    long sum = 0;
    for (long i = start; i <= end; i++) {
        sum += i;
    }
    return sum;
}

bool isPerfectNumber(long n) {
    long sum = 0;
    for (long i = 1; i < n; i++) { 
        if (n % i == 0) {
            sum += i;
        }
    }
    return (sum == n); 
}

void printCard(int rows, int cols) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            std::cout << "| ";
        }
        std::cout << "|\n";
    }
}

bool isLuckyNumber(long n) {
    if (n < 100000 || n > 999999) 
    { 
        return false;
    }

    long leftSum = 0, rightSum = 0;
    for (int i = 0; i < 6; i++) {
        if (i < 3) {
            leftSum += n % 10;
        }
        else {
            rightSum += n % 10;
        }
        n /= 10;
    }

    return (leftSum == rightSum); 
}

int main() {
    setlocale(LC_ALL, "rus");

    double base = 10;
    double exponent = 5;
    double result = power(base, exponent);
    cout << "Степень числа " << base << "^" << exponent << " равна " << result << endl;

    long start = 1;
    long end = 100;
    long rangeSum = sumRange(start, end);
    cout << "Сумма чисел в диапазоне от " << start << " до " << end << " равна " << rangeSum << endl;

    long number = 28;
    if (isPerfectNumber(number)) {
        cout << "Число " << number << " является совершенным числом." << endl;
    }
    else {
        cout << "Число " << number << " не является совершенным числом." << endl;
    }

    int rows = 5;
    int cols = 5;
    printCard(rows, cols);

    long luckyNumber = 123321;
    if (isLuckyNumber(luckyNumber)) {
        cout << "Число " << luckyNumber << " является счастливым числом." << endl;
    }
    else {
        cout << "Число " << luckyNumber << " не является счастливым числом." << endl;
    }

    return 0;
}