#include <iostream>
#include <string.h>
#include <locale>

using namespace std;

int menu(){//criado função menu
	system("cls");
	cout <<"Digite o numero da opção que deseja entrar: "<<endl;
	cout <<"1 - Resumo. "<<endl;
	cout <<"2 - Informações Pessoais."<<endl;
	cout <<"3 - Formação academica. "<<endl;
	cout <<"4 - Experiencias. "<<endl;
	cout <<"5 - Habilidades e competencias "<<endl;
	cout <<"Opção: ";
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
		cout<<"Mais de 10 anos atuando na área de Ti, tenho ótimos conhecimentos em diversas áreas da Ti, Infraestrutura e Data"<<endl;
		cout<<"Center, suporte técnico, segurança da informação, Banco de dados (SQL e MySQL), sistemas WEB (HTML, CSS, JS,"<<endl;
		cout<<"PHP), Mobile e Desktop (C#, Python, Java), Cloud, Devops. Rápida aprendizagem, ótimo raciocínio lógico,"<<endl;
		cout<<"velocidade em solucionar problemas (Troubleshooting), buscando sempre evoluir meus conhecimentos."<<endl;
		cout<<"GIT: https://github.com/DouglasLourenze"<<endl;
		cout<<"  "<<endl;
		cout<<"Digite qualquer botão para reiniciar."<<endl;
		break;
	
	case 2:
		system("cls");
		cout<<"Informações Pessoais"<<endl;
		cout<<"Endereço: Rua Vinte de Setembro, 746, Gravataí, RS"<<endl;
		cout<<"Celula: (51) 98651-3912 "<<endl;
		cout<<"Email: Douglas-zas@hotmail.com"<<endl;
		cout<<"Data de nascimento: 30/10/1995"<<endl;
		cout<<"Brasileiro – Solteiro"<<endl;
		cout<<"  "<<endl;
		cout<<"Digite qualquer botão para reiniciar."<<endl;
		break;
	case 3:
		system("cls");
		cout<<"Formação"<<endl;
		cout<<"- Superior Técnologo | Analise e desenvolvimento de sistemas | Estácio sa"<<endl;
		cout<<"- Superior Bacharelado| Trancado no 5º semestre | ULBRA – Gravataí"<<endl;
		cout<<"- Técnico | Concluído 2016 | QI"<<endl;
		cout<<"- Ensino médio | Concluído em 2014 | E.M.E.M Santa Rita de Cássia"<<endl;
		cout<<"  "<<endl;
		cout<<"Digite qualquer botão para reiniciar."<<endl;
		break;
	case 4:
		system("cls");
		cout<<"Experiencias"<<endl;
		cout<<"- ANALISTA DE SUPORTE E INFRAESTRUTURA PJ | SELETTUS TECNOLOGIA | ABRIL 2021 – ATUAL -"<<endl;
		cout<<"° Funções: Infraestrutura · Suporte ao usuário remoto · Active Directory · Administração de servidores ·"<<endl;
		cout<<"Office365 · Segurança da informação · Suporte técnico · Microsoft Windows · Linux · Rede de computadores ·Microsoft Office"<<endl;
		cout<<"  "<<endl;
		cout<<"- ASSISTENTE DE TI | CENTRAL DE CONSULTAS | DEZ DE 2019 – AGO DE 2020 -"<<endl;
		cout<<"° Funções: administrava toda ti, era responsavel por toda infraestrutura de ti de 13 unidades de clinicas,"<<endl;
		cout<<"gerenciava o financeiro da ti, chamados tecnicos, backups, monitoramento, telefonia, servidores e sistemas."<<endl;
		cout<<"  "<<endl;	
		cout<<"- ASSISTENTE DE SEGURANÇA DA INFORMAÇÃO | SABEMI TEC | SET 2018 – AGO 2019 -"<<endl;
		cout<<"° Funções: Administração de acessos a sistemas próprios e sistemas terceiros, administração de usuários, "<<endl;
		cout<<"controle e elaboração de documentos de perfil para auditoria, Active Directory ,atendimento e análise de"<<endl;
		cout<<"requisições e incidentes, abertura e execução de mudanças, logs de firewall(CheckPoint), regras de firewall,"<<endl;
		cout<<"monitoramento(Zabbix, Grafana), Abrir e administrar chamados para as áreas responsáveis(requisições, ações"<<endl;
		cout<<"e incidentes), monitoramento de servidores, ameaças, Link, VPN, serviços. administrar redes wireless(Fortinet),"<<endl;
		cout<<"Administrar Anti vírus(Kaspersky-Advanced), Linux(CentOs7), Exchange, reunião com fornecedores, análise de "<<endl;
		cout<<"novas soluções, análise de vulnerabilidades e falhas de segurança, conhecimento em rede, VMware, VirtualBox,"<<endl;
		cout<<"suporte remoto, suporte ao setor de suporte, análise de problemas de sistemas e de negócio, VPN."<<endl;
		cout<<"  "<<endl;
		cout<<"- ESTAGIÁRIO DE INFRAESTRUTURA DE TI | SABEMI TEC | AGO DE 2017 – AGO DE 2018 -"<<endl;
		cout<<"° Funções: Controle de planilhas, configurar aparelhos celulares corporativos, preparo de servidor linux para as"<<endl;
		cout<<"filiais, atendimento de requisições via sistema de chamados, Active Directory, Exchange, assinatura de email,"<<endl;
		cout<<"preparo e organização de fitas para backups, Restore, Organizar e instalar equipamentos em datacenter."<<endl;
		cout<<"  "<<endl;
		cout<<"Digite qualquer botão para reiniciar."<<endl;
		break;
	case 5:
		system("cls");
		cout<<"Habilidades e competências"<<endl;
		cout<<"- Pró ativo, pontual, capacidade de planejamento e organização, ótimo raciocínio lógico, agilidade e facilidade em"<<endl;
		cout<<"aprender, seriedade, comprometimento, buscar desenvolvimento pessoal, facilidade de comunicação, espírito"<<endl;
		cout<<"de equipe, Paixão por tecnologia, gerenciar processos e solucionar problemas, capasidade análitica."<<endl;
		cout<<"  "<<endl;
		cout<<"Digite qualquer botão para reiniciar."<<endl;
		break;
	}
}	
else{
	cout<<"opção invalida!!!!!!!!!!!!"<<endl;
	cout<<"Digite qualquer botão para reiniciar."<<endl;
	return 1;
}

}

int main(){
	setlocale( LC_ALL, "" );//com o include de locale, esse metodo deixa aplicar acentos e caracteres especiais ao código.
	
	cout <<"Bem vindo ao meu curriculo!!"<< endl;
	cout <<"Aperte qualquer tecla para ver as opções de menu: ";
	
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
