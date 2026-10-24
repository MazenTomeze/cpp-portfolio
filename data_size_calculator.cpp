#include  <iostream>
using namespace std;

int main()
{

	cout << "\n====================\n";
	cout << "\nAPP CalculatorData sizes";
	cout << "\n\n====================\n\n";

	long long num;

	cout << "Enter size in KB: ";

	cin >> num;

	long long num_2 = num * 1024;

	cout << "\nThe Number Of Kilobytes: " << num;

	cout << "\nThe Number Of Bytes: " << num_2;

	cout << "\nThe Number Of Bits: " << num_2 * 8 << "\n\n";


	return 0;
}