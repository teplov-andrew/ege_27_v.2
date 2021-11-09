#include <iostream>
#include <vector>
using namespace std;

void number_of_products_div()
{
    /**
    1. читать и запомнить входные данные
    2. вывести все пары
    3. вместо вывода пары посчиатть ее произведение
    4. вывести только пары, произведения которых ерптно 55
    5. только количество пар
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i<n; i++)
        cin>>numbers[i];
    for (int i(0); i<n; i++)
        cout<<numbers[i]<<" ";
}

int main()
{
    number_of_products_div();
    return 0;
}
