#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Human {
public:
	string name{};
	int age{};
	vector<Human> children{};
};

int main()
{

	Human Daughter1;
	Daughter1.name = "Alice";
	Daughter1.age = 7;

	Human Daughter2;
	Daughter1.name = "Georgia";
	Daughter1.age = 4;

	Human Son;
	Daughter1.name = "Theo";
	Daughter1.age = 4;

	Human Daddy;
	Daddy.name = "Nick";
	Daddy.age = 34;
	Daddy.children.push_back(Daughter1);
	Daddy.children.push_back(Daughter2);
	Daddy.children.push_back(Son);


	cout << Daddy.name << "\n" << Daddy.age << endl;

	cout << Daddy.children.size() << endl;

	cout << Daddy.children.max_size() << endl;


	return 0;
};