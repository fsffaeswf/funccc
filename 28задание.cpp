#include <iostream>
#include "isprime.h"
#include <ctime>
using namespace std;
int main() {
	sfafa
	const int N = 10;
	int arr[N], k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 26;
		cout << arr[i] << ' ';
	}
		for (int i = 0; i < 10; i++) {
			if (isprime(arr[i]) == 1) {
				k++;
			}
		}
	cout << endl << k;
}
