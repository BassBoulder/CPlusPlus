#include <iostream>

using namespace std;

int* Apply_All(const int* const arr1, size_t size1, const int* const arr2, size_t size2)
{
	int* new_array{};

	new_array = new int[size1 * size2];

	int position{ 0 };
	for (size_t i{ 0 }; i < size2; ++i)
	{
		for (size_t j{ 0 }; j < size2; ++j)
		{
			new_array[position] = arr1[j] * arr2[i];
			++position;
		}
	}
	return new_array;
}

void Print(const int* const arr, size_t size)
{
	cout << "[";
	for (size_t i{ 0 }; i < size; ++i)
		cout << arr[i] << " ";
	cout << "]";
	cout << endl;
}

int main()
{
	const size_t array1_size{ 5 };
	const size_t array2_size{ 3 };

	int array1[]{ 1,2,3,4,5 };
	int array2[]{ 1,2,3,4,5 };

	cout << "Array1:";
	Print(array1, 5);

	cout << "Array2:";
	Print(array2, 3);

	int* results = Apply_All(array1, 5, array2, 3);
	cout << "Result:";
	Print(results, 15);

	delete[] results;
	cout << endl;
	return 0;
}