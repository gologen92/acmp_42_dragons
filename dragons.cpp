#include<iostream>
#include <fstream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	string fname = "INPUT.TXT";
	string oname = "OUTPUT.TXT";
	int n;
	ifstream fileInput(fname);
	ofstream fileOutput(oname);
	if (fileInput.is_open())
	{
		cout << "Файл открыт" << endl;
		fileInput >> n;
	}
	auto m = pow(3, n / 3);
	if (n % 3 == 1)
		m = m * 4 / 3;
	if (n % 3 == 2)
		m = m * 2;
	fileOutput << m << endl;

	return 0;
}