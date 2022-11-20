#include <iostream>
#include <ctime>
#include "issquare.h"


using namespace std;
int main() {
	const int N = 10;
	int arr[N], k = 0;
	srand(time(nullptr));
	for (int i = 0; i < 10; i++) {
		arr[i] = rand()%26;
		cout << arr[i] << ' ';
	}
	/*25
	for (int i = 0; i < 10; i++) {
		if (issquare(arr[i])==1) {
			k++;
		}
	}
	cout << endl << k;*/

	/*26
	for (int i = 0; i < 10; i++) {
		if (power5(arr[i]) == 1) {
			k++;
		}
	}
	cout << endl << k;*/

	/*27
	for (int i = 0; i < 10; i++) {
		if (ispowerN(arr[i],N) == 1) {
			k++;
		}
	}
	cout << endl << k;*/

	//28 не работает
	for (int i = 0; i < 10; i++) {
		if (isprime(arr[i]) == 1) {
			k++;
		}
	}
	cout << endl << k;
}
