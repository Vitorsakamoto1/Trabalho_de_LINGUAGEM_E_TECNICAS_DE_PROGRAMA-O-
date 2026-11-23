#include <stdio.h>

#define MAX_ERROS 10

void limpar_entrada() {
    fflush(stdin);
}

void jogar(char palavra[]) {
    char descoberta[50];   
    int tamanho, i, achou, faltam;
    int tentativas = 0;
    char test;

    // pra gravar o tamanho da palvra
    tamanho = 0;
    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    //marca todo os char do tamanho como _ 
    for (i = 0; i < tamanho; i++) {
        descoberta[i] = '_';
    }

    while (1) {
        printf("A palavra e : ");//só escreve a palavra atualizada escondida
        for (i = 0; i < tamanho; i++) {
            printf("%c ", descoberta[i]);
        }
        printf("\nAdivinhe uma letra: ");
        scanf(" %c", &test);

        //compara cada char com o 'palavra' e passa pro descoberta que é o atual das tentativa
        achou = 0;
        for (i = 0; i < tamanho; i++) {
            if (palavra[i] == test) {
                descoberta[i] = test;
                achou = 1;
            }
        }
		//bagulho de contar erros
        if (achou == 0) {
            tentativas = tentativas + 1;
            printf("Nao tem a letra, contagem de tentativas erradas: %d \n", tentativas);
        }

        //basicamente ver se o cara ja ganhou ou nao, se ainda faltar (1 ou mais) é pra repetir. Mas se não faltar nenhuma char _ entao o cara ganhou (faltam=0)
        faltam = 0;
        for (i = 0; i < tamanho; i++) {
            if (descoberta[i] == '_') {
                faltam = faltam + 1;
            }
        }
		//oq eu falei la em cima
        if (faltam == 0) {
            printf("Parabens, acertou!!\nPalavra: %s\nTotal de erros: %d\n", palavra, tentativas);
            break;
        }
        if (tentativas == MAX_ERROS) {//outro final ne, chegou a 10 perdeu
            printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
            break;
        }
    }
}

int main() {
    int forca, inicio, denovo;

    printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
    while (1) {
        printf("Iniciar jogo? \nselecione a alternativa: \n1.sim\n2.nao\n");
        inicio = 0;
        scanf("%d", &inicio);
        limpar_entrada();
        if (inicio == 1 || inicio == 2) {
            break;
        }
        printf("Opcao invalida, tente novamente\n");
    }

    if (inicio == 2) {
        printf("Beleza entao vacilao\n");
        return 0;
    }

    while (1) {
        while (1) {
            printf("Niveis: \n1.Facil\n2.Facil\n3.Facil\n4.Facil\n5.Facil\n6.Facil\n7.Facil\n8.Medio\n9.Medio\n10.Medio\n11.Medio\n12.Medio\n13.Medio\n14.Medio\n15.Dificil\n16.Dificil\n17.Dificil\n18.Dificil\n19.Dificil\n20.Dificil\n21.Dificil\n");
            forca = 0;
            scanf("%d", &forca);
            limpar_entrada();
            if (forca >= 1 && forca <= 21) {
                break;
            }
            printf("Opcao invalida, tente novamente\n");
        }

        switch (forca) {//aq eu coloco a palavra no char palavra[] la em cima, que eu deixei em branco pra da pra atualizar sempre
            case 1:  jogar("abacaxi"); break;
            case 2:  jogar("banana"); break;
            case 3:  jogar("armadura"); break;
            case 4:  jogar("laranja"); break;
            case 5:  jogar("cavalo"); break;
            case 6:  jogar("janela"); break;
            case 7:  jogar("sapato"); break;
            case 8:  jogar("carabina"); break;
            case 9:  jogar("bicicleta"); break;
            case 10: jogar("chocolate"); break;
            case 11: jogar("elefante"); break;
            case 12: jogar("girassol"); break;
            case 13: jogar("borboleta"); break;
            case 14: jogar("tartaruga"); break;
            case 15: jogar("caleidoscopio"); break;
            case 16: jogar("computador"); break;
            case 17: jogar("candelabro"); break;
            case 18: jogar("paralelepipedo"); break;
            case 19: jogar("hipopotamo"); break;
            case 20: jogar("ornitorrinco"); break;
            case 21: jogar("desenvolvimento"); break;
        }
        limpar_entrada();

        while (1) {//aq sempre vai repetir depois de acabar o jogo dai, e dai tem esse while pra o cara não conseguir coloca opção diferente de 2 || 1
            printf("\nJogar novamente? \n1.sim\n2.nao\n");
            denovo = 0;
            scanf("%d", &denovo);
            limpar_entrada();
            if (denovo == 1 || denovo == 2) {
                break;
            }
        }
        if (denovo == 2) {//dai esse aq ta fora pra dar o break no while do jogo inteiro
            break;
        }
    }

    printf("Fim, obrigado por jogar!\n");
    return 0;
}
