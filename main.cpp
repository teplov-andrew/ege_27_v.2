#include <iostream>
#include <vector>

using namespace std;

void num_sum_itog_ineff()
{
    /*
    1. ������� ��� ����� � ������� ��
    2. ������� ������ ���� ����� � ������� ��
    3. ������� ������ �� ������, � ������� ����� ����� ������� �� 4
    4. ����� ����������� ������
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
