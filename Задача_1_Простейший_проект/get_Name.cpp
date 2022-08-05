#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>



int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;
	std::cout << "¬ведите им¤: " << std::endl;
	std::cin >> name;
	std::cout << "«дравствуйте, " << name << "!" << std::endl;
	system("pause");
	return 0;
}