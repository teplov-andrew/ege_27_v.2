#include <iostream>

using namespace std;

void number_of_products_div()
{
    /*
	÷» Ћ»„≈— »… Ѕ”‘≈–
	1) считываем первые 4 чисел в черв€ка (4 - рассто€ние между числами >=)
	2) далее в цикле от 4 до n:
		а) выкидываем число из хвоста, закидываем остаток от делени€ на 27 вышедшего из хвоста числа в счетчик
		б) вводим новую голову и смотрим с чем комплиментарен остаток от делени€ головы на 33, закидываем этот счетчик в глобальный
	3) выводим глобальный счетчик
    */
    int n(0), cnt(0);
    cin >> n;
    vector<int> res(27, 0); 
    vector<int> worm(4, 0); 
    
    for (int i(0); i < 4; i++)
        cin >> worm[i];
	
    for (int i(4); i < n; ++i)
    {
        res[worm[i % 4] % 27] += 1; 
        cin >> worm[i % 4]; 
        cnt += res[(27 - (worm[i % 4] % 27)) % 27]; 
    }
	cout << cnt <<endl;
}

int main()
{
    number_of_products_div();
    return 0;
}
