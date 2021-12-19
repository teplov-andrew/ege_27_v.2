#include <iostream>

using namespace std;

void num_sum_max_distance_ineff_1()
{
	/*
    1  ������ � ��������� ������� ������
    2  ������� ��� ����
    3  ������ ������ ���� ��������� �� �����
    4  ������� ������ ����, ����� ������� ������ 39 � �������� �������� ������ 7
    5  ������ ���������� ���
	*/
	int n(0);
    cin >> n;
	int good_pairs(0);
    vector<int> numbers(n, 0);
    for (int i(0); i<n; i++)
        cin>>numbers[i];
	
	for (int j(0); j<n-1; j++)
		for (int i(j+1); i<n;i++)
		{
			int cur_sum(numbers[j]+numbers[i]);
			if (cur_sum%39==0 and i-j<7)
				good_pairs++;
		}
	cout<< good_pairs<< endl;
}	

int main()
{
    num_sum_max_distance_ineff_1();
    return 0;
}
