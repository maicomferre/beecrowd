#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	cout.setf(ios::fixed);
	cout << setprecision(1);

	double n1,n2,n3,n4;

	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;

	n1 = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10.0;

	cout << "Media: " << n1<<endl;

	if(n1 >= 7.0)
	{
		cout << "Aluno aprovado." << endl;
	}
	else if(n1 >= 5.0)
	{
		cout << "Aluno em exame." << endl;

		double n5;
		cin >> n5;

		cout << "Nota do exame: " << n5 << endl;

		n1 = ( n5 + n1 ) / 2.0;

		if(n1 >= 5.0)
			cout << "Aluno aprovado." << endl;
		else
			cout << "Aluno reprovado." << endl;

		cout << "Media final: " << n1 << endl;
	}
	else
	{
		cout << "Aluno reprovado." << endl;
	}
}
