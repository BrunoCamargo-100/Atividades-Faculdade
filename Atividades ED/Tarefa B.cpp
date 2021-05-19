/*Calculadora

Faça um programa que leia dois números e realize uma das quatro operações básicas (soma, subtração, multiplicação ou divisão).

O programa deve:

realizar operações até que o usuário informe que deseja sair;
permitir que o usuário visualize as 10 últimas operações realizadas com seus respectivos resultados;
os operadores, operação e resultado devem ser armazenadas em uma variável do tipo struct;
o histórico deve ser armazenado em um vetor.*/

#include <iostream>
#include <stdlib.h>
#include <queue>

using namespace std;

//fazendo a struct
typedef struct operadores{
    string operadores;
    float n1;
    float n2;
    float resultado;
}operadores;

// fazendo uma queue
queue <float> n1;
queue <float> n2;
queue <float> resultado;

int main(){
    //declarando variaveis para uso
    int op,i=0; 
    bool rodando=true;

    //iniciando a struct
    operadores oper[1000];

    while(rodando){
        //menu do usuario
        system("cls");
    
        cout << "[1] - Adição" << endl;
        cout << "[2] - Subtração" << endl;
        cout << "[3] - Multiplicação" << endl;
        cout << "[4] - Divisão" << endl;
        cout << "[5] - Historico de operações" << endl;
        cout << "[6] - Sair" << endl;
        cin >> op;

        if(op == 1){
            // fazendo conta de adição
            system("cls");
            if(i > 10){
                n1.pop();
                n2.pop();
                resultado.pop();  
            }
                
            cout << "Digite o primeiro número: ";
            cin >> oper[i].n1;
            cout << "Digite o segundo número: ";
            cin >> oper[i].n2;
            oper[i].resultado = oper[i].n1 + oper[i].n2;
            cout << "A soma entre " << oper[i].n1 << "+" << oper[i].n2 << "=" << oper[i].resultado << endl;        
            oper[i].operadores = " + ";

            n1.push(oper[i].n1);
            n2.push(oper[i].n2);
            resultado.push(oper[i].resultado);
            i++;
            system("pause");
                            
        }
             
        if(op == 2){
            // fazendo conta de adição
            system("cls");
            if(i>10){
                n1.pop();
                n2.pop();
                resultado.pop();  
            }
                
            cout << "Digite o primeiro número: ";
            cin >> oper[i].n1;
            cout << "Digite o segundo número: ";
            cin >> oper[i].n2;
            oper[i].resultado = oper[i].n1 - oper[i].n2;
            cout << "A soma entre " << oper[i].n1 << "-" << oper[i].n2 << "=" << oper[i].resultado << endl;        
            oper[i].operadores == "-";

            n1.push(oper[i].n1);
            n2.push(oper[i].n2);
            resultado.push(oper[i].resultado);
            i++;
            system("pause");

        }
        if(op == 3){
            // fazendo conta de adição
            system("cls");
            if(i>10){
                n1.pop();
                n2.pop();
                resultado.pop();  
            }
                
            cout << "Digite o primeiro número: ";
            cin >> oper[i].n1;
            cout << "Digite o segundo número: ";
            cin >> oper[i].n2;
            oper[i].resultado = oper[i].n1 * oper[i].n2;
            cout << "A soma entre " << oper[i].n1 << "*" << oper[i].n2 << "=" << oper[i].resultado << endl;        
            oper[i].operadores == "*";

            n1.push(oper[i].n1);
            n2.push(oper[i].n2);
            resultado.push(oper[i].resultado);
            i++;
            system("pause");

        }
        if(op == 4){
            // fazendo conta de adição
            system("cls");
            if(i>10){
                n1.pop();
                n2.pop();
                resultado.pop();  
            }
                
            cout << "Digite o primeiro número: ";
            cin >> oper[i].n1;
            while(oper[i].n2 == 0){
                cout << "Digite o segundo número: ";
                cin >> oper[i].n2;
            }
            oper[i].resultado = oper[i].n1 / oper[i].n2;
            cout << "A soma entre " << oper[i].n1 << "/" << oper[i].n2 << "=" << oper[i].resultado << endl;        
            oper[i].operadores == "/";

            n1.push(oper[i].n1);
            n2.push(oper[i].n2);
            resultado.push(oper[i].resultado);
            i++;
            system("pause");

        }
        if(op == 5){
            // mostrando o historico de resultados

            system("cls");
           while(!resultado.empty()){
               cout << n1.front() << oper[i].operadores << n2.front() << " = " << resultado.front();
               cout << endl;
               n1.pop();
               n2.pop();
               resultado.pop();
           }
          system("pause");
        }
          

        if(op == 6){
            // encerrando o programa
            rodando = false;
        }
    }
}