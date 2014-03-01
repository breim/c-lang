//Tricks em C
// <=> navinha pow pow pew <=> ----O  <\=> "sphrishh"
 

// Iniciando um vetor
int main(){
	int v[10];
	int v[] = {0,1,2,3,4,5,6,7,8,9}
	char x[40];
}

//Iniciando uma matriz
int main(){
	int m[2][3]; // A matriz sempre inicia na linha.. neste caso temos duas linhas e tres colunas
	int m[][] = {{7,8,4},4,9,2}}; // Neste caso é matriz 3x3
}


//Pegando o maior valor do vetor
int maior = v[0];
for(i=1;i<10;i++)
	if(v[0]>maior)
		maior = v[i];
	printf("%d",maior);

//Exibir os elementos pares na tela
for(i=0;i<10;i++)
	if(v[i] %2 == 0)
		printf("%d",v[i]);

//Contar quantos números negativos existem no vetor
int cont = 0;
for(i=0;i<10;i++)
	if(v[i] < 0)
		cont++;
	printf("%d",cont);

// Preencher a matriz
int main(){
	int m[2][3],l,c;
	for(l=0;l<2;l++)
		for(c=0;c<3;c++)
			scanf("%d",&m[l][c]);


}


/*
PONTEIROS: VariÃ¡veis apontando para outras diversas vezes

SÃ£o variÃ¡veis que acessam uma outra variÃ¡vel(ou funÃ§Ã£o).
SÃ£o do mesmo tipo(de dado) da variÃ¡vel que apontam.
_________________________________________________________|


Å¨sos:
(1) Manipular vetores sem o uso de Ã­ndices.
(2) Alterar parametros no interiror das funÃ§Ãµes.
(3) Alocar memÃ³ria do sisema.
__________________________________________________________|



Operador de endereÃ§amento "&":

Acessa o endereÃ§o de mÃ©mÃ³ria de uma variÃ¡vel

p => ponteiro
c => variÃ¡vel

p          =     &c;
ponteiro         endereÃ§o da memÃ³ria da var c
__________________________________________________________|



Operador de indereÃ§Ã£o "*"

Aessa o conteÃºdo da variÃ¡vel apontada pelo ponteiro.

x => variÃ¡vel2
p => ponteiro apontado pela variÃ¡vel c

x         = *p;
var comum    conteÃºdo da var c

*/

#include <conio.h>
#include <stdio.h>

int main(){
	int i=1,j=2,k=3;
	printf ("i = %p\n",&i);
	printf ("j = %p\n",&j);
	printf ("k =%p\n",&k);
	getch();
}




//-------------------------------------------------

int main(){
	int x=1,y=2,z=3;
	int *p; //declara p como parametro
	p = &x; //o que Ã© passado Ã  p ?  R: O endereÃ§o de memÃ³ria ou valor de x

	printf("*p = %i \n",*p);
	printf("y = %i \n",y);
	y = *p; //o que y recebe ? R:Rece o valor de xe = 1

	printf("y =%i \n", y);

	*p = 5;
	printf("x = %i \n",x);

	*p = z;
	printf("x=%i \n",x);

	getch();
}




/* Prova 24 de outubro

- Operadores de incremento/decremento
- Operador ternÃ¡rio e aritrimÃ©trico de atribuiÃ§Ã£o
- Vetores e matrizes
- Strings
- Ponteiros

*/
 
/*

AritrimÃ©trica com ponteiros

char a = "z"
int  n = 1234;
float pi = 3.14159;
char = *pa = &a;
int *pn = &n;
float *p_pi = &pi;





OPERACOES		| Exemplo			| ObservaÃ§Ã£o                            |
		        | 					|                                       |
AtribuiÃ§Ã£o		| p = &c, p = null  | Atribui o endereÃ§o                    |
Incremento		| p = p+2			| Incremento 2*sizeof(tipo)             |
Decremento		| p = p-1			| Decrementa 1*sizeof(tipo) 			|
Apontado		| *p				| ConteÃºdo da variÃ¡vel apontada por p   |
EndereÃ§o		| &p				| EndereÃ§o de p 				        |
DiferenÃ§a		| p1-p1				| NÂº de elementos entre p1 e p2 		|
ComparaÃ§Ã£o		| p1>p2				| Ordem de dois elementos 				|



*/




int main(){
	x=5, *px&x;
	double y=5.0, *py=&y;
	printf("%d %ld \n",x,(long)px);
	printf("%d %ld \n",x+1,(long)(px+1));
	printf("%d %ld \n",y,(long)py);
	printf("%d %ld \n",y+1.0,(long)(py+1));
	getch();
}
