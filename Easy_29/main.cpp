#include <iostream>

using namespace std;
//---------------------������� � ���������---------------------------------------





//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	
	//-------------------------------���� �����-------------------------------------

	double x;

	cout << "������� �����: ";
	cin >> x;

	if (x == (int)x)
	{
		cout << "����� �����" << endl;
	}
	else
	{
		cout << "����� ������������" << endl;
	}




	system("pause");

	return 0;
}
