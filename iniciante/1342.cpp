#include <iostream>
#include <vector>

using namespace std;

bool emArmadilha(int posicao);

int armadilha[3];

int main()
{
	while(true)
	{
		int vencedorid = -1;

		int jogadores,mapajogo,linhas;
		int jogadoratual = 1;

		cin >> jogadores;
		cin >> mapajogo;

		int jogador[jogadores];
		bool jogador_armadilha[jogadores];

		for(int i=0; i<jogadores; i++)
		{
			jogador[i] = 0;
			jogador_armadilha[i] = false;
		}

		if(jogadores == 0 && mapajogo == 0)
			break;

		cin >> armadilha[1];
		cin >> armadilha[2];
		cin >> armadilha[3];

		cin >> linhas;

		cout << "Armadilha[1]" << armadilha[1] << endl;
		cout << "Armadilha[2]" << armadilha[3] << endl;
		cout << "Armadilha[3]" << armadilha[2] << endl;

		int D1,D2;
		for(int i=0; i<linhas; i++)
		{
			cout << "for(" << i << ") jogador = " << jogadoratual << endl;
			cin >> D1;
			cin >> D2;

			if(jogador_armadilha[jogadoratual-1] == true)
			{
				cout << "\tfor(" << i << ") jogador = " << jogadoratual << " BLOQUEADO... Armadilha removida" << endl;

				jogador_armadilha[jogadoratual-1] = false;
				jogadoratual++;
				continue;
			}


			D2 = D1 + D2;
			cout << "\t\tSoma valores digitados jogador " << D2 << endl;

			jogador[jogadoratual-1] += D2;
			cout << "\tfor(" << i << ") jogador = " << jogadoratual << " novaposicao = > " << jogador[jogadoratual-1]  << endl;

			cout << "\tfor(" << i << ") jogador = " << jogadoratual << " POSIÇÃO << " << jogador[jogadoratual-1]  << endl;

			if(jogador[jogadoratual-1] > mapajogo)
			{
				cout << "\tfor(" << i << ") jogador = " << jogadoratual << " jogador vencedor jogadas maior que mapajogo" << endl;

				vencedorid=jogadoratual;
			}

			if(emArmadilha(jogador[jogadoratual-1]))
			{
				cout << "\tfor(" << i << ") jogador = " << jogadoratual << "J OGADOR EM Armadilha" << endl;


				jogador_armadilha[jogadoratual-1] = true;
			}

			if(jogadoratual == jogadores)
			{
				cout << "\tfor(" << i << ") jogador = " << jogadoratual << " Indo para jogador 1" << endl;

				jogadoratual = 1;
			}
			else
			{
				cout << "\tfor(" << i << ") jogador = " << jogadoratual << " jogador++ " << endl;

				jogadoratual++;
			}
		}
		cout << vencedorid << endl;
	}
	return 0;

}


bool emArmadilha(int posicao)
{
	for(int i=0; i<3; i++)
		if(armadilha[i] == posicao)return true;
	return false;
}