#include <iostream>
#include <vector>

using namespace std;

void min_sum_min_distance_INEFF()
{
    /*
    1. ������� ��� �����
    2. �����c�� ��� �����
    3. ������� ��� ����
    4. ������� ������ ���������� ������� ����
    5. ������ ������ ���� - �����
    6. ����� ����������� �����
    */
    int n(0), res(0);
    cin >> n;
    vector<int> numbers(n, 0);
    for (int i(0); i<n; i++)
        cin>>numbers[i];
    for (int j(0); j<n-4; j++)
        for (int i(j+4); i<n;i++)
            cout<<numbers[j]+numbers[i]<< endl;
            if ((numbers[j]+numbers[i])<(numbers[j+1]+numbers[i+1])):
                res = numbers[j]+numbers[i]

    cout<<res<< endl;


}

int main()
{
    min_sum_min_distance_INEFF();
    return 0;
}
