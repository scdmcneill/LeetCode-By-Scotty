// An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.
// Given an integer n, return true if n is an ugly number

#include <iostream>
#include <math.h>
#include <algorithm>

bool isUgly(int n);

int main() {
	int userNumber;

	std::cout << "Enter a number to check if it is an Ugly Number! :(" << '\n';
	std::cin >> userNumber;

	std::cout << isUgly(userNumber) << '\n';

	if (isUgly(userNumber)) {
		std::cout << "Sorry... your number is ugly..." << '\n';
	}
	else std::cout << "Your number isn't ugly!" << '\n';

	return 0;
}

bool isUgly(int n) {
	if (n <= 0) return false;
	while (n % 2 == 0)
		n /= 2;
	while (n % 3 == 0)
		n /= 3;
	while (n % 5 == 0)
		n /= 5;
	return n == 1;
}
