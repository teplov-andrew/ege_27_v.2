#include <iostream>

using namespace std;

void number_of_products_div()
{
    /**
	1. считать числа
	2. увеличить один из счётчиков: % 66, % 33, % 22, % 6, % 5, % 3, % 2, не %
	3. ответ: n66 * (n66 - 1) / 2 + n66 * (n33 + n22 + n6 + n11 + n5 + n2) + (n33 * n22 + n33 * n6 + n22 * n6) + (n33 * n2 + n22 * n5 + n6 * n11) + n0 * n66
	*/
	
	long long n, cur;
	cin >> n;
	for (int i(0); i < n; ++i) {
		cin >> cur;
	}

int main()
{
    number_of_products_div();
    return 0;
}
