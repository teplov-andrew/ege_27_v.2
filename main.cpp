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
    for (int i(0); i<n; i++)
        cout<<numbers[i]<<" ";

}

int main()
{
    num_sum_itog_ineff();
    return 0;
}
