#include <iostream>
#include <vector>
using namespace std;


void num_sum_max_distance_eff_1()
{
    /*
    1)����� ������ 7 ����� 
    2) ������������� �� �� ������� ����, ������ �� ��� 39
    3) ����� ��������� ����� �� 7 �� ����� � ���������� ���������
    */
    
    
    int n(0);
    cin >> n;
    int cnt(0);
    vector<int> number(7, 0); 

    for (int i(0); i < 7; i++)
    {
        cin >> number[i];
    }

    for (int i(0); i < 6; i++)
    {
        for (int j(i + 1); j < 7; j++)
          if ((number[i] +number[j])%39==0)
            cnt++;
    }

    for (int i(7); i < n; i++)
    {
        int a;
        cin >> a;
        for (int j(0); j < 6; j++)
        {
            number[j] = number[j + 1];
            if ((a +number[j])%39==0)
            cnt++;
        }
        number[6] = a;
    }
    cout << cnt<< endl;
}

int main()
{
    num_sum_max_distance_eff_1();
    return 0;
}
