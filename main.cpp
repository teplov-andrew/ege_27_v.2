#include <iostream>

using namespace std;

void num_sum_min_distance_ineff_2()
{
    /**
    1  ������ � ��������� ������� ������
    2  ������� ��� ����
    3  ������ ������ ���� ��������� �� �����
    4  ������� ������ ����, ����� ������� ������ 27 �  �������� �������� �� ����� 4
    5  ������ ���������� ���
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
