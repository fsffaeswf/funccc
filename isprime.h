#pragma once
bool isprime(int n) {
	int i = 2, k = 0;
	while (n / 2 >= i) {
		if (n % i == 0) {
			k++;
		}
		i++;
	}
	bool m = k == 0;
	return m;
}
