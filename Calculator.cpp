#include<iostream>
using namespace std;
int main() {
	int num1, num2;
	char op;
	cout << "Enter any operator(+,-,*,/)" << endl;
	cin >> op; 
	cout << "Enter any value of num1:" << endl;
	cin >> num1;
	cout << "Enter any value of num2:" << endl;
	cin >> num2;
	
	switch (op) {
	case'+':
	{
		cout << num1 << op << num2 << "="<<num1+num2 << endl;
		break;
	}
	case'-':
	{
		cout << num1 << op << num2 << "="<<num1-num2 << endl;
		break;
	}
	case'*':
	{
		cout << num1 << op << num2 << "=" <<num1*num2<< endl;
		break;
	}
	case'/':
	{
		if (num2 == 0) {
			cout << "Invalid division" << endl;
		}
		else
		{
			cout << num1 << op << num2 << "=" <<num1/num2<< endl;
	
		}
		break;
	}
	default:
	cout << "Invalid Calculation" << endl;
	break;
	}
	return 0;
}