// Cadastrar pessoa na agenda de aniversariantes (nome, e-mail, dia, mês e ano de nascimento)
// Excluir a pessoa a partir do nome
// Alterar dia, mês ou ano a partir do nome
// Consultar aniversariantes de uma data
// Consultar aniversariantes de um dado mês
// Consultar aniversariantes pela letra inicial do nome
// Mostrar toda a agenda ordenada pelo nome
// Mostrar toda a agenda ordenada pelo mês
// Sair
// A agenda deve ser capaz de armazenar 1000 pessoas

#include <iostream>
#include <stdlib.h>

#define MAX 1000
using namespace std;

//Tipo de Armazenamento
typedef struct Agenda{
    string nome;
    string email;
    int dia;
    int mes;
    int ano;
}Agenda;

//Iniciando agenda
Agenda MinhaAgenda[MAX];

int main(){
   //declarações de variaveis
    int op, i=0; 
    long qtd = 0;
    bool rodando = true;

    while(rodando){
    //Menu 
    system("cls");

        cout << "                        AGENDA                                 \n";
        cout << "Para cadastra, digite:                                  [1]    \n";
        cout << "Para excluir, digite:                                   [2]    \n";
        cout << "Para alterar dados, digite:                             [3]    \n";
        cout << "Para consultar uma dia, digite:                         [4]    \n";
        cout << "Para consultar um mes, digite:                          [5]    \n";
        cout << "Para consultar cadastrados pela letra inicial do nome:  [6]    \n";
        cout << "Para mostrar a agenda ordenada pelo nome, digite        [7]    \n";
        cout << "Para mostrar toda a agenda ordenada pelo mes, digite    [8]    \n";
        cout << "Para sair, digite                                       [9]    \n";
        cout << "Quantidade de pessoas cadastrada = " << qtd << endl;
        cout << "Digite sua opção: ";
        cin >> op;
        

     if(op == 1){
        system("cls");
        //Agendando contatos 
        if(qtd < MAX && MinhaAgenda[qtd].nome == ""){
            
            cout << "Digite o nome: ";
            cin >> MinhaAgenda[qtd].nome;
            cout << "Digite o e-mail: ";
            cin >> MinhaAgenda[qtd].email;
            cout << "Digite o dia de nascimento: ";
            cin >> MinhaAgenda[qtd].dia;
            cout << "Digite o mês de nascimento: ";
            cin >> MinhaAgenda[qtd].mes;
            cout << "Digite o ano do nasimento: ";
            cin >> MinhaAgenda[qtd].ano;
            
            qtd++;
        }         
        else{
            cout << "Agenda Cheia !!!";
        }
     }

     if(op == 2){
         system("cls");
         //Excluindo pessoas da agenda
         
         string nomepesq;
         cout << "Digite o nome da pessoa: ";
         cin >> nomepesq;
         
         for(i=0;i < MAX;i++){
             if(nomepesq == MinhaAgenda[i].nome){
                 MinhaAgenda[i].nome = "";
                 qtd--;
             }
         }
     }

     if(op == 3){
         //Alterar a data de aniversario do cadastrado
        system("cls");

         string nomepesq;
         cout << "Digite o nome: ";
         cin >> nomepesq;

         for(i=0;i < MAX;i++){
             if(nomepesq == MinhaAgenda[i].nome){
                 cout << "Digite o dia de nascimento: ";
                 cin >> MinhaAgenda[i].dia;
                 cout << "Digite o mes de nascimento: ";
                 cin >> MinhaAgenda[i].mes;
                 cout << "Digite o ano de nascimento: ";
                 cin >> MinhaAgenda[i].ano;
                 cout << endl;
             }
         }
     }

     if(op == 4){
         // consultar um aniversariante através de um dia
         system("cls");
         int data;

         cout << "Digite o dia do aniversariante: ";
         cin >> data;

         for(i=0;i<MAX;i++){
             if(data == MinhaAgenda[i].dia){
                 cout << "Nome: " << MinhaAgenda[i].nome << endl;
                 cout << "Email: " << MinhaAgenda[i].email << endl;
                 cout << "Dia: " << MinhaAgenda[i].dia << endl;
                 cout << "Mes: " << MinhaAgenda[i].mes << endl;
                 cout << "Ano: " << MinhaAgenda[i].ano << endl;
                 cout << endl << endl ;
             }
             system("pause");  
         }
     }

     if(op == 5){
         //mostrando agenda através de um mes
         system("cls");
         int data;

         cout << "Digite o mês do aniversariante: ";
         cin >> data;

         for(i=0;i<MAX;i++){
             if(data == MinhaAgenda[i].mes){
                 cout << "Nome: " << MinhaAgenda[i].nome << endl;
                 cout << "Email: " << MinhaAgenda[i].email << endl;
                 cout << "Dia: " << MinhaAgenda[i].dia << endl;
                 cout << "Mes: " << MinhaAgenda[i].mes << endl;
                 cout << "Ano: " << MinhaAgenda[i].ano << endl;
                 cout << endl << endl ;
             }
         }
            system("pause");

     }
     if(op == 6){
         // consultar aniversariantes pela letra inicial do nome
        system("cls");
         char letra;
         
         cout << "Digite a primeira letra do cadastrado: ";
         cin >> letra;

         for(i=0;i<MAX;i++){
             if(letra == MinhaAgenda[i].nome[0]){
                 cout << "Nome: " << MinhaAgenda[i].nome << endl;
                 cout << "Email: " << MinhaAgenda[i].email << endl;
                 cout << "Dia: " << MinhaAgenda[i].dia << endl;
                 cout << "Mes: " << MinhaAgenda[i].mes << endl;
                 cout << "Ano: " << MinhaAgenda[i].ano << endl;
                 cout << endl << endl ; 
             }
         }
        system("pause");
     }

     if(op == 7){
         //Mostrar toda a agenda ordenada pelo nome
        system("cls");
        for(i=0;i<=qtd;i++){
            cout << "Nome: " << MinhaAgenda[i].nome << endl;
            cout << "Email: " << MinhaAgenda[i].email << endl;
            cout << "Nascimento: " << MinhaAgenda[i].dia << "/" << MinhaAgenda[i].mes << "/" << MinhaAgenda[i].ano << endl;
            cout << endl << endl ; 
            
        }
        system("pause");

     }
     if(op == 8){
          //Mostrar toda a agenda ordenada pelo nome
        system("cls");
        for(i=1;i<=12;i++){
            if(MinhaAgenda[i].mes==i){
            cout << "Mês: " << i << endl;
            cout << "Nome: " << MinhaAgenda[i].nome << endl;
            cout << "Email: " << MinhaAgenda[i].email << endl;
            cout << "Nascimento: " << MinhaAgenda[i].dia << "/" << MinhaAgenda[i].mes << "/" << MinhaAgenda[i].ano << endl;
            cout << endl << endl ; 
            }
        }
        system("pause");

     }
     if(op == 9){
         // encerrando o programa
         rodando = false;
     }
    }
    
    return 0;
}
