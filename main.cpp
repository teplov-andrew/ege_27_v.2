#include <iostream>

using namespace std;

void num_sum_max_distance_eff_1()
{
    /*
    1)берем первые 7 чисел 
    2) просматриваем их на предмет того, кратны ли они 39
    3) берем следующие числа от 7 до конца и поочередно проверяем
    */
	int n(0);
    cin >> n;
    int cnt(0);
    vector<int> number(7, 0); 

    for (int i(0); i < 7; i++)
    {
        cin >> number[i];
    }
}

int main()
{
    num_sum_max_distance_eff_1();
    return 0;
}
