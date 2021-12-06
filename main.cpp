#include <iostream>

using namespace std;

void number_of_products_div()
{
    /**
	+ считать числа
	2. увеличить один из счётчиков: % 66, % 33, % 22, % 6, % 5, % 3, % 2, не %
	3. ответ: n66 * (n66 - 1) / 2 + n66 * (n33 + n22 + n6 + n11 + n5 + n2) + (n33 * n22 + n33 * n6 + n22 * n6) + (n33 * n2 + n22 * n5 + n6 * n11) + n0 * n66
	*/
	
	long long n, cur;
	long long n66(0), n33(0), n22(0), n6(0), n11(0), n5(0), n2(0), n0(0);
	cin >> n;
	for (int i(0); i < n; ++i) {
		cin >> cur;
		if (cur % 66 == 0) 
			++n66;
		else if (cur % 33 == 0) 
			++n33;
		else if (cur % 22 == 0) 
			++n22;
		else if (cur % 6 == 0) 
			++n6;
		else if (cur % 11 == 0) 
			++n11;
		else if (cur % 3 == 0) 
			++n5;
		else if (cur % 2 == 0) 
			++n2;
		else 
			++n0;
	}

int main()
{
    number_of_products_div();
    return 0;
}
