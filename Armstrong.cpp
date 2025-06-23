#include <iostream>
#include <cmath> // Required for pow function

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;

    // Count the number of digits
    for (int n = num; n > 0; n /= 10) {
        digits++;
    }

    // Calculate the sum of digits raised to the power of the count of digits
    for (int n = originalNum; n > 0; n /= 10) {
        int digit = n % 10;
        sum += pow(digit, digits);
    }

    // Check if the sum equals the original number
    return sum == originalNum;
}

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    if (isArmstrong(number)) {
        std::cout << number << " is an Armstrong number." << std::endl;
    } else {
        std::cout << number << " is not an Armstrong number." << std::endl;
    }

    return 0;
}