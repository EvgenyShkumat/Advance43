#include <iostream>
using namespace std;

void random_init(int* array, int size, int start);
string output(int* array, int size);

int main() {
	int size = 10;
	int* vector = new int[size];

	random_init(vector, size, 1);

	cout << "Before:\n" << output(vector, size);

	return 0;
}

