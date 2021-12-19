#include <iostream>

using namespace std;

void num_sum_max_distance_ineff_1()
{
	/*
    1  читать и запомнить входные данные
    2  вывести все пары
    3  вместо вывода пары посчитать их сумму
    4  вывести только пары, сумма которых кратно 39 и разность индексов меньше 7
    5  только количество пар
	*/
	int n(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i<n; i++)
        cin>>numbers[i];
}

int main()
{
    num_sum_max_distance_ineff_1();
    return 0;
}
