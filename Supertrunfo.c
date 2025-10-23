#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da struct para representar uma carta
typedef struct {
    char nome[50];
    int ataque;
    int defesa;
    int velocidade;
} Carta;

// Função para criar cartas (hardcoded para simplicidade)
void criarCartas(Carta *jogador, Carta *computador) {
    strcpy(jogador->nome, "Carta Jogador");
    jogador->ataque = 80;
    jogador->defesa = 70;
    jogador->velocidade = 60;

    strcpy(computador->nome, "Carta Computador");
    computador->ataque = 75;
    computador->defesa = 85;
    computador->velocidade = 65;
}

// Desafio 1: Comparação de cartas com base em um único atributo (ataque) usando if e if-else
void desafio1(Carta jogador, Carta computador) {
    printf("Desafio 1: Comparando apenas o atributo Ataque\n");
    printf("Jogador: %s - Ataque: %d\n", jogador.nome, jogador.ataque);
    printf("Computador: %s - Ataque: %d\n", computador.nome, computador.ataque);

    if (jogador.ataque > computador.ataque) {
        printf("Jogador ganha!\n");
    } else if (jogador.ataque < computador.ataque) {
        printf("Computador ganha!\n");
    } else {
        printf("Empate!\n");
    }
}

// Desafio 2: Comparação com múltiplos atributos, menus com switch, e estruturas if-else if aninhadas/encadeadas
void desafio2(Carta jogador, Carta computador) {
    int escolha;
    printf("Desafio 2: Escolha o atributo para comparar\n");
    printf("1. Ataque\n");
    printf("2. Defesa\n");
    printf("3. Velocidade\n");
    scanf("%d", &escolha);

    printf("Jogador: %s\n", jogador.nome);
    printf("Computador: %s\n", computador.nome);

    switch (escolha) {
        case 1:
            printf("Comparando Ataque: Jogador %d vs Computador %d\n", jogador.ataque, computador.ataque);
            if (jogador.ataque > computador.ataque) {
                printf("Jogador ganha!\n");
            } else if (jogador.ataque < computador.ataque) {
                printf("Computador ganha!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Comparando Defesa: Jogador %d vs Computador %d\n", jogador.defesa, computador.defesa);
            if (jogador.defesa > computador.defesa) {
                printf("Jogador ganha!\n");
            } else if (jogador.defesa < computador.defesa) {
                printf("Computador ganha!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("Comparando Velocidade: Jogador %d vs Computador %d\n", jogador.velocidade, computador.velocidade);
            if (jogador.velocidade > computador.velocidade) {
                printf("Jogador ganha!\n");
            } else if (jogador.velocidade < computador.velocidade) {
                printf("Computador ganha!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Escolha inválida!\n");
    }
}

// Desafio 3: Comparação com base em dois atributos (ataque e defesa), usando operador ternário e integrando estruturas de decisão
void desafio3(Carta jogador, Carta computador) {
    printf("Desafio 3: Comparando dois atributos (Ataque e Defesa) simultaneamente\n");
    printf("Jogador: %s - Ataque: %d, Defesa: %d\n", jogador.nome, jogador.ataque, jogador.defesa);
    printf("Computador: %s - Ataque: %d, Defesa: %d\n", computador.nome, computador.ataque, computador.defesa);

    // Contar vitórias usando operador ternário
    int vitJ = 0, vitC = 0;

    // Comparar ataque
    vitJ += (jogador.ataque > computador.ataque) ? 1 : 0;
    vitC += (computador.ataque > jogador.ataque) ? 1 : 0;

    // Comparar defesa
    vitJ += (jogador.defesa > computador.defesa) ? 1 : 0;
    vitC += (computador.defesa > jogador.defesa) ? 1 : 0;

    // Decidir o vencedor baseado no número de vitórias (integrando if-else if)
    if (vitJ > vitC) {
        printf("Jogador ganha (mais vitórias em atributos)!\n");
    } else if (vitC > vitJ) {
        printf("Computador ganha (mais vitórias em atributos)!\n");
    } else {
        printf("Empate (vitórias iguais)!\n");
    }
}

int main() {
    Carta jogador, computador;
    criarCartas(&jogador, &computador);

    int desafio;
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Escolha o desafio: 1, 2 ou 3\n");
    scanf("%d", &desafio);

    switch (desafio) {
        case 1:
            desafio1(jogador, computador);
            break;
        case 2:
            desafio2(jogador, computador);
            break;
        case 3:
            desafio3(jogador, computador);
            break;
        default:
            printf("Desafio inválido!\n");
    }

    return 0;
}
