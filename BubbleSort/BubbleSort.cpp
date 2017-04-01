#include<iostream>
using namespace std;

template<typename Type>
void BubbleSort(Type* a, int n)
{
	for (int i = 1; i != n; ++i)
		for (int j = 0; j != n - i; ++j)
			if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
}

int main()
{
	int a[10];
	cout << "Please enter 10 numbers:";
	for (auto& value : a) cin >> value;
	BubbleSort<int>(a, 10);
	cout << "Low-to-High:";
	for (auto& value : a) cout << value << "   "; cout << endl;
	return EXIT_SUCCESS;
}