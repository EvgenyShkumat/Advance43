int find_max_element(int* array, int size) {
	int max = *array;
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (*(array + i) > max) {
			max = *(array + i);
			index = i;
		}
	}

	return index;
}

int find_min_element(int* array, int size) {
	int min= *array;
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		if (*(array + i) < min) {
			min = *(array + i);
			index = i;
		}
	}

	return index;
}