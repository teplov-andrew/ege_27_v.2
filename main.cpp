#include <stdio.h>



void min_sum_min_distance_EFF()
{
    /*
    1. счиатть 4 числа в червяка
    2. число в хвосте червяка - потенциальный минимум из пройденных
    3. сдвинуть все числа в червяке влево (0123 - 1234)
    4. счиать пятое число в зубы червяку
    5. вывести червяка и пройденный минимум для проверки
    6. собрать пару из того, что в зубах червяка, и пройденного минимума
    7. это кандидат на минимальную пару
    8. один ход червяка закончен, повторяем
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



