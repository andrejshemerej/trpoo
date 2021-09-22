
#include <iostream>
using namespace std;

int main()
{
	int k,b,c,x,z;
	long long l[10]={0,0,0,0,0,0,0,0,0,0};
	cout << "kol-vo elementov randoma = " ;
	cin >> k;
	for (int i = 0; i < k; i++) {
		b = rand() % 10;
		l[b]++;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < l[i]; j++)
			cout << i;
		cout<<endl;
	}

	system("pause");
	return 0;
}