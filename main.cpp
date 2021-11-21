#include <iostream>

using namespace std;

void number_of_products_div()
{
    /*
	1. считываем входные данные и выводим их
	2. находим делители 14
	3. если входное число делится на найденные делитель, то прибавляем +1
	4. выводим количество пар
	*/
	int n(0), cur(0);
    cin >> n;
    for (int i(0); i<n; i++)
    {
        cin >> cur;
        cout << cur << endl;
    }
}

int main()
{
    number_of_products_div();
    return 0;
}
