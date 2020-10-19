
#include <iostream>
using namespace std;


bool isLeapYear(int year)
{
	if (year%4==0) {
		
		if (year % 100 == 0) {
		
			if (year % 400 == 0) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return true;
		}
	}
	else {
		return false;
	} 

}

int Reversed(int testNumber)
{
	int reverseNum = 0;
	while (testNumber > 0) {
		reverseNum = reverseNum * 10 + testNumber % 10;
		testNumber = testNumber / 10;
		}
	return reverseNum;
}
bool isAPalindrome(int testNumber)
{
	if (Reversed(testNumber) == testNumber) {
		return true;
	}
	else {
		return false;
	}
}
bool isAPrimeNumber(int numbertoTest)
{
	if(numbertoTest <= 1) {
		return false;
	}

	for (int i = 2; i < numbertoTest; i++)
	{
		if (numbertoTest % i == 0)
		{
			return false;
		}
	}

	return true;
		
}


int convertBinarytoDecimal(int binaryNumber)
{
	int decimal = 0;
	int base = 1;
	int remainder = 0;

		while (binaryNumber != 0) {
			remainder = binaryNumber % 10;
			decimal = decimal + remainder * base;
			base = base * 2;
			binaryNumber = binaryNumber / 10;
		}
	return decimal;
}
void drawRightAngledTriangle()
{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < i + 1; j++)
			{
				cout << "A";
			}
			cout << "\n";
		}
}
void drawIsocelesTriangle()
{

}
void drawIsocelesTriangle2()
{

}

//Driver below checks if functions work as intended.

int main()
{
	std::cout << "Leapyear" << std::endl;
	if (!isLeapYear(1700))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isLeapYear(1600))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isLeapYear(2016))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "NumberReversed" << std::endl;
	if (Reversed(123) == 321)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}

	if (Reversed(1) == 1)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (Reversed(1234) != 321)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}

	std::cout << "Palindrome" << std::endl;
	if (isAPalindrome(1))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isAPalindrome(121))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (!isAPalindrome(1213))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "Prime Number" << std::endl;
	if (isAPrimeNumber(3))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (isAPrimeNumber(2147483647))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (!isAPrimeNumber(4))
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	std::cout << "Binary to Decimal" << std::endl;
	if (convertBinarytoDecimal(110) == 6)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}
	if (convertBinarytoDecimal(111) == 7)
	{
		std::cout << "yes" << std::endl;
	}
	else {
		std::cout << "no" << std::endl;
	}


	std::cout << "Triangle" << std::endl;
	drawRightAngledTriangle();
	

}