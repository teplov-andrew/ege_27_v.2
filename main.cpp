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
            int cur_sum(numbers[j]+numbers[i]);
			cout<<cur_sum<<endl;
		}
}

int main()
{
    num_sum_min_distance_ineff_2();
    return 0;
}
