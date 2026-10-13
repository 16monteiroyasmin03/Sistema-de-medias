#include <stdio.h>
#include <string.h>

float objetiva, dissertativa, at, prova, projeto;
float media_2prova, media_1prova, media_projeto, media_at;
float bonus_simulado;
float resultado, recuperar, acima;
char materia [50];

float duas_provas (float dissertativa, float objetiva, float at, float bonus_simulado){
	
    float media_2prova;
    float media_at;

    media_2prova = ((dissertativa + objetiva) * 0.8) / 2;
    media_at = at * 0.2;

    return media_2prova + media_at + bonus_simulado;
}

float uma_prova (float prova, float at, float bonus_simulado){
	float media_1prova;
	 media_1prova = (prova + at) / 2;
	 return media_1prova+bonus_simulado;
}

float projeto (float projeto, float at){
	float media_projeto;
	media_projeto = (projeto+at)/2;
	return media_projeto;
}

int main (){
    printf ("Sistema de calculo de medias da UNIVAP");
    printf ("\nQual e a materia que deseja calcular a media: ");
    gets (materia);
    printf ("\nMateria: %s", materia);
    
    printf ("\n\nDigite a nota da sua avaliacao DISSERTATIVA de %s: ", materia);
    scanf ("%f", &dissertativa);
       printf ("\nNota da avaliacao dissertativa: %.1f", dissertativa);
       
    printf ("\n\nDigite a nota da sua avaliacao OBJETIVA de %s: ", materia);
     scanf ("%f", &objetiva);
        printf ("\nNota da avaliacao objetiva: %.1f", objetiva);
        
    printf ("\n\nDigite a sua nota de AT (atividades) de %s: ", materia);
    	scanf ("%f", &at);
       		printf ("\nNota de AT: %.1f", at);
       
	printf ("\n\nDigite o seu bonus do simulado (se nao tiver feito digite 0): ");
		scanf ("%f", &bonus_simulado);
		printf ("\nBonus do simulado: %.1f", bonus_simulado);

        resultado = duas_provas (dissertativa, objetiva, at, bonus_simulado);

    printf ("\n\nA sua media na materia de %s e %.1f ", materia, resultado);

    if (resultado < 6){

        recuperar = 6 - resultado;
        printf ("\n\nVoce ficou abaixo da media, precisa recuperar %.1f pontos!", recuperar);
    }
    else {
        acima = resultado - 6;
        printf ("\nVoce ficou com %.1f pontos acima da media! Continue assim :)", acima);
    }

    return 0;

    }