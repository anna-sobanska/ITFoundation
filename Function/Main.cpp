#include <iostream>

using namespace std;

float function(float num1, float num2, char symbol = '+') 
{
	switch (symbol)
	{
		case '+':
			return num1 + num2;
			break;
		case '-':
			return num1 - num2;
			break;
		case '*':
			return num1 * num2;
			break;
		case '/':
			return num1 / num2;
			break;
		default:
			return 0;
			break;
	}
}

int main() {
	cout << function(1, 3, '-') << endl;


	return 0;
}
