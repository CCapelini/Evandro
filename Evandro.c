/*Nome: Bruno Rossi Carmo N: 11236289	
  Nome: Carlos Eduardo Capellini N: 11280140*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Biblioteca de strings

struct cadastro_Netflix {
  char titulo[50];
  int faixa_etaria_sugerida;
  char faixa_etaria_restricao[100];
  int faixa_escala_numerica;
  int ano_lancamento;
  int nota_user;
  int tamanho_amostra;
};
typedef struct cadastro_Netflix cadnet;

int main()
{
  cadnet x;
  FILE *arq;
  int i;
  
  arq=fopen("netflix_all.csv", "wb");
}
