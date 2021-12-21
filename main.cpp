#include <iostream>
#include <vector>

using namespace std;

void num_sum_itog_ineff()
{
    /*
    1. считать все числа и вывести их
    2. создать тройки всех числе и вывести их
    3. вывести только те тройки, у которых сумма чисел делится на 4
    4. найти минимальную тройку
    */
    int n(0);
    cin >> n;
    vector<int> numbers(n,0);
    for (int i(0); i<n; i++)
    {
        cin>>numbers[i];
    }
    for (int j(0); j<n-2; j++)
        for (int i(j+1); i<n-1;i++)
            for (int a(i+1); a<n;a++)
            {
                if ((numbers[i]+numbers[j]+numbers[a])%4==0)
                    cout<<numbers[j]<<" "<<numbers[i]<<" "<<numbers[a]<<" "<< endl;
            }



}

int main()
{
    num_sum_itog_ineff();
    return 0;
}
