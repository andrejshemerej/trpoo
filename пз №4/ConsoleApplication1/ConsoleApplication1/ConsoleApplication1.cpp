#include <iomanip>
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void matrix_output(int** a, int line, int column) {
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << setw(4) << a[i][j];
		} cout << endl;
	}

}
void matrix_input(int** a,int line, int column )
{	
	srand(time(NULL));
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < column; j++)
		{
			a[i][j] = rand() % 21 - 10;

		}
	}	
}
double mas_sum(int kol, int* l)
{
	double s = 0;
	for (int i = 0; i < kol; i++)
	{

		s += l[i];
	}
	return s;
}
int mas_input(int kol,int* l)
{
	

	srand(time(NULL));
	for (int i = 0; i < kol; i++) {

		l[i] = rand() % 21 - 10;
	}
	return 0;
}
int mas_output(int kol,int* l)
{
	for (int i = 0; i < kol; i++) {

		if (i == kol - 1) {
			cout << l[i] << ";";
		}
		else { cout << l[i] << ","; }
	}
	cout << endl;
	return 0;
}
void task1()
{
	int line, column;	

	cout << "input numbers matrix of line\n";
	cin >> line;
	cout << "input numbers matrix of column\n";
	cin >> column;
	int** a; 
	a = new int* [line]; 
	for (int i = 0; i < column; i++)
		a[i] = new int[column];
	matrix_input(a,line, column);
	matrix_output(a, line, column);
}
void task2()
{
	int kol;
	cout << "input numbers  of elements\n";
	cin >> kol;
	int* l;
	l = new int [kol];
	mas_input(kol, l);
	mas_output(kol, l);
	double s= mas_sum(kol,l);
	cout << "bag of elements:" << s << endl << "mean:" << s / kol;
	
}
void mas_sort(int &kol, int* &l)
{
	
	for (int j = 0; j < kol; j++)
	{
		int num_min = j;
		for (int i = j; i < kol; i++) {
			if (l[i] < l[num_min]) {
				num_min = i;
			}
		}

		int temp;
		temp = l[j];
		l[j] = l[num_min];
		l[num_min] = temp;
	}
}
void mas_delete(int& kol, int*& l)
{
	for (int i = 0; i < kol-1; i++)
	{
		for (int k = i + 1; k < kol; k++)
		{
			if (l[i] == l[k])
			{
				if (kol == k)
				{
					kol--;
			} else
				{
					swap(l[k], l[kol - 1]);
				}
				kol--;
				k--;
			}
		}
	}
	mas_sort(kol, l);
}
void mas_med(int& kol,int*&l)
{
	cout << "arry median:\n";
	if (kol % 2 == 0)
	{
		cout << l[(kol / 2)-1] << "," << l[(kol / 2)] << ";";
	}
	else {cout << l[(kol / 2)] << ";"; }
}
void task3()
{
	int line, column;

	cout << "input numbers matrix of line\n";
	cin >> line;
	cout << "input numbers matrix of column\n";
	cin >> column;
	int** a;
	a = new int* [line];
	for (int i = 0; i < column; i++)
		a[i] = new int[column];
	matrix_input(a, line, column);
	
	int line1, column1;

	cout << "input numbers matrix of line\n";
	cin >> line1;
	cout << "input numbers matrix of column\n";
	cin >> column1;
	int** b;
	b = new int* [line1];
	for (int i = 0; i < column1; i++)
		b[i] = new int[column1];
	matrix_input(b, line1, column1);
	
	if (column != line1) { cout <<"eror\n"; }
	else
	{
		cout << "matrix #1\n";
		matrix_output(a, line, column);
		cout << "matrix #2\n";
		matrix_output(b, line1, column1);
		
		int** c;
		c = new int* [line];
		for (int i = 0; i < column1; i++)
			c[i] = new int[column1];
		
		for (int i = 0; i < line; i++)
		
			for (int j = 0; j < column1; j++)
			{
				c[i][j] = 0;
				for (int z = 0; z < line1; z++)
					c[i][j] = c[i][j] + a[i][z] * b[z][j];
			}
		cout << "rezult matrix\n";
			matrix_output(c, column, line1);
		
	}
}
void task4()
{
	int kol;
	cout << "input numbers  of elements\n";
	cin >> kol;
	int* l = new int[kol];
	mas_input(kol, l);
	mas_output(kol, l);
	mas_sort(kol, l);
	mas_output(kol, l);
	mas_delete(kol, l);
	mas_output(kol, l);
	mas_med(kol, l);
}
void task5()
{
	int line, column;

	cout << "input numbers matrix of line\n";
	cin >> line;
	cout << "input numbers matrix of column\n";
	cin >> column;
	int** a;
	a = new int* [line];
	for (int i = 0; i < column; i++)
		a[i] = new int[column];
	matrix_input(a, line, column);
	int* g = new int[column * line];

	for (int i = 0; i < line; i++)
		for (int j = 0; j < column; j++)
		{
			g[i * column + j] = a[i][j];
		}
	int kol = column * line;
	matrix_output(a, line, column);
	mas_sort(kol, g);
	mas_output(kol, g);
	mas_delete(kol, g);
	mas_med(kol, g);
	cout << "\n";
	cout << "max element:" << g[kol-1];
	cout << "\n";
	cout << "min element:" << g[0];
}
int main()
{
	
	while (true)
	{
		int n;
		cout << "Choose task\n";
		cin >> n;
		switch (n)
		{
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		case 4:
			task4();
			break;
		case 5:
			task5();
			break;
		default: cout << "Eror"; break;
		}
		cout << "\n";
	}
}
