#include <stdio.h>
#include <string.h>

float objetiva, dissertativa, at, prova, projeto, prova_pratica;
float media_2prova, media_1prova, media_projeto, media_at, media_prova_pratica;
float bonus_simulado;
float resultado, recuperar, acima;
char materia [50];
char novamente;

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

float atividades (float projeto, float at){
	float media_projeto;
	media_projeto = (projeto+at)/2;
	return media_projeto;
}

float provapratica (float prova_pratica, float at){
	float media_prova_pratica;
	media_prova_pratica = (prova_pratica+at)/2;
	return media_prova_pratica;
}

int main (){
	int materia_valida;
	
	do{
		do {
	
    printf ("Sistema de calculo de medias da UNIVAP");
    printf ("\nQual e a materia que deseja calcular a media: ");
    scanf(" %[^\n]", materia);
    printf ("\nMateria: %s", materia);
    
    if (strcmp(materia, "Matematica") == 0 || strcmp(materia, "matematica") == 0 || 
    strcmp(materia, "Geografia") == 0 || strcmp(materia, "geografia") == 0 ||
    strcmp(materia, "Gramatica") == 0 || strcmp(materia, "gramatica") == 0 ||
    strcmp(materia, "Quimica FGB") == 0 || strcmp(materia, "Quimica fgb") == 0 || strcmp(materia, "quimica FGB") == 0 || strcmp(materia, "quimica fgb") == 0 || 
    strcmp(materia, "Quimica AP") == 0 || strcmp(materia, "Quimica ap") == 0 || strcmp(materia, "quimica AP") == 0 || strcmp(materia, "quimica ap") == 0 ||
     strcmp(materia, "Biologia AP") == 0 || strcmp(materia, "Biologia ap") == 0 || strcmp(materia, "biologia AP") == 0 || strcmp(materia, "biologia ap") == 0 ||
     strcmp(materia, "Biologia FGB") == 0 || strcmp(materia, "Biologia fgb") == 0 || strcmp(materia, "biologia FGB") == 0 || strcmp(materia, "biologia fgb") == 0 ||
     strcmp(materia, "Fisica AP") == 0 || strcmp(materia, "Fisica ap") == 0 || strcmp(materia, "fisica AP") == 0 || strcmp(materia, "fisica ap") == 0 ||
     strcmp(materia, "Fisica FGB") == 0 || strcmp(materia, "Fisica fgb") == 0 || strcmp(materia, "fisica FGB") == 0 || strcmp(materia, "fisica fgb") == 0 ||
      strcmp(materia, "Historia") == 0 || strcmp(materia, "historia") == 0 )
    
{
	materia_valida = 1;
   printf ("\n\nDigite a nota da sua avaliacao DISSERTATIVA de %s: ", materia);
    scanf ("%f", &dissertativa);
    printf ("\nNota da avaliacao dissertativa: %.1f", dissertativa);
    
	while (dissertativa < 0 || dissertativa > 10) {
    printf("\nNota invalida! Digite uma nota entre 0 e 10: ");
    scanf("%f", &dissertativa);
}

    printf ("\n\nDigite a nota da sua avaliacao OBJETIVA de %s: ", materia);
    scanf ("%f", &objetiva);
    printf ("\nNota da avaliacao objetiva: %.1f", objetiva);
    
	while (objetiva < 0 || objetiva > 10) {
    printf("\nNota invalida! Digite uma nota entre 0 e 10: ");
    scanf("%f", &objetiva);
}
     
	  printf ("\n\nDigite a sua nota de AT (atividades) de %s: ", materia);
    	scanf ("%f", &at);
       		printf ("\nNota de AT: %.1f", at);
       		
			   while (at < 0 || at > 10) {
    printf("\nNota invalida! Digite uma nota entre 0 e 10: ");
    scanf("%f", &at);
}
       
	printf ("\n\nDigite o seu bonus do simulado (se nao tiver feito digite 0): ");
		scanf ("%f", &bonus_simulado);
		printf ("\nBonus do simulado: %.1f", bonus_simulado);
		
		while (bonus_simulado < 0 || bonus_simulado > 2) {
    printf("\nNota invalida! Digite uma nota entre 0 e 2: ");
    scanf("%f", &bonus_simulado);
}

        resultado = duas_provas (dissertativa, objetiva, at, bonus_simulado);
	
	 
}

else if (strcmp(materia, "Redacao") == 0 || strcmp(materia, "redacao") == 0 || strcmp(materia, "Literatura") == 0 || strcmp(materia, "literatura") == 0 ||
strcmp(materia, "Filosofia") == 0 || strcmp(materia, "filosofia") == 0 || strcmp(materia, "Sociologia") == 0 || strcmp(materia, "sociologia") == 0 ||
strcmp(materia, "Ingles") == 0 || strcmp(materia, "ingles") == 0)
 {
 	materia_valida = 1;
 	printf ("\n\nDigite a nota da sua avaliacao de %s: ", materia);
    scanf ("%f", &prova);
    	
		while (prova < 0 || prova > 10) {
    printf("\nNota invalida! Digite uma nota entre 0 e 10: ");
    scanf("%f", &prova);}
     
	  printf ("\n\nDigite a sua nota de AT (atividades) de %s: ", materia);
    	scanf ("%f", &at);
       		printf ("\nNota de AT: %.1f", at);
       		
			   	while (at < 0 || at > 10) {
    printf("\nNota invalida! Digite uma nota entre 0 e 10: ");
    scanf("%f", &at);}
       
	printf ("\n\nDigite o seu bonus do simulado (se nao tiver feito digite 0): ");
		scanf ("%f", &bonus_simulado);
		printf ("\nBonus do simulado: %.1f", bonus_simulado);
			
			while (bonus_simulado < 0 || bonus_simulado > 2) {
    printf("\nNota invalida! Digite uma nota entre 0 e 2: ");
    scanf("%f", &bonus_simulado);}

        resultado = uma_prova (prova, at, bonus_simulado);
	
}

else if (strcmp (materia, "Eletiva") == 0 || strcmp (materia, "Eletivas") == 0 || strcmp (materia, "eletiva") == 0 || strcmp (materia, "eletivas") == 0 || 
strcmp (materia, "Projeto de vida") == 0 || strcmp (materia, "Projeto de Vida") == 0 || strcmp (materia, "projeto de vida") == 0) {
		materia_valida = 1;
		printf ("\n\nDigite a nota da sua atividade em sala de %s: ", materia);
    scanf ("%f", &projeto);
    		printf ("\nNota de atividade em sala: %.1f", projeto);
    			while (projeto < 0 || projeto > 10) {
    printf("\nNota invalida! Digite uma nota entre 0 e 10: ");
    scanf("%f", &projeto);}
     
	  printf ("\n\nDigite a sua nota de AT (atividades) de %s: ", materia);
    	scanf ("%f", &at);
       		printf ("\nNota de AT: %.1f", at);
       			while (at < 0 || at > 10) {
    printf("\nNota invalida! Digite uma nota entre 0 e 10: ");
    scanf("%f", &at);}
       
        resultado = atividades (projeto, at);
	
}
else if (strcmp (materia, "Educacao fisica") == 0 || strcmp (materia, "Educacao Fisica") == 0 || strcmp (materia, "educacao fisica") == 0 )
{
materia_valida = 1;
		printf ("\n\nDigite a nota da sua prova pratica: ");
    scanf ("%f", &prova_pratica);
    		printf ("\nNota da prova pratica: %.1f", prova_pratica);
    			while (prova_pratica < 0 || prova_pratica > 10) {
    printf("\nNota invalida! Digite uma nota entre 0 e 10: ");
    scanf("%f", &prova_pratica);}
     
	  printf ("\n\nDigite a sua nota de AT (atividades) de %s: ", materia);
    	scanf ("%f", &at);
       		printf ("\nNota de AT: %.1f", at);
       			while (at < 0 || at > 10) {
    printf("\nNota invalida! Digite uma nota entre 0 e 10: ");
    scanf("%f", &at);}
       
        resultado = provapratica (prova_pratica, at);	
}
else {
	materia_valida = 0;
    printf("\nMateria nao encontrada! Digite novamente: ");
		
}
}

while (materia_valida == 0);

    printf ("\n\nA sua media na materia de %s e %.1f ", materia, resultado);

    if (resultado < 6){

        recuperar = 6 - resultado;
        printf ("\n\nVoce ficou abaixo da media, precisa recuperar %.1f pontos!", recuperar);
    }
    else {
        acima = resultado - 6;
        printf ("\nVoce ficou com %.1f pontos acima da media! Continue assim :)", acima);
    }
    
    
    	printf ("\nDeseja calcular a media de outra materia? (S/s:sim  N/n: nao): ");
    	scanf (" %c", &novamente);
    	printf ("\n\n");
    	 
		 if (novamente != 'S' && novamente != 's' && novamente != 'N' && novamente != 'n') {
        printf ("\nResposta invalida! Digite S para sim ou N para nao.\n\n");
    }
	}
	while (novamente == 'S' || novamente == 's');
	printf ("Fim de programa!");

 return 0; 

    }
