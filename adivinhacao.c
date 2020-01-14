#include <stdio.h>//É fácil entender "stdio": vem de ::standard I/O::, ou seja, entrada e saída padrão.
#include <stdlib.h>
#include <time.h>// TIME>H serve para a  funcao time


int main() { //Todo programa em C tem uma função principal. É ela que é executada quando você roda o seu arquivo .exe, 
	//.out, ou qualquer que seja a extensão executável do seu sistema operacional. Essa função chama-se main.

printf("\n\n");
printf("          P  /_\\  P                              \n");
printf("         /_\\_|_|_/_\\                            \n");
printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
printf("    |\" \"  |  |_|  |\"  \" |                     \n");
printf("    |_____| ' _ ' |_____|                         \n");
printf("          \\__|_|__/                              \n");
printf("\n\n");


int segundos = time(0);//função time() que nos devolve exatamente essa quantidade de segundos. Para isso, basta declararmos um inteiro 
//e invocar a função time(), passando o valor "zero" para ela.../

srand(segundos); // a função srand() que é quem define a semente é como se fosse uma variável que entra nessa fórmula matemática e deixa
// os números sempre diferentes.../

int numerogrande = rand(); //A função chama-se rand() e ela nos devolve um número aleatório a cada vez que é executada..../

int numerosecreto = numerogrande % 100; //Se calcularmos o resto da divisão desse número por 100, por exemplo, teremos sempre um 
//intervalo entre 0 e 99. É isso então que faremos. Usaremos o resto da divisão para termos um número no intervalo que queremos..../

int chute;
int tentativas = 1;
double pontos = 1000;

int acertou = 0; //

int nivel;

	printf("Qual o nivel de dificuldade\n");
	printf("(1) Fácil (2) Médio (3) Dificil\n\n");
	printf("Escolha");

scanf("%d", &nivel);



int numerodetentativas;

switch(nivel) { //O switch é um "if mais simples". Quando temos condições repetidas, onde comparamos uma variável inteira com vários
// números (igual em nosso caso, onde comparamos nivel com 1, 2 e 3), podemos usar o switch.../
	case 1: 
		numerodetentativas = 20;
		break;

	case 2:
	 	numerodetentativas = 15;
	 	break;

	default: //O "else" do switch é o default
		numerodetentativas = 6;
		break;
}


for(int i = 1; i<= numerodetentativas; i++) {

	printf("Tentativa%d\n", tentativas);
	printf("Qual e o seu chute ?\n");
	scanf("%d", &chute);//scanf, que lê do teclado. A função scanf precisa saber duas coisas: o tipo do dado que ela vai ler, e em qual 
	//variável ela deverá colocar o valor lido...../

	//Quando colocamos o %d chamado de mascara no meio da string, significa que queremos que ali seja colocada uma variável do tipo 
	//inteiro
	printf("Seu chute foi %d\n", chute);//A linguagem C, vem com a função printf que, como o próprio nome diz, imprime. 

	if(chute < 0) {
		printf("Voce nao pode chutar numeros negativos\n");

		continue; //O continue diz ao laço que ele deve ir direto para a próxima iteração, sem executar o restante de código que 
		//ainda possa existir dentro do seu bloco de código
	}

		acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;
	
		if(acertou){

		break; // Obriga o laço a para definitivamente../

		} 

	else if(maior){ //elseif SENAO SE ele nao permite que sair executando IF por If....
		
		printf("seu chute foi maior que o numero secreto\n");

	} 
	else {

	printf("seu chute foi menor que o numero secreto\n");

		} 

		tentativas ++;
		double pontosperdidos = abs (chute - numerosecreto) / (double) 2; //Funcao ABS transforma numero negativos em numeros positvos../
		pontos = pontos - pontosperdidos;
 	} 

 		printf("Fim de jogo\n");

if(acertou) {
    printf("             OOOOOOOOOOO               \n");
    printf("         OOOOOOOOOOOOOOOOOOO           \n");
    printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
    printf("    OOOOOO      OOOOO      OOOOOO      \n");
    printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
    printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
    printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
    printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
    printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
    printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
    printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
    printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
    printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
    printf("         OOOOOO         OOOOOO         \n");
    printf("             OOOOOOOOOOOO              \n");
    printf("\nParabéns! Você acertou!\n");
    printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
} else {
    printf("       \\|/ ____ \\|/    \n");   
    printf("        @~/ ,. \\~@      \n");   
    printf("       /_( \\__/ )_\\    \n");   
    printf("          \\__U_/        \n");
    printf("\nVocê perdeu! Tente novamente!\n\n");

	}
 }


