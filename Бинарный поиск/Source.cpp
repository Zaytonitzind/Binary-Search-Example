#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> list, int searched) 
{
	int low = 0, mid, guess;
	int high = list.size()-1;

	while (low <= high) 
	{
		mid = (low + high) / 2;
		guess = list[mid];
		if (guess == searched)
			return mid;
		else if (guess > searched)
			high = mid--;
		else
			low = mid++;
	}
	return -1;
}

int main() 
{
	setlocale(LC_ALL, "rus");

	vector<int> list = { 1, 3, 5, 7, 9 };
	int num;

	cout << "¬ведите искомое число массива ";
	cin >> num;
	cout << "»ндекс искомого элемента равен " << binarySearch(list, num) << endl;

	system("pause");
	return 0;
}