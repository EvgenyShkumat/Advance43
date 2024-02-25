#include <iostream>
using namespace std;

void random_init(int* array, int size, int start);
string output(int* array, int size);

int find_max_element(int* array, int size);
int find_min_element(int* array, int size);
void swap_s(int* a, int* b);

int main() {
	int size = 10;
	int* vector = new int[size];

	random_init(vector, size, 1);

	cout << "Before:\n" << output(vector, size);

	int min = find_min_element(vector, size);
	int max = find_max_element(vector, size);

	swap_s((vector + max), (vector + min));

	cout << "\nAfter:\n" << output(vector, size);

	return 0;
}

