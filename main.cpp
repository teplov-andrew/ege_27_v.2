#include <iostream>

using namespace std;

void number_of_products_div()
{
    /*
	+ считываем входные данные и выводим их
	+ находим делители 14
	3. если входное число делится на найденный делитель, то прибавляем +1
	4. выводим количество пар
	*/
	int n(0), cur(0);
	int n14(0), n7(0), n2(0), no(0);
    cin >> n;
    for (int i(0); i<n; i++)
    {
        cin >> cur;
        if (cur % 14 == 0)
			n14++;
		else if (cur%7==0)
			n7++;
		else if (cur%2==0)
			n2++;
		
    }
	cout<<n14<<endl;
	cout<<n7<<endl;
	cout<<n2<<endl;
}

int main()
{
    number_of_products_div();
    return 0;
}
