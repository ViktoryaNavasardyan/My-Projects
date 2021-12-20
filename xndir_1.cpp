#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

bool is_ajman_kargov(int length, int* row)
{
	for (int i = 0; i < length-1;i++)
	{
		if (row[i] >= row[i + 1])
			return false;
	}
	return true;
}

int main()
{
	//nermucel
	int n, m;
	cin >> n >> m;
	int** a = new int* [n];
	for (int i = 0; i < n; i++) 
	{
		a[i] = new int[m];
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}
	cout << endl;

	//stugel
	bool* b = new bool[n];
	for (int i = 0; i < n; i++){
		b[i] = is_ajman_kargov(m, a[i]);
	}

	//sortavorel
	int count=0;
	for (int i = 0; i < n; i++) {
		if (!b[i]) {
			if (i != count) {
				swap(a[i], a[count]);
				swap(b[i], b[count]);
			}
			++count;
		}
	}

	//tpel
	for (int i = 0; i < count; i++) {
		for (int j = 0; j < m; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}

	//jnjel
	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;
	delete[] b;
	return 0;
}
