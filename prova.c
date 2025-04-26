// RETRABALHO PROVA 1C DIA 24/04/2025

#include <stdio.h>

int main() {

	float pesoIdealm, pesoIdealf, pesoAtual, altura, peso, imc, pesoPerder, pesoGanhar;
	int opcao;
	char sexo;

	printf("*******ESCOLHA UMA OPCAO*******\n");//menu inical
	printf("1 - Calcular peso Ideal.\n");
	printf("2 - Calcular IMC.\n");
	printf("3 - Peso a Perder/Ganhar.\n");
	printf("4 - Sair.\n");
	scanf("%i", &opcao);

	switch (opcao) {

		case 1:
			printf("*******CALCULO DO PESO IDEAL*******\n");
			printf("Digite sua Altura em metros (X.XX): ");//solicita a altura do usuario
			scanf("%f", &altura);

			printf("Digite M (Masculino) / F (Feminino): ");//gênero
			scanf(" %c", &sexo);

			if (sexo == 'm'|| sexo =='M') {
				pesoIdealm = (72.7 * altura) - 58; // peso ideal Masculino
				printf("MASCULINO\n");
				printf("Seu peso ideal aproximado e: %.2f KG\n", pesoIdealm);
				printf("************************************\n");

			} else if (sexo == 'f' || sexo== 'F') {
				pesoIdealf = (62.1 * altura) - 44.7; // peso ideal Feminino
				printf("FEMININO\n");
				printf("Seu peso ideal aproximado e: %.2f KG\n", pesoIdealf);
				printf("************************************\n");
			} else {

				printf("Opcao invalida! Por favor, digite M ou F.\n");
				printf("*****************************************\n");
			}
			break;
		case 2:
			printf("*******CALCULO DO IMC*******\n");//teste do IMC
			printf("Digite sua Altura em metros (X.XX): ");
			scanf("%f", &altura);
			printf("Digite seu PESO (XX.XX): ");
			scanf("%f", &peso);

			imc = peso / (altura*altura);
			printf("Seu IMC e: %.2f\n", imc);
			printf("***************\n");

			if(imc < 16) {// condições do IMC
				printf("MAGREZA GRAVE\n");
				scanf("%f", &imc);
			} else if(imc>=16 && imc<=16.9) {

				printf("MAGREZA MODERADA\n");
				scanf("%f", &imc);
			} else if(imc>=17 && imc<=18.4) {

				printf("MAGREZA LEVE\n");
				scanf("%f", &imc);
			} else if(imc>=18.5 && imc<=24.9) {

				printf("NORMAL\n");
				scanf("%f", &imc);
			} else if(imc>=25 && imc<=29.9) {

				printf("SOBREPESO\n");
				scanf("%f", &imc);
			} else if(imc>=30 && imc<=34.9) {

				printf("OBESIDADE GRAU I\n");
				scanf("%f", &imc);
			} else if(imc>=35 && imc<=39.9) {

				printf("OBESIDADE GRAU II(SEVERA)\n");
				scanf("%f", &imc);
			} else if(imc>=40) {

				printf("OBESIDADE GRAU III(MORBIDA)\n");
				scanf("%f", &imc);
			} else {

				printf("Seu IMC não se enquadra em nenhuma categoria específica.\n");//se o usuario digitar algum valor errado eo calculo ficar fora de padrao
				printf("********************************************************\n");
			}
			break;


			float pesoGanharM, pesoPerderM, pesoGanharF, pesoPerderF;// novas variaveis para calcular o peso a ganahr ou perder
		case 3:

			printf("******PESO GANHAR/PERDER*******\n");
			printf("Digite sua Altura em metros (X.XX): ");
			scanf("%f", &altura);
			printf("Digite seu PESO (XX.XX): ");
			scanf("%f", &peso);

			pesoIdealm = (72.7 * altura) - 58; // peso ideal Masculino
			printf("O peso ideal aproximado para Homens e: %.2f KG\n", pesoIdealm);
			pesoIdealf = (62.1 * altura) - 44.7; // peso ideal Feminino
			printf("O peso ideal aproximado para Mulheres e: %.2f KG\n", pesoIdealf);
//calculo da diferença de peso
			pesoGanharM = pesoIdealm - peso;
			pesoPerderM = peso - pesoIdealm;
			pesoGanharF = pesoIdealf - peso;
			pesoPerderF = peso - pesoIdealf;

			printf("O PESO a PERDER/GANHAR aproximado e: %.2f KG\n", pesoGanharM, pesoPerderM, pesoGanharF, pesoPerderF);
			printf("********************************************\n");
			break;

		case 4:
			printf("Saindo do programa. Obrigado por usar!\n");
			printf("**************************************\n");
			break; // Encerra o programa

		default:
			printf("Opcao invalida! Por favor, escolha uma opcao entre 1 e 4.\n");
			printf("*********************************************************\n");
			break;
	}
}