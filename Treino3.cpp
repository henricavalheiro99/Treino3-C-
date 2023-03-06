#include <iostream>

using namespace std;

main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	string nome[200];
	int andar[200];
	string op;
	int i;
	int ap;
	
	 nome[0] = "João";
	 andar[0] = 1;
	 
	 nome[1] = "Maria";
	 andar[1] = 2;
	 
	 nome[2] = "Pedro";
	 andar[2] = 3;
	 
	 nome[3] = "Ana";
	 andar[3] = 4;
	 
	 nome[4] ="Carlos";
	 andar[4] = 5;

	 nome[5] ="Henri";
	 andar[5] = 6;
	 
	 nome[6] = "Igor";
	 andar [6] =7;
	 
	 nome[7] = "Marcelo";
	 andar [7] = 8;
	 
	  nome[8] = "Nicolas";
	 andar [8] = 9;
	 
	  nome[9] = "Miguel";
	 andar [9] = 10;
	 
	  nome[10] = "Murilo";
	 andar [10] = 11;
	 
	 
	cout <<"Qual o seu nome?(responder com a primeira letra maiúscula): ";
	cin >> op;
	
	for(i=0; i<200; i++){
		if (nome[i] == op ){
			break;
		}
		
	}
	
	
	cout <<"Qual andar deseja ir?: ";
	cin >> ap;
	
	if(ap == 2 || ap == 4 || ap == 6 || ap == 8 || ap == 10){
		
		if(andar[i]==ap){
			cout <<"Acesso permitido";
			
		}else{
			cout <<"Acesso negado"; 
		}	
		
	}else{
		cout <<"Acesso permitido";
	}
	
}
		
