#include <iostream>

using namespace std;

void number_of_products_div()
{
	/**
    + 1. считать и сохранять все числа
    + 2. вывести все пары
    + 3. вместо пары вывести суммы
    4. делимость сумм проверить
    5. вывести только наибольшую сумму
    */
	std::vector<std::size_t> FindMaxElements(std::vector<int> const& v)
	{
    std::vector<std::size_t> indices;
    int current_max = 0;
    int prev_max = 0;

    for (std::size_t i = 0; i < v.size(); ++i)
    {
        if (v[i] > current_max and prev_max == 0)
        {
            prev_max = v[i];
            current_max = v[i];
        }

        if (v[i] > current_max and prev_max > 0 and (current_max + v[i]) % 2 != 0)
        {
            prev_max = current_max;
            current_max = v[i];
            indices.clear();
            indices.push_back(current_max);
            indices.push_back(prev_max);
        }

    }

    return indices;
	}

    int n(0);
    int res(0);
    cin >> n;
    vector<int> numbers(n);
    vector<int> res_vector(n);
    for (int i(0); i<n; i++)
        cin >> numbers[i];

}

int main()
{
    number_of_products_div();
    return 0;
}
