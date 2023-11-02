#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

bool istag(string tag); //verifica se string é tag

int main()
{
	string in,tmp,html,lastword,inserttag;

	vector<string> htmlmap;

	bool intab=false,inspace=false,novalinha=false,intag=false;
	int len=0;
	
	while(getline(cin, in))
	{
		//if(in == "EOF")break;
		tmp += in;
		in = "";
	}
	int htmlsize = tmp.size();
	for(int i=0; i<htmlsize; i++)
	{
		if(tmp[i] == ' ' || tmp[i] == ' ' || tmp[i] == ' ' || tmp[i] == EOF)
		{
			//cout << "tmp == '  ' or tmp == '	' == true" << endl;

			//if(inspace)
			
			inspace = true;

			continue;
		}
		else
		{
			if(inspace || intag)
			{
				//Determina o fim de uma palavra e adiciona no array de palavras
				//Adiciona inclusive os espaços apenas um espaço/tab por palavra
				//cout << "intab || inspace adicionando las world =" << lastword << endl;
				htmlmap.insert(htmlmap.end(),lastword);
				//if(!novalinha)
				if(inspace)
					htmlmap.insert(htmlmap.end(), " " );
				lastword = "";

				if(intag)
				{
					htmlmap.insert(htmlmap.end(),inserttag);
					inserttag = "";
					intag=false;
				}

			}
			//cout << "tmp == '  ' or tmp == '	' == false concatenando lasworl com tmp (" << tmp[i] << ")" << endl;

			if(tmp[i] == '<')
			{
				if(i+3 < htmlsize)
				{
					char tmpteg[4];
					tmpteg[0] = tmp[i];
					tmpteg[1] = tmp[i+1];
					tmpteg[2] = tmp[i+2];
					tmpteg[3] = tmp[i+3];

					if(istag(tmpteg))
					{
						//cout << "istag true = " << tmpteg << endl;
						i+=3;
						intag=true;
						inserttag = tmpteg;
						continue;
					}
				}
			}

			lastword += tmp[i];

			inspace = false;

			if(i+1 == htmlsize)
			{
				htmlmap.insert(htmlmap.end(),lastword);
			}
		}
	}
	//cout << endl;

	vector<string>::iterator i;

	for(i= htmlmap.begin(); i<htmlmap.end(); i++)
	{
		if(*i == "<br>")
		{
			html  += '\n';
			len = 0;
			continue;
		}
		else if(*i == "<hr>")
		{
			if(len > 0)
				html  += '\n';

			html  +=  "-------------------------------------------------------------------------------\n" ;
			len = 0;
			continue;
		}

		if(len + i->size() > 80)
		{
			html += '\n';
			len=0;
		}

		len += i->size();

		html += *i;
	}
	cout << html << endl;
	return 0;
}


bool istag(string teg)
{
	if(teg == "<br>" || teg == "<hr>")return true;

	return false;
}

/*
		if(len == 80)
		{
			if(lastword != " " && lastword != "	")
			{
				int j=i;
				for(; j<tmp.size(); j++)
				{
					if(tmp[j] != ' ' && tmp[j] != '	')
						lastword += tmp[j];
					else
						break;
				}
				//int init = lastword.size();

				html += "\n" + lastword;
				i+=(j-i)-1;


				continue;

			}
			else
				html  += '\n';

			len = 0;
		}

		//verifica se é tag
		if(tmp[i] == '<')
		{

			if(tmp[i+2] == 'r' && tmp[i+3] == '>')
			{
				//<br>
				if(tmp[i+1] == 'b')
				{
					html  += '\n';
					len = 0;
					i+= 3;
					continue;
				}

				//<hr>

				if(tmp[i+1] == 'h')
				{
					if(len > 0)
						html  += '\n';

					html  +=  "-------------------------------------------------------------------------------\n" ;
					len = 0;
					i+= 3;
					continue;
				}
			}
		}



		if(tmp[i] == '	')
		{
			html += lastword;
			lastword = "";
			if(!intab)
			{

				len++;
				html  += "	";
				intab=true;
			}
			continue;
		}

		if(tmp[i] == ' ')
		{
			html += lastword;
			lastword = "";

			if(!inspace)
			{

				len++;
				html  +=  " ";
				inspace=true;
			}
			continue;
		}

		inspace=false;
		intab=false;
		len++;
		lastword += tmp[i];
		//html += tmp[i];

*/