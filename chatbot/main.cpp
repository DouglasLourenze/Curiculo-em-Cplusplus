#include <iostream>
#include <string.h>
#include <locale>

using namespace std;

int menu(){//criado fun��o menu
	system("cls");
	cout <<"Digite o numero da op��o que deseja entrar: "<<endl;
	cout <<"1 - Resumo. "<<endl;
	cout <<"2 - Informa��es Pessoais."<<endl;
	cout <<"3 - Forma��o academica. "<<endl;
	cout <<"4 - Experiencias. "<<endl;
	cout <<"5 - Habilidades e competencias "<<endl;
	cout <<"Op��o: ";
	int escolha;
	cin >> escolha;
	return escolha;
}

int abriropcaoescolhida(int opescolhida){
	
 if(opescolhida <= 5){

	switch (opescolhida){
	
	case 1:
		system("cls");
		cout<<"RESUMO"<<endl;
		cout<<"Mais de 10 anos atuando na �rea de Ti, tenho �timos conhecimentos em diversas �reas da Ti, Infraestrutura e Data"<<endl;
		cout<<"Center, suporte t�cnico, seguran�a da informa��o, Banco de dados (SQL e MySQL), sistemas WEB (HTML, CSS, JS,"<<endl;
		cout<<"PHP), Mobile e Desktop (C#, Python, Java), Cloud, Devops. R�pida aprendizagem, �timo racioc�nio l�gico,"<<endl;
		cout<<"velocidade em solucionar problemas (Troubleshooting), buscando sempre evoluir meus conhecimentos."<<endl;
		cout<<"GIT: https://github.com/DouglasLourenze"<<endl;
		cout<<"  "<<endl;
		cout<<"Digite qualquer bot�o para reiniciar."<<endl;
		break;
	
	case 2:
		system("cls");
		cout<<"Informa��es Pessoais"<<endl;
		cout<<"Endere�o: Rua Vinte de Setembro, 746, Gravata�, RS"<<endl;
		cout<<"Celula: (51) 98651-3912 "<<endl;
		cout<<"Email: Douglas-zas@hotmail.com"<<endl;
		cout<<"Data de nascimento: 30/10/1995"<<endl;
		cout<<"Brasileiro � Solteiro"<<endl;
		cout<<"  "<<endl;
		cout<<"Digite qualquer bot�o para reiniciar."<<endl;
		break;
	case 3:
		system("cls");
		cout<<"Forma��o"<<endl;
		cout<<"- Superior T�cnologo | Analise e desenvolvimento de sistemas | Est�cio sa"<<endl;
		cout<<"- Superior Bacharelado| Trancado no 5� semestre | ULBRA � Gravata�"<<endl;
		cout<<"- T�cnico | Conclu�do 2016 | QI"<<endl;
		cout<<"- Ensino m�dio | Conclu�do em 2014 | E.M.E.M Santa Rita de C�ssia"<<endl;
		cout<<"  "<<endl;
		cout<<"Digite qualquer bot�o para reiniciar."<<endl;
		break;
	case 4:
		system("cls");
		cout<<"Experiencias"<<endl;
		cout<<"- ANALISTA DE SUPORTE E INFRAESTRUTURA PJ | SELETTUS TECNOLOGIA | ABRIL 2021 � ATUAL -"<<endl;
		cout<<"� Fun��es: Infraestrutura � Suporte ao usu�rio remoto � Active Directory � Administra��o de servidores �"<<endl;
		cout<<"Office365 � Seguran�a da informa��o � Suporte t�cnico � Microsoft Windows � Linux � Rede de computadores �Microsoft Office"<<endl;
		cout<<"  "<<endl;
		cout<<"- ASSISTENTE DE TI | CENTRAL DE CONSULTAS | DEZ DE 2019 � AGO DE 2020 -"<<endl;
		cout<<"� Fun��es: administrava toda ti, era responsavel por toda infraestrutura de ti de 13 unidades de clinicas,"<<endl;
		cout<<"gerenciava o financeiro da ti, chamados tecnicos, backups, monitoramento, telefonia, servidores e sistemas."<<endl;
		cout<<"  "<<endl;	
		cout<<"- ASSISTENTE DE SEGURAN�A DA INFORMA��O | SABEMI TEC | SET 2018 � AGO 2019 -"<<endl;
		cout<<"� Fun��es: Administra��o de acessos a sistemas pr�prios e sistemas terceiros, administra��o de usu�rios, "<<endl;
		cout<<"controle e elabora��o de documentos de perfil para auditoria, Active Directory ,atendimento e an�lise de"<<endl;
		cout<<"requisi��es e incidentes, abertura e execu��o de mudan�as, logs de firewall(CheckPoint), regras de firewall,"<<endl;
		cout<<"monitoramento(Zabbix, Grafana), Abrir e administrar chamados para as �reas respons�veis(requisi��es, a��es"<<endl;
		cout<<"e incidentes), monitoramento de servidores, amea�as, Link, VPN, servi�os. administrar redes wireless(Fortinet),"<<endl;
		cout<<"Administrar Anti v�rus(Kaspersky-Advanced), Linux(CentOs7), Exchange, reuni�o com fornecedores, an�lise de "<<endl;
		cout<<"novas solu��es, an�lise de vulnerabilidades e falhas de seguran�a, conhecimento em rede, VMware, VirtualBox,"<<endl;
		cout<<"suporte remoto, suporte ao setor de suporte, an�lise de problemas de sistemas e de neg�cio, VPN."<<endl;
		cout<<"  "<<endl;
		cout<<"- ESTAGI�RIO DE INFRAESTRUTURA DE TI | SABEMI TEC | AGO DE 2017 � AGO DE 2018 -"<<endl;
		cout<<"� Fun��es: Controle de planilhas, configurar aparelhos celulares corporativos, preparo de servidor linux para as"<<endl;
		cout<<"filiais, atendimento de requisi��es via sistema de chamados, Active Directory, Exchange, assinatura de email,"<<endl;
		cout<<"preparo e organiza��o de fitas para backups, Restore, Organizar e instalar equipamentos em datacenter."<<endl;
		cout<<"  "<<endl;
		cout<<"Digite qualquer bot�o para reiniciar."<<endl;
		break;
	case 5:
		system("cls");
		cout<<"Habilidades e compet�ncias"<<endl;
		cout<<"- Pr� ativo, pontual, capacidade de planejamento e organiza��o, �timo racioc�nio l�gico, agilidade e facilidade em"<<endl;
		cout<<"aprender, seriedade, comprometimento, buscar desenvolvimento pessoal, facilidade de comunica��o, esp�rito"<<endl;
		cout<<"de equipe, Paix�o por tecnologia, gerenciar processos e solucionar problemas, capasidade an�litica."<<endl;
		cout<<"  "<<endl;
		cout<<"Digite qualquer bot�o para reiniciar."<<endl;
		break;
	}
}	
else{
	cout<<"op��o invalida!!!!!!!!!!!!"<<endl;
	cout<<"Digite qualquer bot�o para reiniciar."<<endl;
	return 1;
}

}

int main(){
	setlocale( LC_ALL, "" );//com o include de locale, esse metodo deixa aplicar acentos e caracteres especiais ao c�digo.
	
	cout <<"Bem vindo ao meu curriculo!!"<< endl;
	cout <<"Aperte qualquer tecla para ver as op��es de menu: ";
	
	getchar();// pausa e aguarda digitar qualquer tecla.

	int opescolhida = menu(); //chama a fun��o menu e adiciona o return dela na variavel opescolhida.
	
	int opmenu = abriropcaoescolhida(opescolhida);
	
	while(opmenu){
		system("pause");
		system("cls");
		opescolhida = menu();
		opmenu = abriropcaoescolhida(opescolhida);
	}	
	
		
		

		
		
		
	
	
	
	return 0;
}
