#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int Find_Dot(const string s, char c)
{
	size_t pos = s.length() - 4;
	while ((pos = s.find(c, pos)) != -1)
	{
		if (s[pos-4] == c)
			return pos;
		else
			return 0;
	}
}

string Change(string& s)
{
	size_t pos = 0;
	while ((pos = s.find('.', pos)) != -1)
		if (s[pos] == '.')
			s.replace(pos, 1, "**");
	return s;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string str;
	char c = '.';

	cout << "Enter string:" << endl;
	getline(cin, str);

	cout << endl;

	cout << " length = " << str.length() << endl << endl;

	cout << " Номер 4-ої крапки з кінця: " << Find_Dot(str, c) << endl;

	string dest = Change(str);
	cout << " Модифікована стрічка: " << dest << endl;

	return 0;
}