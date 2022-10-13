#include <stdio.h>
#include <iostream>
using namespace std;

typedef struct aluno{
	int mat;
	string nome;	
}Aluno; 

Aluno turma[30];

int qtd=0; 
int maximo=30;

int inserir(){
	int cont;
	cout << "Inserir novo aluno \n";	
	
	do{
		if(qtd < maximo){
			cout << "\nMatricula do aluno: ";
			cin >> turma[qtd].mat;
			cout << "Nome do aluno: ";
			cin >> turma[qtd].nome;
			qtd++;
		}
		
		else{
			cout << "\nturma cheia!!" << endl;
			break;
		}
		
		cout << "\nInserir outro? (1- Sim; 2- Nao)";
		cin >> cont;
	} while (cont == 1);
	
	return qtd;
}

//retorna a posicao do elemento procurado
int procura(){	
	int matProcurada; int pos; int i; int cont;
	cout << "\nQual matricula deseja encontrar? ";
	cin >> matProcurada;
	
	for(i=0; i<maximo; i++){
		if(turma[i].mat == matProcurada){
			pos = i;
			break;
		}
		else{
			pos = -1;
		}
	}
	
	if(pos==-1){
		cout << "Matricula nao encontrada! \n";
	} else{
		cout << "A matricula esta na posicao " << pos << endl ;
	}
	
	return pos;
}	


//recebe a posicao e imprime o elemento na tela
void mostrar(){
	int posProcurada;
	
	cout << "\nPosicao procurada: ";
	cin >> posProcurada;
	
	if(turma[posProcurada].mat != NULL){
		cout << "Matricula: " << turma[posProcurada].mat;
	    cout << " Aluno(a): " << turma[posProcurada].nome;
	} else {
		cout << "A posicao informada nao esta preenchida! \n";
	}
}

//procura o elemento e depois mostra o elemento encontrado (se nao for encontrado informa q ele nao existe)
void consultar(){	
	int eleProcurado; int pos = 0;
	
	cout << "\nElemento procurado: ";
	cin >> eleProcurado;
	
	for(int i=0; i<maximo; i++){
		if(turma[i].mat == eleProcurado){
			cout << "Matricula: "<< turma[i].mat;
			cout << " Aluno(a): " << turma[i].nome;
			break;
		}
		else{
			int pos = -1;
		}
	}
	
	if(pos == -1){
		cout << "\nMatricula nao encontrada";
	}
}

//estratégia 1: colocar o ultimo elemento da lista na posição do elemento removido
void remover00(){
	int matRemovida; int pos = 0;
	
	cout << "\nQual matricula deseja remover? ";
	cin >> matRemovida;
	
	for(int i = 0; i < qtd; i++){
		if(turma[i].mat == matRemovida){
			turma[i].mat = turma[qtd-1].mat;
			turma[i].nome = turma[qtd-1].nome;
			qtd -= 1;
			break;
		}else{
			pos = -1;
		}
	}
	
	if(pos == -1){
		cout << "\nMatricula nao encontrada";
	}
}

//estratégia 2: mover TODOS os elementos que estão APÓS  o elemento que deve ser removido UMA POSIÇÃO A FRENTE.
void remover01(){
	int matRemovida, pos;
	
	cout << "\nQual matricula deseja remover? ";
	cin >> matRemovida;
	
	for(int i=0; i<qtd; i++){
		if(turma[i].mat == matRemovida){
			for(i; i<qtd; i++){
				turma[i] = turma[i+1];
			}
			qtd -= 1;
			break;
		}else{
			int pos = -1;
		}
	}
	
	if(pos == -1){
		cout << "\nMatricula nao encontrada";
	}
}

main(){
	inserir();  
	procura();
	mostrar();
	consultar();
	remover00();
	remover01();
}
