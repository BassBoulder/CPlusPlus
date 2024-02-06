
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> Weapons {"Pistol", "SMG", "Rifle", "Rifle2", "Shotgun", "Cell Rifle", "Heat Rifle", "Frag", "Trip", "Scatter", 
						"Launcher", "Clearer", "Dusters", "Spear", "Shield", "Taser", "Combat Knife", "Torch"};

vector<string> Status_Weapon { "Unholster", "Holster", "Empty" };

vector<string> Injury { "Fine", "Caution", "Danger", "Dead" };

vector<string> Status_Health { "Poison", "Fire", "Ice", "Acid", "Shock", "Undead", "Madness" };


size_t Weapon_Size = size(Weapons);
size_t Status_Weapon_Size = size(Status_Weapon);
size_t Injury_Size = size(Injury);
size_t Status_Health_Size = size(Status_Health);

int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

		do {

			do
			{
				cout << Weapons[i] << "\t x ";

			} while (i < Weapon_Size);

			do
			{
				cout << Status_Weapon[j] << "\t x " << Injury[k] << "\t x " << Status_Health[l] << endl;
				j += 1;

			} while (j < Status_Weapon_Size);

			do
			{
				cout << Injury[k] << "\t x " << Status_Health[l] << endl;
				k += 1;

			} while (k < Injury_Size);

			do
			{
				cout << Status_Health[l] << endl;
				l += 1;

			} while (l < Status_Health_Size);

			i += 1;
		} 
			while (i < Weapon_Size);
	

	return 0;
}