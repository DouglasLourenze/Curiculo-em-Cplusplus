#include <iostream>
#include <string.h>
#include <locale>

using namespace std;

int menu(){//criado fun��o menu
	system("cls");
	cout <<"Digite o numero da op��o que deseja entrar: \n1 - Resumo. \n2 - Informa��es Pessoais.\n3 - Forma��o academica. \n4 - Experiencias. \n5 - Habilidades e competencias \nOp��o: "<<endl;
	int escolha;
	cin >> escolha;
	return escolha;
}

int abriropcaoescolhida(int opescolhida){
	
 if(opescolhida <= 5){

	switch (opescolhida){
	
	case 1:
		system("cls");
		cout<<"RESUMO\nMais de 10 anos atuando na �rea de Ti, tenho �timos conhecimentos em diversas �reas da Ti, Infraestrutura e Data \nCenter, suporte t�cnico, seguran�a da informa��o, Banco de dados (SQL e MySQL), sistemas WEB (HTML, CSS, JS,\nPHP), Mobile e Desktop (C#, Python, Java), Cloud, Devops. R�pida aprendizagem, �timo racioc�nio l�gico,\nvelocidade em solucionar problemas (Troubleshooting), buscando sempre evoluir meus conhecimentos.\nGIT: https://github.com/DouglasLourenze\n\nDigite qualquer bot�o para reiniciar."<<endl;
		break;
	
	case 2:
		system("cls");
		cout<<"Informa��es Pessoais\nEndere�o: Rua Vinte de Setembro, 746, Gravata�, RS\nCelula: (51) 98651-3912\nEmail: Douglas-zas@hotmail.com\nData de nascimento: 30/10/1995\nBrasileiro � Solteiro\n\nDigite qualquer bot�o para reiniciar."<<endl;
		break;
	case 3:
		system("cls");
		cout<<"Forma��o\n- Superior T�cnologo | Analise e desenvolvimento de sistemas | Est�cio sa\n- Superior Bacharelado| Trancado no 5� semestre | ULBRA � Gravata�\n- T�cnico | Conclu�do 2016 | QI\n- Ensino m�dio | Conclu�do em 2014 | E.M.E.M Santa Rita de C�ssia\n\nDigite qualquer bot�o para reiniciar."<<endl;
		break;
	case 4:
		system("cls");
		cout<<"Experiencias"<<endl;
		cout<<"- ANALISTA DE SUPORTE E INFRAESTRUTURA PJ | SELETTUS TECNOLOGIA | ABRIL 2021 � ATUAL -\n� Fun��es: Infraestrutura � Suporte ao usu�rio remoto � Active Directory � Administra��o de servidores �\nOffice365 � Seguran�a da informa��o � Suporte t�cnico � Microsoft Windows \n� Linux � Rede de computadores �Microsoft Office\n"<<endl;
		cout<<"- ASSISTENTE DE TI | CENTRAL DE CONSULTAS | DEZ DE 2019 � AGO DE 2020 -\n� Fun��es: administrava toda ti, era responsavel por toda infraestrutura de ti de 13 unidades de clinicas,\ngerenciava o financeiro da ti, chamados tecnicos, backups, monitoramento, telefonia, servidores e sistemas.\n"<<endl;
		cout<<"- ASSISTENTE DE SEGURAN�A DA INFORMA��O | SABEMI TEC | SET 2018 � AGO 2019 -\n� Fun��es: Administra��o de acessos a sistemas pr�prios e sistemas terceiros, administra��o de usu�rios, \ncontrole e elabora��o de documentos de perfil para auditoria, Active Directory ,atendimento e an�lise de\nrequisi��es e incidentes, abertura e execu��o de mudan�as, logs de firewall(CheckPoint), regras de firewall,\nmonitoramento(Zabbix, Grafana), Abrir e administrar chamados para as �reas respons�veis(requisi��es, a��es\ne incidentes), monitoramento de servidores, amea�as, Link, VPN, servi�os. administrar redes wireless(Fortinet),\nAdministrar Anti v�rus(Kaspersky-Advanced), Linux(CentOs7), Exchange, reuni�o com fornecedores, an�lise de \nnovas solu��es, an�lise de vulnerabilidades e falhas de seguran�a, conhecimento em rede, VMware, VirtualBox,\nsuporte remoto, suporte ao setor de suporte, an�lise de problemas de sistemas e de neg�cio, VPN.\n"<<endl;
		cout<<"- ESTAGI�RIO DE INFRAESTRUTURA DE TI | SABEMI TEC | AGO DE 2017 � AGO DE 2018 -\n� Fun��es: Controle de planilhas, configurar aparelhos celulares corporativos, preparo de servidor linux para as\nfiliais, atendimento de requisi��es via sistema de chamados, Active Directory, Exchange, assinatura de email,\npreparo e organiza��o de fitas para backups, Restore, Organizar e instalar equipamentos em datacenter.\n"<<endl;
		cout<<"Digite qualquer bot�o para reiniciar."<<endl;
		break;
	case 5:
		system("cls");
		cout<<"Habilidades e compet�ncias\n- Pr� ativo, pontual, capacidade de planejamento e organiza��o, �timo racioc�nio l�gico, agilidade e facilidade em\naprender, seriedade, comprometimento, buscar desenvolvimento pessoal, facilidade de comunica��o, esp�rito\nde equipe, Paix�o por tecnologia, gerenciar processos e solucionar problemas, capasidade an�litica.\n\nDigite qualquer bot�o para reiniciar."<<endl;
		break;
	}
}	
else{
	cout<<"op��o invalida!!!!!!!!!!!!\nDigite qualquer bot�o para reiniciar."<<endl;
	return 1;
}

}

int main(){
	setlocale( LC_ALL, "" );//com o include de locale, esse metodo deixa aplicar acentos e caracteres especiais ao c�digo.
	
	cout <<"Bem vindo ao meu curriculo!!\nAperte qualquer tecla para ver as op��es de menu: "<< endl;
	
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
