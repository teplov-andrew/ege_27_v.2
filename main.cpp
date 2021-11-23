#include <iostream>

using namespace std;


void number_of_products_div()
{
    /*
    + считать число
    + добавить его к одному из счетчиков соответствующего класса эквивалентности:
        делится на 14, делиться на 7 не на 2, лелиться на 2 не на 7, не делиться нина 7 ни на 2
    + ответ: n14*(n14-1)/2+n14*n2+n14*n7+n14*no+n2*n7
	*/
	long long int n(0), cur(0);
	long long int n14(0), n7(0), n2(0), no(0);
    cin >> n;
    for (int i(0); i<n; i++)
    {
        cin >> cur;
        if (cur % 6 == 0)
			n14++;
		else if (cur%3==0)
			n7++;
		else if (cur%2==0)
			n2++;

    }
    no = n - n14 - n2 - n7;
    cout << n14*(n14-1)/2+n14*n2+n14*n7+n14*no+n2*n7;
}

int main()
{
    number_of_products_div();
    return 0;
}
