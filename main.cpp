#include <iostream>

using namespace std;

void num_sum_min_distance_ineff_2()
{
    /**
    1  читать и запомнить входные данные
    2  вывести все пары
    3  вместо вывода пары посчитать их сумму
    4  вывести только пары, сумма которых кратно 27 и  разность индексов не менее 4
    5  только количество пар
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i<n; i++)
        cin>>numbers[i];
	
    for (int j(0); j<n-1; j++)
        for (int i(j+1); i<n;i++)
        {
            int cur_prod(numbers[j]+numbers[i]);
            if (cur_prod%27==0 and i-j>=4)
                good_pairs++;
        }
    cout<< good_pairs<< endl;
}

int main()
{
    num_sum_min_distance_ineff_2();
    return 0;
}
