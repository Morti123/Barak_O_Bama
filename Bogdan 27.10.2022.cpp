#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	/*Series7.Дано целое число N и набор из N вещественных чисел.Вывести в
		том же порядке округленные значения всех чисел из данного набора(как
			целые числа), а также сумму всех округленных значений.*/
	/*int n;
	int sum = 0;
	double a;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
			cout << round(a) << endl;
			sum = sum + round (a);
	}
	cout << sum << endl;*/
	/*Series8.Дано целое число N и набор из N целых чисел.Вывести в том же
		порядке все четные числа из данного набора и количество K таких чисел.*/
	/*int n;
	int sum = 0;
	int a;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (a % 2 == 0) {
			cout << a << endl;
			sum = sum + 1;
		}
	}
	cout << sum;*/
	/*Series9.Дано целое число N и набор из N целых чисел.Вывести в том же
		порядке номера всех нечетных чисел из данного набора и количество K
		таких чисел.*/
	/*int n;
	int sum = 0;
	int a;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		if (a % 2 != 0) {
			cout << a << endl;
			sum = sum + 1;
		}
	}
	cout << sum;*/
	/*Series10.Дано целое число N и набор из N целых чисел.Если в наборе
		имеются положительные числа, то вывести TRUE; в противном случае
		вывести FALSE.*/
	/*int n;
	int a;
	int b = 0;
	cin >> n;
	int i = 1;
		while (i <= n) {
			cin >> a;
			if (a > 0) {
				b+= 1;
			}
			i++;
		}
		if (b > 0) {
			cout << "True" << endl;
		}
		else {
			cout << " false" << endl;
		}*/
	/*Series11.Даны целые числа K, N и набор из N целых чисел.Если в наборе
		имеются числа, меньшие K, то вывести TRUE; в противном случае вывести
		FALSE.*/
	/*int n, k;
	int b = 0;
	int a;
	cin >> n >> k;
	int i = 1;
	while (i <= n) {
		cin >> a;
		if (a < k) {
			b += 1;
		}
		i++;
	}
	if (b > 0) {
		cout << "True" << endl;
	}
	else {
		cout << " false" << endl;
	}
	*/
	





	return 0;
}

