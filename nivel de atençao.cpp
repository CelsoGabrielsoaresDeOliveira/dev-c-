#include <stdio.h>
#include <stdlib.h>
int main(){
	float media,nota1;
	float nota2;
	int alunos;
	printf("quantos alunos tem na sala:?\n");
	scanf("d",&alunos);

	
	printf("qual a nota1 do aluno:?\n");
	scanf("%f",&nota1);
		printf("qual a nota2 do aluno:?\n");
	scanf("%f",&nota2);

	media=(nota1+nota2)/2.0;
	if(media>=7){
		printf("o nivel de aten�ao dos alunos esta na media! %.2f",media);
	}
	else if(media>=5){
		printf("o nivel de aten�ao da turma esta regular!%.2f",media);
		
	}
	else{
		printf("A tuma est� em um n�vel de aten��o %.2f", media);
	}
	system("pause");
	
	
	
	
	
}
