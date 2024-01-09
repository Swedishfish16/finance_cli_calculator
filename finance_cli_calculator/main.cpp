#include <iostream>
#include <string>

int main() {

	std::cout << " Kevin's CLI Finance calculator" << std::endl;

	double weekly_earnings{ 0.0 };
	std::cout << "\n Enter estimate of weekly earnings after tax: $";
	std::cin >> weekly_earnings;

	std::cout << "==================================================" << std::endl;

	std::cout << " Weekly income: $" << weekly_earnings << std::endl;

	std::cout << "\n  50% - Needs/Obligations" << std::endl;
	std::cout << "  30% - Savings/Investing" << std::endl;
	std::cout << "  20% - Wants" << std::endl;

	std::cout << "==================================================" << std::endl;

	std::cout << "\n  [N] Needs/Obligations \n  [S] Savings/Investing \n  [W] Wants \n  [Q] Quit \n  Please enter option: ";

	char category_choice{ };
	std::cin >> category_choice;

	return 0;

}

/*

	1. prompt user for weekly earnings after tax
	2. prompt user to select between 3 categories - Needs/obligations, savings/investing and wants.
	3. 

*/