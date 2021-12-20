#include <iostream>
#include <vector>


using namespace std;

void number_sum_div_ineff_2()
{
	/*
	1. считать и запомнить числа, посчитать кол-во элементов в векторе
	2. вывести все пары чисел
	3. проверить делимость суммы на 40 и наличие элемента больше 40 в паре
	4. посчитать и вывести итоговое количество 
	*/
  int n(0);
  int cur(0);
  int cnt(0);
  vector<int> numbers;
  while (n!=-9999)
  {
    cin >>n;
    numbers.push_back(n);
    cur++;
  }
  for (int i(0);i<cur-2;i++)
  {
    for (int j(i+1);j<cur-1;j++)
    {
      if ((numbers[i]+numbers[j])%40==0)
        if (numbers[i]>40 or numbers[j]>40)
			cnt++;
    }
  }
  cout<<cnt<<endl;
}


int main()
{
    number_sum_div_ineff_2();
    return 0;
}



