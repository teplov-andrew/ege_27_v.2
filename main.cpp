#include <iostream>

using namespace std;

void num_sum_multiple_distance_ineff_3()
{
    /**
    1  читать и запомнить входные данные
    2  вывести все пары
    3  вместо вывода пары посчитать ихсумму
    4  вывести только пары, сумма которых кратно 49 и разность которых кратна 8
    5  только количество пар
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i<n; i++)
        cin>>numbers[i];
    int good_pairs(0);
    for (int j(0); j<n-1; j++)
        for (int i(j+1); i<n;i++)
        {
            int cur_sum(numbers[j]+numbers[i]);
			cout<<cur_sum<<endl;
		}
}

int main()
{
    num_sum_multiple_distance_ineff_3();
    return 0;
}
