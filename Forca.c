#include <stdio.h>
#include <stdlib.h>

	int abacax;
	void abacaxi(int abacax){
		
		char a,b,c,x,i;
		char test;
		int tentativas;
		
		tentativas = 0;
		a = '_';
		b = '_';
		c = '_';
		x = '_';
		i = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c \n", a,b,a,c,a,x,i);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'a'){
				a = test;
			}else if(test == 'b'){
				b = test;
			}else if(test == 'c'){
				c = test;
			}else if(test == 'x'){
				x = test;
			}else if(test == 'i'){
				i = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (a == 'a' && b == 'b' && c == 'c' && x == 'x' && i == 'i'){
				printf("Parabens, acertou!!\nPalavra: Abacaxi\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int bananax;
	void banana(int bananax){
		
		char b,a,n;
		char test;
		int tentativas;
		
		tentativas = 0;
		b = '_';
		a = '_';
		n = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c \n", b,a,n,a,n,a);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'b'){
				b = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 'n'){
				n = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (b == 'b' && a == 'a' && n == 'n'){
				printf("Parabens, acertou!!\nPalavra: Banana\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int armadurax;
	void armadura(int armadurax){
		
		char a,r,m,d,u;
		char test;
		int tentativas;
		
		tentativas = 0;
		a = '_';
		r = '_';
		m = '_';
		d = '_';
		u = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c \n", a,r,m,a,d,u,r,a);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'a'){
				a = test;
			}else if(test == 'r'){
				r = test;
			}else if(test == 'm'){
				m = test;
			}else if(test == 'd'){
				d = test;
			}else if(test == 'u'){
				u = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (a == 'a' && r == 'r' && m == 'm' && d == 'd' && u == 'u'){
				printf("Parabens, acertou!!\nPalavra: Armadura\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int laranjax;
	void laranja(int laranjax){
		
		char l,a,r,n,j;
		char test;
		int tentativas;
		
		tentativas = 0;
		l = '_';
		a = '_';
		r = '_';
		n = '_';
		j = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c \n", l,a,r,a,n,j,a);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'l'){
				l = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 'r'){
				r = test;
			}else if(test == 'n'){
				n = test;
			}else if(test == 'j'){
				j = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (l == 'l' && a == 'a' && r == 'r' && n == 'n' && j == 'j'){
				printf("Parabens, acertou!!\nPalavra: Laranja\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int cavalox;
	void cavalo(int cavalox){
		
		char c,a,v,l,o;
		char test;
		int tentativas;
		
		tentativas = 0;
		c = '_';
		a = '_';
		v = '_';
		l = '_';
		o = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c \n", c,a,v,a,l,o);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'c'){
				c = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 'v'){
				v = test;
			}else if(test == 'l'){
				l = test;
			}else if(test == 'o'){
				o = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (c == 'c' && a == 'a' && v == 'v' && l == 'l' && o == 'o'){
				printf("Parabens, acertou!!\nPalavra: Cavalo\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int janelax;
	void janela(int janelax){
		
		char j,a,n,e,l;
		char test;
		int tentativas;
		
		tentativas = 0;
		j = '_';
		a = '_';
		n = '_';
		e = '_';
		l = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c \n", j,a,n,e,l,a);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'j'){
				j = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 'n'){
				n = test;
			}else if(test == 'e'){
				e = test;
			}else if(test == 'l'){
				l = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (j == 'j' && a == 'a' && n == 'n' && e == 'e' && l == 'l'){
				printf("Parabens, acertou!!\nPalavra: Janela\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int sapatox;
	void sapato(int sapatox){
		
		char s,a,p,t,o;
		char test;
		int tentativas;
		
		tentativas = 0;
		s = '_';
		a = '_';
		p = '_';
		t = '_';
		o = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c \n", s,a,p,a,t,o);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 's'){
				s = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 'p'){
				p = test;
			}else if(test == 't'){
				t = test;
			}else if(test == 'o'){
				o = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (s == 's' && a == 'a' && p == 'p' && t == 't' && o == 'o'){
				printf("Parabens, acertou!!\nPalavra: Sapato\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}
