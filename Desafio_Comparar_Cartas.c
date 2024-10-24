#include <stdio.h>
#include <string.h>

// Estrutura para armazenar as propriedades de uma cidade
struct Cidade {
    char estado;
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Cidade cidade1, cidade2;

    // Cadastro da primeira cidade
    printf("Cadastro da Cidade 1:\n");
    printf("Digite o estado (ex: A): ");
    scanf(" %c", &cidade1.estado);
    
    printf("Digite o código da cidade (ex: A01): ");
    scanf("%s", cidade1.codigo);
    
    printf("Digite o nome da cidade: ");
    getchar(); // Limpa o buffer
    fgets(cidade1.nome, sizeof(cidade1.nome), stdin);
    cidade1.nome[strcspn(cidade1.nome, "\n")] = '\0'; // Remove o \n

    printf("Digite a população: ");
    scanf("%d", &cidade1.populacao);
    
    printf("Digite a área: ");
    scanf("%f", &cidade1.area);
    
    printf("Digite o PIB: ");
    scanf("%f", &cidade1.pib);
    
    printf("Digite os pontos turísticos: ");
    scanf("%d", &cidade1.pontos_turisticos);

    // Cadastro da segunda cidade
    printf("\nCadastro da Cidade 2:\n");
    printf("Digite o estado (ex: B): ");
    scanf(" %c", &cidade2.estado);
    
    printf("Digite o código da cidade (ex: B01): ");
    scanf("%s", cidade2.codigo);
    
    printf("Digite o nome da cidade: ");
    getchar(); // Limpa o buffer
    fgets(cidade2.nome, sizeof(cidade2.nome), stdin);
    cidade2.nome[strcspn(cidade2.nome, "\n")] = '\0'; // Remove o \n

    printf("Digite a população: ");
    scanf("%d", &cidade2.populacao);
    
    printf("Digite a área: ");
    scanf("%f", &cidade2.area);
    
    printf("Digite o PIB: ");
    scanf("%f", &cidade2.pib);
    
    printf("Digite os pontos turísticos: ");
    scanf("%d", &cidade2.pontos_turisticos);

    // Comparação de populações
    printf("\nComparação de cidades:\n");
    if (cidade1.populacao > cidade2.populacao) {
        printf("A cidade vencedora em população é: %s\n", cidade1.nome);
    } else if (cidade1.populacao < cidade2.populacao) {
        printf("A cidade vencedora em população é: %s\n", cidade2.nome);
    } else {
        printf("As cidades têm a mesma população.\n");
    }

    // Comparação de áreas
    if (cidade1.area > cidade2.area) {
        printf("A cidade vencedora em área é: %s\n", cidade1.nome);
    } else if (cidade1.area < cidade2.area) {
        printf("A cidade vencedora em área é: %s\n", cidade2.nome);
    } else {
        printf("As cidades têm a mesma área.\n");
    }

    // Comparação de PIB
    if (cidade1.pib > cidade2.pib) {
        printf("A cidade vencedora em PIB é: %s\n", cidade1.nome);
    } else if (cidade1.pib < cidade2.pib) {
        printf("A cidade vencedora em PIB é: %s\n", cidade2.nome);
    } else {
        printf("As cidades têm o mesmo PIB.\n");
    }

    // Comparação de pontos turísticos
    if (cidade1.pontos_turisticos > cidade2.pontos_turisticos) {
        printf("A cidade vencedora em pontos turísticos é: %s\n", cidade1.nome);
    } else if (cidade1.pontos_turisticos < cidade2.pontos_turisticos) {
        printf("A cidade vencedora em pontos turísticos é: %s\n", cidade2.nome);
    } else {
        printf("As cidades têm o mesmo número de pontos turísticos.\n");
    }

    return 0;
}