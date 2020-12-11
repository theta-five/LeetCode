#include<iostream>
using namespace std;

bool IsPowerOfFour(int n);

bool IsPowerOfX(int n, unsigned m);//判断n是否为m的幂次方

int main() {

	cout << IsPowerOfFour(0) << endl;

	cout << IsPowerOfX(10000, 100) << endl;

	system("pause");

	return 0;
}

bool IsPowerOfFour(int n) {

	if (n <= 0) {
		return false;
	}

	while (!(n % 4)){

		n /= 4;

	}

	return n == 1;

}

bool IsPowerOfX(int n, unsigned m) {

	if (m == 0) {
		return n == 0;
	}

	if (n <= 0) {
		return false;
	}

	while (!( n % m)){
		n /= m;
	}

	return n == 1;
}