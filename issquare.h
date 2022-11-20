#pragma once
//25
bool issquare(int k) {
	int i = 0;
	while (k >= i)
	{
		if (i * i == k) {
			return true;
		}
		i++;
	}
	return false;
}
//26
bool power5(int k) {
	int i = 0;
	while (k >= i)
	{
		if (pow(i,5) == k) {
			return true;
		}
		i++;
	}
	return false;
}
//27
bool ispowerN(int k,int N) {
	int i = 0;
	while (k >= i)
	{
		if (pow(i, N) == k) {
			return true;
		}
		i++;
	}
	return false;
}
//28
bool isprime(int n) {
	int i = 2,k=0;
	while (n/2 >= i) {
		if (n % i == 0) {
			k++;
		}
	}
	if (k == 0) {
		return true;
	}
	else {
		return false;
	}
}
