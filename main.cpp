#include <stdio.h>



void min_sum_min_distance_EFF()
{
    /*
    1. ������� 4 ����� � �������
    2. ����� � ������ ������� - ������������� ������� �� ����������
    3. �������� ��� ����� � ������� ����� (0123 - 1234)
    4. ������ ����� ����� � ���� �������
    5. ������� ������� � ���������� ������� ��� ��������
    6. ������� ���� �� ����, ��� � ����� �������, � ����������� ��������
    7. ��� �������� �� ����������� ����
    8. ���� ��� ������� ��������, ���������
    */

    long int n = 0;
    scanf("%li", &n);
    long int a[n];
    long int new_min(999999);
    long int cur = 0;
    long int last_min = 999999;
    
    for (int i = 0; i<n; i++) {
        scanf("%li", &a[i]);
    }
    
    last_min = a[0];
    for (int i = 0; i<n; i++) {
        if (i > 3) {
            cur = a[i] + last_min;
    }
   
    printf("%li", cur);


}

int main()
{
    min_sum_min_distance_EFF();
    return 0;
}



