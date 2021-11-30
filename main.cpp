#include <iostream>
#include <vector>

using namespace std;

void min_sum_min_distance_INEFF()
{
    /*
    1. считать все числа
    2. вывечcти все числа
    3. вывести все пары
    4. вывести только достаточно далекие пары
    5. вместо вывода пары - сумму
    6. найти минимальную сумму
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i<n; i++)
        cin>>numbers[i];
    for (int j(0); j<n-1; j++)
        for (int i(j+1); i<n;i++)
            cout<<numbers[j]<<" "<<numbers[i]<< endl;

}

int main()
{
    min_sum_min_distance_INEFF();
    return 0;
}
