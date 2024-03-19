#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Character
{
public:
	string Name{};
	string Feeling{};
	int HP{};
	int Attack{};
	int Recovery{};
	bool Is_Utterly_Decimated{ false };
};

int main()
{
	Character You;
	You.HP = 100;

	Sleep(2000);
	cout << ".";
	Sleep(500);
	cout << ".";
	Sleep(500);
	cout << ".";

	cout << "Alrite bin'ed, you're already 10 minutes late to your first day on the job\n -----------\n\n";

	Sleep(1000);
	cout << ".";
	Sleep(500);
	cout << ".";
	Sleep(500);
	cout << ".";

	cout << "How are'ya doing ya sausage? - Good or Bad?\n\n\t";
	cin >> You.Feeling;

	if (You.Feeling == "Good")
		cout << "\nLovely!\n\n";
	if (You.Feeling == "Bad")
		cout << "\nYou can visit pity city, but you can't stay there innit\n\n";

	cout << ".";
	Sleep(500);
	cout << ".";
	Sleep(500);
	cout << ".";

	if (You.Feeling != "Good" && You.Feeling != "Bad")
		cout << "\nNo idea what you're saying lad, something about curry?\n\n";

	Sleep(1000);

	cout << "So fat-lad, what's your name anyways?\n\n\t";
	cin >> You.Name;

	if (You.Name.length() >= 5)
		cout << "\nNah lad, I'm calling you rent boy";

		Sleep(5000);
		cout << "\n\nBack to work renty!";
		Sleep(5000);

	if (You.Name.length() < 5)
		cout << "\nOkay, " << You.Name << " is it then\n\n";

		Sleep(5000);
		cout << "\n\nBack to work " << You.Name;
		Sleep(5000);


	return 0;
}
