#include <iostream>
#include <vector>
#include <fstream>

using namespace std;
void max_sum_div()
{
    ifstream ifs("data.txt");
    /**
    + 1. ������� � ��������� ��� �����
    + 2. ������� ��� ����
    + 3. ������ ���� ������� �����
    4. ��������� ���� ���������
    5. ������� ������ ���������� �����
    */

    int n(0);
    ifs >> n;
    vector<int> numbers(n);
    for (int i(0); i<n; i++)
        ifs >> numbers[i];
    cout << endl;
    for (int j(0); j<n-1; j++)
        for (int i(j+1); i<n;i++)
            if ((numbers[i]+numbers[j])%2 != 0)
            cout<<numbers[j] + numbers[i]<< endl;

}
int main()
{
    max_sum_div();
    return 0;
}
