#include <string>
#include <iostream>
#include <limits>

int main()
{
	std::cout << "Gebe 1 oder 2 ein: ";
	int eingabe1{ 0 };
	std::cin >> eingabe1;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::cout << "Und jetzt deinen vollen Namen: ";
	std::string name;
	std::getline(std::cin, name);
	std::cout << "Dein Wahl war " << eingabe1 << " und dein voller Name lautet " << name << ". \n";
	std::cout << "Dein String ist " << name.length() << " Zeichen lang!\n"; //Member function ! Wie offset.size();
	return 0;
}