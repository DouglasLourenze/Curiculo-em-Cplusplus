#include <iostream>
#include <string.h>
#include <locale>

using namespace std;

int menu(){//criado função menu
	system("cls");
	cout <<"Digite o numero da opção que deseja entrar: \n1 - Resumo. \n2 - Informações Pessoais.\n3 - Formação academica. \n4 - Experiencias. \n5 - Habilidades e competencias \nOpção: "<<endl;
	int escolha;
	cin >> escolha;
	return escolha;
}

int abriropcaoescolhida(int opescolhida){
	
 if(opescolhida <= 5){

	switch (opescolhida){
	
	case 1:
		system("cls");
		cout<<"RESUMO\nMais de 10 anos atuando na área de Ti, tenho ótimos conhecimentos em diversas áreas da Ti, Infraestrutura e Data \nCenter, suporte técnico, segurança da informação, Banco de dados (SQL e MySQL), sistemas WEB (HTML, CSS, JS,\nPHP), Mobile e Desktop (C#, Python, Java), Cloud, Devops. Rápida aprendizagem, ótimo raciocínio lógico,\nvelocidade em solucionar problemas (Troubleshooting), buscando sempre evoluir meus conhecimentos.\nGIT: https://github.com/DouglasLourenze\n\nDigite qualquer botão para reiniciar."<<endl;
		break;
	
	case 2:
		system("cls");
		cout<<"Informações Pessoais\nEndereço: Rua Vinte de Setembro, 746, Gravataí, RS\nCelula: (51) 98651-3912\nEmail: Douglas-zas@hotmail.com\nData de nascimento: 30/10/1995\nBrasileiro – Solteiro\n\nDigite qualquer botão para reiniciar."<<endl;
		break;
	case 3:
		system("cls");
		cout<<"Formação\n- Superior Técnologo | Analise e desenvolvimento de sistemas | Estácio sa\n- Superior Bacharelado| Trancado no 5º semestre | ULBRA – Gravataí\n- Técnico | Concluído 2016 | QI\n- Ensino médio | Concluído em 2014 | E.M.E.M Santa Rita de Cássia\n\nDigite qualquer botão para reiniciar."<<endl;
		break;
	case 4:
		system("cls");
		cout<<"Experiencias"<<endl;
		cout<<"- ANALISTA DE SUPORTE E INFRAESTRUTURA PJ | SELETTUS TECNOLOGIA | ABRIL 2021 – ATUAL -\n° Funções: Infraestrutura · Suporte ao usuário remoto · Active Directory · Administração de servidores ·\nOffice365 · Segurança da informação · Suporte técnico · Microsoft Windows \n· Linux · Rede de computadores ·Microsoft Office\n"<<endl;
		cout<<"- ASSISTENTE DE TI | CENTRAL DE CONSULTAS | DEZ DE 2019 – AGO DE 2020 -\n° Funções: administrava toda ti, era responsavel por toda infraestrutura de ti de 13 unidades de clinicas,\ngerenciava o financeiro da ti, chamados tecnicos, backups, monitoramento, telefonia, servidores e sistemas.\n"<<endl;
		cout<<"- ASSISTENTE DE SEGURANÇA DA INFORMAÇÃO | SABEMI TEC | SET 2018 – AGO 2019 -\n° Funções: Administração de acessos a sistemas próprios e sistemas terceiros, administração de usuários, \ncontrole e elaboração de documentos de perfil para auditoria, Active Directory ,atendimento e análise de\nrequisições e incidentes, abertura e execução de mudanças, logs de firewall(CheckPoint), regras de firewall,\nmonitoramento(Zabbix, Grafana), Abrir e administrar chamados para as áreas responsáveis(requisições, ações\ne incidentes), monitoramento de servidores, ameaças, Link, VPN, serviços. administrar redes wireless(Fortinet),\nAdministrar Anti vírus(Kaspersky-Advanced), Linux(CentOs7), Exchange, reunião com fornecedores, análise de \nnovas soluções, análise de vulnerabilidades e falhas de segurança, conhecimento em rede, VMware, VirtualBox,\nsuporte remoto, suporte ao setor de suporte, análise de problemas de sistemas e de negócio, VPN.\n"<<endl;
		cout<<"- ESTAGIÁRIO DE INFRAESTRUTURA DE TI | SABEMI TEC | AGO DE 2017 – AGO DE 2018 -\n° Funções: Controle de planilhas, configurar aparelhos celulares corporativos, preparo de servidor linux para as\nfiliais, atendimento de requisições via sistema de chamados, Active Directory, Exchange, assinatura de email,\npreparo e organização de fitas para backups, Restore, Organizar e instalar equipamentos em datacenter.\n"<<endl;
		cout<<"Digite qualquer botão para reiniciar."<<endl;
		break;
	case 5:
		system("cls");
		cout<<"Habilidades e competências\n- Pró ativo, pontual, capacidade de planejamento e organização, ótimo raciocínio lógico, agilidade e facilidade em\naprender, seriedade, comprometimento, buscar desenvolvimento pessoal, facilidade de comunicação, espírito\nde equipe, Paixão por tecnologia, gerenciar processos e solucionar problemas, capasidade análitica.\n\nDigite qualquer botão para reiniciar."<<endl;
		break;
	}
}	
else{
	cout<<"opção invalida!!!!!!!!!!!!\nDigite qualquer botão para reiniciar."<<endl;
	return 1;
}

}

int main(){
	setlocale( LC_ALL, "" );//com o include de locale, esse metodo deixa aplicar acentos e caracteres especiais ao código.
	
	cout <<"Bem vindo ao meu curriculo!!\nAperte qualquer tecla para ver as opções de menu: "<< endl;
	
	getchar();// pausa e aguarda digitar qualquer tecla.

	int opescolhida = menu(); //chama a função menu e adiciona o return dela na variavel opescolhida.
	
	int opmenu = abriropcaoescolhida(opescolhida);
	
	while(opmenu){
		system("pause");
		system("cls");
		opescolhida = menu();
		opmenu = abriropcaoescolhida(opescolhida);
	}	
	
		
		

		
		
		
	
	
	
	return 0;
}
