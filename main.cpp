#include <iostream>
#include <vector>
using namespace std;

void number_of_products_div()
{
    /**
    + читать и запомнить входные данные
    + вывести все пары
    + вместо вывода пары посчиатть ее произведение
    4. вывести только пары, произведения которых кратно 30
    5. только количество пар
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i<n; i++)
        cin>>numbers[i];
    for (int j(0); j<n-1; j++)
        for (int i(j+1); i<n;i++)
            cout<<numbers[j] * numbers[i]<< endl;
}

int main()
{
    number_of_products_div();
    return 0;
}
