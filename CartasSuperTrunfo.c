#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {
         // Definindo Variáveis da primeira carta
   
    int pontosturisticos1;                         				 // número de pontos turísticos
    unsigned long int populacao1;								 // População agora está armazenada como unsigned long int
	float area1, pib1, densidadepopulacional1,pibpercapita1;     // Área (em km quadrados) - PIB (em moeda local) - densidade populacional - pib per capita
    char estado1[30];                                            // Nome do estado (exemplo: Minas)
    char codigo1[30];                                            // Código da carta (ex.: A01)
    char cidade1[30];                                            // Nome da cidade (exemplo: Contagem)

        // Definindo Variáveis da segunda carta
    int pontosturisticos2;      			                    // número de pontos turísticos - População
    unsigned long int populacao2; 								// População agora está armazenada como unsigned long int
	float area2, pib2, densidadepopulacional2,pibpercapita2;    // Área (em km quadrados) e PIB (em moeda local)
    char estado2[30];                                           // Nome do estado (exemplo: Minas)
    char codigo2[30];                                           // ódigo da carta (ex.: A01)
    char cidade2[30];                                           // Nome da cidade (exemplo: Contagem)

        // Mostra o título do programa
    printf("Programa Super Trunfo \n");
    printf("Cadastro de Cartas\n");

     
    printf("\n *** CARTA 1 : ***\n"); // Cadastro da Carta 1

    printf("Digite o Estado : ");
    scanf(" %s", estado1);                 // Lê o nome do estado

    printf("Digite o Código : ");
    scanf("%s", codigo1);                 // Lê o código cadastrado

    printf("Digite o nome da Cidade : ");
    scanf("%s", cidade1);                 // Lê o nome da cidade

    printf("Digite a População : ");
    scanf("%lu", &populacao1);             // Lê a população (habitantes)

    printf("Digite a Área : ");
    scanf("%f", &area1);                  // Lê a área em km quadrados

    printf("Digite o PIB : ");
    scanf("%f", &pib1);                   // Lê o PIB (moeda local)

    printf("Digite a quantidade de Pontos Turísticos : ");
    scanf("%d", &pontosturisticos1);      // Lê a quantidade de pontos turísticos

    // Cadastro da Carta 2
    printf("\n*** CARTA 2 : ***\n");

    printf("Digite o Estado : ");
    scanf(" %s", estado2);                // Lê o nome do estado

         printf("Digite o Código : ");
         scanf("%s", codigo2);                 // Lê o código como string

    printf("Digite o nome da Cidade : ");
    scanf("%s", cidade2);                 // Lê o nome da cidade como string

         printf("Digite a População : ");
         scanf("%lu", &populacao2);             // Lê a população (habitantes)

    printf("Digite a Área : ");
    scanf("%f", &area2);                  // Lê a área em km quadrados

         printf("Digite o PIB : ");
          scanf("%f", &pib2);                   // Lê o PIB (moeda local)

    printf("Digite a quantidade de Pontos Turísticos : ");
    scanf("%d", &pontosturisticos2);      // Exibe a quantidade de pontos turísticos

        /* A definição abaixo deve ser feita depois do ultimo scanf, se colocar no inicio junto com as variáveis não vai funcionar,pois ainda não existe valores definidos */

    densidadepopulacional1 = populacao1 / area1;  // Define que a densidade populacional populacao dividida pela area
    pibpercapita1 = pib1 / populacao1;            // Define que o pib per carpita é PIB dividid pela população
    densidadepopulacional2 = populacao2 / area2;  // Define que a densidade populacional populacao dividida pela area
    pibpercapita2 = pib2 / populacao2;            // Define que o pib per carpita é PIB dividid pela população

        //Exibe o cadastro da primeira Carta

    printf("\n ** CARTA 1 **\n"); 
    
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População de %lu \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f (moeda local)\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade populacional : %.2f hab/km² \n", densidadepopulacional1);
    printf("PIB per Capita : %.2f reais por habitante\n", pibpercapita1);

        //Exibe o cadastro da segunda Carta

    printf("\n **CARTA 2 **\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População de %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f (moeda local)\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade populacional : %.2f hab/km² \n", densidadepopulacional2);
    printf("PIB per Capita : %.2f reais por habitante \n\n", pibpercapita2);
    
    //************** Batalhas de cartas no Super Trunfo ****************
    printf("** Batalha de cartas no Super Trunfo **\n\n");
    
    printf("A densidade populacional da cidade 1 é: %.2f \n", densidadepopulacional1);
    printf("A densidade populacional da cidade 2 é: %.2f \n\n", densidadepopulacional2);
    
    printf("O PIB percapita da cidade 1 é: %.2f reais por habitante \n", pibpercapita1);
    printf("O PIB percapita da cidade 2 é: %.2f reais por habitante \n\n", pibpercapita2);
    
    // Criar variável de super poder do tipo float
    
    float superpodercarta1;
    float superpodercarta2;
    
    float densidadenegativa1;
	densidadenegativa1 = -densidadepopulacional1; // invertendo o valor da densidade populacional
    float densidadenegativa2;
	densidadenegativa2 = -densidadepopulacional2; // invertendo o valor da densidade populacional
    
    // Exibe a densidade negativa

    printf("\n**************************************\n");
    printf(" Densidade negativa da cidade 1 : %.2f \n ", densidadenegativa1);
    printf(" Densidade negativa da cidade 2 : %.2f \n ", densidadenegativa2);
    printf("\n**************************************\n");
    
    // Soma de todos os atributos
    superpodercarta1 = (populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1) - densidadenegativa1;
    superpodercarta2 = (populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2) - densidadenegativa2;
    
    // exibe o poder de cada super carta
    printf(" O Super Poder da Carta 1 é : %.2f \n", superpodercarta1 );
    printf(" O Super Poder da Carta 2 é : %.2f \n", superpodercarta2 );
    printf("\n**************************************\n");
    
    // exibe titulo da Comparação das cartas com informações sobre resultado

    printf(" == Comparação das Cartas == \n\n");
    printf(" Resultado (1) = carta 1 venceu \n");
    printf(" Resultado (0) = carta 2 venceu \n\n");
    
    // Criando variavreis das comparações

    int resultadopopulacao = populacao1 > populacao2;
    int resultadoarea = area1 > area2;
    int resultadopib = pib1 > pib2;
    int resultadopontosturisticos = pontosturisticos1 > pontosturisticos2;
    int resultadodensidade = densidadepopulacional1 < densidadepopulacional2;
    int resultadopibpercapita = pibpercapita1 > pibpercapita2;
    int resultadosuperpoder = superpodercarta1 > superpodercarta2;

    // Imprimindo resultado das comparações
    
    printf(" POPULAÇÃO: A carta 1 venceu: %d \n", resultadopopulacao);
    printf(" ÁREA: A carta 1 venceu: %d \n", resultadoarea);
    printf(" PIB: A carta 1 venceu: %d \n", resultadopib);
    printf(" PONTOS TURÍSTICOS: A carta 1 venceu: %d \n", resultadopontosturisticos);
    printf(" DENSIDADE POPULACIONAL: A carta 1 venceu: %d \n",resultadodensidade);
    printf(" PIB PERCAPITA: A carta 1 venceu: %d \n", resultadopopulacao);
    printf(" SUPER PODER: A carta 1 venceu: %d \n\n", resultadosuperpoder); 

 
    
    
    
    // Proxima linha finaliza o programa
    return 0;                             
}