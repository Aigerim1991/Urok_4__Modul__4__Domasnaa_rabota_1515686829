#include <stdio.h>
#include<iostream>
#include<locale.h>
#include <time.h>
#include<math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "RUS");
	int N;
	do
	{
		cout << "Ввести номер задания" << "\n";
		cin >> N;
		switch (N)
		{
		case 1:
		{
			
			int chislo, interval;
			cin >> chislo;
			srand(time(NULL));
			for (int i=0;i<chislo;i++)
			{
				interval = -5 + rand() % 5;
				if (interval == 0)
					break;
				else cout << i << endl;
			}




		}
		break;
		case 2:
		{
			
			int n;
			float M;
			cin >> n;
			srand(time(NULL));

			for (int i = 1; i < n; i++)
			{
				M = 1 + rand() % 5;
				cout << pow(i, M) << endl;

			}
		}
		break;
		case 3:
		{
			int sum = 0;

			int rashody;
			cout << "Ввести расходы: " << "\n";
			cin >> rashody;

			short int mes;
			for (mes = 1; mes <= 10; mes++)
			{
				rashody = rashody + (rashody * 3) / 100;
				sum += rashody;
				cout << "В" << " " << mes << " " << "расходы составляет" << " " << sum << "\n";
				sum += sum;
			}
			cout << " За 10 месяцев" << " " << sum << endl;
		}
		break;
		case 4:
		{
			int n, m,k, sum = 0;
			cout << "Ввести число n: " << "";
			cin >> n;
			cout << "Ввести число m: " << "";
			cin >> m;
			for (int i=1;i<m;i++)
			{
				
			 k = n % 10;
				n = n / 10;
				sum = sum + k;

			}
			cout << k << endl;
		}
		break;
		case 5:
		{
			int n, s1, s2, s3, s4,k;
			for (n = 1000; n<10000; n++) 
			{
				s1 = n / 1000;
				s2 = n % 1000 / 100;
				s3 = n % 100 / 10;
				s4 = n % 10;
				k = pow(s1, 4) + pow(s2, 4) + pow(s3, 4) + pow(s4, 4);
				if (k == n) cout <<"Натуральное число n: "<<n<<" Число Армстронга:  "<< k << endl;
			}
			


		}
		break;
		case 6:
		{
			int n, sum = 0;
			for (n = 1; n <= 100; n++)
			{
				if (n % 7 == 0)
					cout <<"Все числа которые кратны к семи: "<< n << endl;
				sum += n;
			}
			cout <<"Сумма всех чисел кратные к семи: " <<sum << endl;
		}
		break;
		case 7:
		{
			int dv, tot, x;

			cout << "Введите число" << endl;
			cin >> dv;
			do
			{
				dv = dv / 8;
				if ((dv % 8) == 0)
				{
					cout << 0 << endl;
				}
				else
				{
					cout << 1 << endl;

				}
				x = dv;
			} while (dv>0);
		}
		break;
		default:
			break;
		}
	} while (N>0);
	}