#include <iostream>

using namespace std;

struct Dia
{
	int dia;
	int hora;
	int minuto;
	int segundo;
};

void cal_event()
{
	
}


int main()
{
	Dia inicio;
	Dia fim;
	string tmp;

	cin >> tmp;
	cin >> inicio.dia;

	cin >> inicio.hora;
	cin >> tmp;
	cin >> inicio.minuto;
	cin >> tmp;
	cin >> inicio.segundo;


	cin >> tmp;
	cin >> fim.dia;

	cin >> fim.hora;
	cin >> tmp;
	cin >> fim.minuto;
	cin >> tmp;
	cin >> fim.segundo;


	cal_event(inicio,fim);
	return 0;
}
