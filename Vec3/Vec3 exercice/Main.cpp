#include <iostream>
#include "Class.h"

using namespace std;

int main()
{
	string a("Hello");

	string b(a);

	printf_s("%s", a);

	printf_s("%s", b);

	system("Pause");
	return 0;
}