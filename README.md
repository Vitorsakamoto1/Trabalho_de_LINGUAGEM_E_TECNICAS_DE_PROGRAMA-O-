# Trabalho_de_LINGUAGEM_E_TECNICAS_DE_PROGRAMA-O-
Repositório para a postagem e relização do trabalho de linguagens - ADS segundo semestre
# Jogo da Forca em C

Jogo da forca feito em linguagem C.

## Como jogar

1. Inicie o jogo escolhendo a opção `1`.
2. Escolha um nível de 1 a 21:
   - 1 a 7: Fácil
   - 8 a 14: Médio
   - 15 a 21: Difícil
3. Digite uma letra por vez para descobrir a palavra.
4. Cada letra errada conta como uma tentativa e desenha uma parte do boneco na forca.
5. Com 10 erros, o jogo termina.
6. No fim de cada partida, você pode jogar de novo.

## Palavras

| Fácil | Médio | Difícil |
|---|---|---|
| abacaxi | carabina | caleidoscopio |
| banana | bicicleta | computador |
| armadura | chocolate | candelabro |
| laranja | elefante | paralelepipedo |
| cavalo | girassol | hipopotamo |
| janela | borboleta | ornitorrinco |
| sapato | tartaruga | desenvolvimento |

## Conceitos usados

- Entrada e saída com `printf` e `scanf`
- Estruturas de seleção com `if/else` e `switch`
- Laço de repetição com `while (1)` e `break`
- Funções: uma para cada palavra, uma para desenhar a forca e uma para limpar a entrada

## Como executar

Abra o arquivo `.c` no Dev-C++, compile e execute com **F11**.

## Observações

- Digite as letras em minúsculo.
- A limpeza da entrada usa `fflush(stdin)`, que funciona no Windows.

## Integrantes

- Eduardo Franca
- Nicolas Riello
- Vitor Sakamoto
- Anderson
- Guilherme

Arquivo dos Slides:
[Como-funciona-o-nosso-jogo-da-forca.pdf.zip](https://github.com/user-attachments/files/35059339/Como-funciona-o-nosso-jogo-da-forca.pdf.zip)
