#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <stdio.h>
using namespace std;

void nortox(char* x)
{
	char a = x[0];
	int len = strlen(x);
	for (int i = 0; i < len - 1; i++) {
		x[i] = x[i + 1];
	}
	x[len - 1] = a;
	x[len] = '\0';
}

int main()
{
	const int n = 51;
	char* a = new char[n];
	cin.getline(a, n, '\n');
	int l = strlen(a);
	char* x = new char[l + 1];
	strcpy(x, a);
	int count = 1;
	for (int i = 0; i < l; i++) {
		nortox(a);
		if (strcmp(x, a) != 0) {
			count++;
		}
		else {
			cout << count << endl;
			break;
		}
	}
	delete[] a;
	delete[] x;
	return 0;
}
