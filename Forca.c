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
int carabinax;
	void carabina(int carabinax){
		
		char c,a,r,b,i,n;
		char test;
		int tentativas;
		
		tentativas = 0;
		c = '_';
		a = '_';
		r = '_';
		b = '_';
		i = '_';
		n = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c \n", c,a,r,a,b,i,n,a);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'c'){
				c = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 'r'){
				r = test;
			}else if(test == 'b'){
				b = test;
			}else if(test == 'i'){
				i = test;
			}else if(test == 'n'){
				n = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (c == 'c' && a == 'a' && r == 'r' && b == 'b' && i == 'i' && n == 'n'){
				printf("Parabens, acertou!!\nPalavra: Carabina\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int bicicletax;
	void bicicleta(int bicicletax){
		
		char b,i,c,l,e,t,a;
		char test;
		int tentativas;
		
		tentativas = 0;
		b = '_';
		i = '_';
		c = '_';
		l = '_';
		e = '_';
		t = '_';
		a = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c %c \n", b,i,c,i,c,l,e,t,a);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'b'){
				b = test;
			}else if(test == 'i'){
				i = test;
			}else if(test == 'c'){
				c = test;
			}else if(test == 'l'){
				l = test;
			}else if(test == 'e'){
				e = test;
			}else if(test == 't'){
				t = test;
			}else if(test == 'a'){
				a = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (b == 'b' && i == 'i' && c == 'c' && l == 'l' && e == 'e' && t == 't' && a == 'a'){
				printf("Parabens, acertou!!\nPalavra: Bicicleta\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int chocolatex;
	void chocolate(int chocolatex){
		
		char c,h,o,l,a,t,e;
		char test;
		int tentativas;
		
		tentativas = 0;
		c = '_';
		h = '_';
		o = '_';
		l = '_';
		a = '_';
		t = '_';
		e = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c %c \n", c,h,o,c,o,l,a,t,e);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'c'){
				c = test;
			}else if(test == 'h'){
				h = test;
			}else if(test == 'o'){
				o = test;
			}else if(test == 'l'){
				l = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 't'){
				t = test;
			}else if(test == 'e'){
				e = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (c == 'c' && h == 'h' && o == 'o' && l == 'l' && a == 'a' && t == 't' && e == 'e'){
				printf("Parabens, acertou!!\nPalavra: Chocolate\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int elefantex;
	void elefante(int elefantex){
		
		char e,l,f,a,n,t;
		char test;
		int tentativas;
		
		tentativas = 0;
		e = '_';
		l = '_';
		f = '_';
		a = '_';
		n = '_';
		t = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c \n", e,l,e,f,a,n,t,e);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'e'){
				e = test;
			}else if(test == 'l'){
				l = test;
			}else if(test == 'f'){
				f = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 'n'){
				n = test;
			}else if(test == 't'){
				t = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (e == 'e' && l == 'l' && f == 'f' && a == 'a' && n == 'n' && t == 't'){
				printf("Parabens, acertou!!\nPalavra: Elefante\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int girassolx;
	void girassol(int girassolx){
		
		char g,i,r,a,s,o,l;
		char test;
		int tentativas;
		
		tentativas = 0;
		g = '_';
		i = '_';
		r = '_';
		a = '_';
		s = '_';
		o = '_';
		l = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c \n", g,i,r,a,s,s,o,l);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'g'){
				g = test;
			}else if(test == 'i'){
				i = test;
			}else if(test == 'r'){
				r = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 's'){
				s = test;
			}else if(test == 'o'){
				o = test;
			}else if(test == 'l'){
				l = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (g == 'g' && i == 'i' && r == 'r' && a == 'a' && s == 's' && o == 'o' && l == 'l'){
				printf("Parabens, acertou!!\nPalavra: Girassol\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int borboletax;
	void borboleta(int borboletax){
		
		char b,o,r,l,e,t,a;
		char test;
		int tentativas;
		
		tentativas = 0;
		b = '_';
		o = '_';
		r = '_';
		l = '_';
		e = '_';
		t = '_';
		a = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c %c \n", b,o,r,b,o,l,e,t,a);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'b'){
				b = test;
			}else if(test == 'o'){
				o = test;
			}else if(test == 'r'){
				r = test;
			}else if(test == 'l'){
				l = test;
			}else if(test == 'e'){
				e = test;
			}else if(test == 't'){
				t = test;
			}else if(test == 'a'){
				a = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (b == 'b' && o == 'o' && r == 'r' && l == 'l' && e == 'e' && t == 't' && a == 'a'){
				printf("Parabens, acertou!!\nPalavra: Borboleta\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int tartarugax;
	void tartaruga(int tartarugax){
		
		char t,a,r,u,g;
		char test;
		int tentativas;
		
		tentativas = 0;
		t = '_';
		a = '_';
		r = '_';
		u = '_';
		g = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c %c \n", t,a,r,t,a,r,u,g,a);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 't'){
				t = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 'r'){
				r = test;
			}else if(test == 'u'){
				u = test;
			}else if(test == 'g'){
				g = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (t == 't' && a == 'a' && r == 'r' && u == 'u' && g == 'g'){
				printf("Parabens, acertou!!\nPalavra: Tartaruga\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

int caleidoscopiox;
	void caleidoscopio(int caleidoscopiox){
		
		char c,a,l,e,i,d,o,s,p;
		char test;
		int tentativas;
		
		tentativas = 0;
		c = '_';
		a = '_';
		l = '_';
		e = '_';
		i = '_';
		d = '_';
		o = '_';
		s = '_';
		p = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c %c %c %c %c %c \n", c,a,l,e,i,d,o,s,c,o,p,i,o);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'c'){
				c = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 'l'){
				l = test;
			}else if(test == 'e'){
				e = test;
			}else if(test == 'i'){
				i = test;
			}else if(test == 'd'){
				d = test;
			}else if(test == 'o'){
				o = test;
			}else if(test == 's'){
				s = test;
			}else if(test == 'p'){
				p = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (c == 'c' && a == 'a' && l == 'l' && e == 'e' && i == 'i' && d == 'd' && o == 'o' && s == 's' && p == 'p'){
				printf("Parabens, acertou!!\nPalavra: Caleidoscopio\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int computadorx;
	void computador(int computadorx){
		
		char c,o,m,p,u,t,a,d,r;
		char test;
		int tentativas;
		
		tentativas = 0;
		c = '_';
		o = '_';
		m = '_';
		p = '_';
		u = '_';
		t = '_';
		a = '_';
		d = '_';
		r = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c %c %c \n", c,o,m,p,u,t,a,d,o,r);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'c'){
				c = test;
			}else if(test == 'o'){
				o = test;
			}else if(test == 'm'){
				m = test;
			}else if(test == 'p'){
				p = test;
			}else if(test == 'u'){
				u = test;
			}else if(test == 't'){
				t = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 'd'){
				d = test;
			}else if(test == 'r'){
				r = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (c == 'c' && o == 'o' && m == 'm' && p == 'p' && u == 'u' && t == 't' && a == 'a' && d == 'd' && r == 'r'){
				printf("Parabens, acertou!!\nPalavra: Computador\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int candelabrox;
	void candelabro(int candelabrox){
		
		char c,a,n,d,e,l,b,r,o;
		char test;
		int tentativas;
		
		tentativas = 0;
		c = '_';
		a = '_';
		n = '_';
		d = '_';
		e = '_';
		l = '_';
		b = '_';
		r = '_';
		o = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c %c %c \n", c,a,n,d,e,l,a,b,r,o);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'c'){
				c = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 'n'){
				n = test;
			}else if(test == 'd'){
				d = test;
			}else if(test == 'e'){
				e = test;
			}else if(test == 'l'){
				l = test;
			}else if(test == 'b'){
				b = test;
			}else if(test == 'r'){
				r = test;
			}else if(test == 'o'){
				o = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (c == 'c' && a == 'a' && n == 'n' && d == 'd' && e == 'e' && l == 'l' && b == 'b' && r == 'r' && o == 'o'){
				printf("Parabens, acertou!!\nPalavra: Candelabro\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int paralelepipedox;
	void paralelepipedo(int paralelepipedox){
		
		char p,a,r,l,e,i,d,o;
		char test;
		int tentativas;
		
		tentativas = 0;
		p = '_';
		a = '_';
		r = '_';
		l = '_';
		e = '_';
		i = '_';
		d = '_';
		o = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c %c %c %c %c %c %c \n", p,a,r,a,l,e,l,e,p,i,p,e,d,o);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'p'){
				p = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 'r'){
				r = test;
			}else if(test == 'l'){
				l = test;
			}else if(test == 'e'){
				e = test;
			}else if(test == 'i'){
				i = test;
			}else if(test == 'd'){
				d = test;
			}else if(test == 'o'){
				o = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (p == 'p' && a == 'a' && r == 'r' && l == 'l' && e == 'e' && i == 'i' && d == 'd' && o == 'o'){
				printf("Parabens, acertou!!\nPalavra: Paralelepipedo\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int hipopotamox;
	void hipopotamo(int hipopotamox){
		
		char h,i,p,o,t,a,m;
		char test;
		int tentativas;
		
		tentativas = 0;
		h = '_';
		i = '_';
		p = '_';
		o = '_';
		t = '_';
		a = '_';
		m = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c %c %c \n", h,i,p,o,p,o,t,a,m,o);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'h'){
				h = test;
			}else if(test == 'i'){
				i = test;
			}else if(test == 'p'){
				p = test;
			}else if(test == 'o'){
				o = test;
			}else if(test == 't'){
				t = test;
			}else if(test == 'a'){
				a = test;
			}else if(test == 'm'){
				m = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (h == 'h' && i == 'i' && p == 'p' && o == 'o' && t == 't' && a == 'a' && m == 'm'){
				printf("Parabens, acertou!!\nPalavra: Hipopotamo\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int ornitorrincox;
	void ornitorrinco(int ornitorrincox){
		
		char o,r,n,i,t,c;
		char test;
		int tentativas;
		
		tentativas = 0;
		o = '_';
		r = '_';
		n = '_';
		i = '_';
		t = '_';
		c = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c %c %c %c %c \n", o,r,n,i,t,o,r,r,i,n,c,o);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'o'){
				o = test;
			}else if(test == 'r'){
				r = test;
			}else if(test == 'n'){
				n = test;
			}else if(test == 'i'){
				i = test;
			}else if(test == 't'){
				t = test;
			}else if(test == 'c'){
				c = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (o == 'o' && r == 'r' && n == 'n' && i == 'i' && t == 't' && c == 'c'){
				printf("Parabens, acertou!!\nPalavra: Ornitorrinco\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

	int desenvolvimentox;
	void desenvolvimento(int desenvolvimentox){
		
		char d,e,s,n,v,o,l,i,m,t;
		char test;
		int tentativas;
		
		tentativas = 0;
		d = '_';
		e = '_';
		s = '_';
		n = '_';
		v = '_';
		o = '_';
		l = '_';
		i = '_';
		m = '_';
		t = '_';
		
		printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
		
		while (1) {
			printf("A palavra e : %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c \n", d,e,s,e,n,v,o,l,v,i,m,e,n,t,o);
			printf("Adivinhe uma letra: ");
			scanf(" %c", &test);
			if(test == 'd'){
				d = test;
			}else if(test == 'e'){
				e = test;
			}else if(test == 's'){
				s = test;
			}else if(test == 'n'){
				n = test;
			}else if(test == 'v'){
				v = test;
			}else if(test == 'o'){
				o = test;
			}else if(test == 'l'){
				l = test;
			}else if(test == 'i'){
				i = test;
			}else if(test == 'm'){
				m = test;
			}else if(test == 't'){
				t = test;
			}else{
				tentativas = tentativas + 1;
				printf("Nao tem a letra, contagem de tentativas erradas: %d \n",tentativas);
			}
			
			if (d == 'd' && e == 'e' && s == 's' && n == 'n' && v == 'v' && o == 'o' && l == 'l' && i == 'i' && m == 'm' && t == 't'){
				printf("Parabens, acertou!!\nPalavra: Desenvolvimento\nTotal de erros: %d\n", tentativas);
				break;
			}
			if (tentativas == 10){
				printf("Voce chegou a 10 tentativas erradas!\n ...................FIM DE JOGO...................\n");
				break;
			}
		}
	}

void limpar_entrada(){
	int c;
	wile ((c = getchar()) != '\n' && c != EOF0);
}

int main() {
	int forca,inicio,denovo;
	
	printf("...................Jogo da Forca...................\nAcerte a palavra advinhando 1 letra por vez\nLimite de tentativas:10\n");
	while (1) {
		printf("Iniciar jogo? \nselecione a alternativa: \n1.sim\n2.nao\n");
		inicio = 0;
		scanf("%d",&inicio);
		limpar_entrada();
		if (inicio == 1 || inicio == 2){
			break;
		}
		printf("Opcao invalida, tente novamente\n");
	}
	
	if (inicio == 2){
		printf("Beleza entao vacilao\n");
		return 0;
	}
	
	while (1) {
		while (1) {
			printf("Niveis: \n1.Facil\n2.Facil\n3.Facil\n4.Facil\n5.Facil\n6.Facil\n7.Facil\n8.Medio\n9.Medio\n10.Medio\n11.Medio\n12.Medio\n13.Medio\n14.Medio\n15.Dificil\n16.Dificil\n17.Dificil\n18.Dificil\n19.Dificil\n20.Dificil\n21.Dificil\n");
			forca = 0;
			scanf("%d",&forca);
			limpar_entrada();
			if (forca >= 1 && forca <= 21){
				break;
			}
			printf("Opcao invalida, tente novamente\n");
		}
		
		switch(forca){
			case 1:
				abacaxi(abacax);
				break;
			case 2:
				banana(bananax);
				break;
			case 3:
				armadura(armadurax);
				break;
			case 4:
				laranja(laranjax);
				break;
			case 5:
				cavalo(cavalox);
				break;
			case 6:
				janela(janelax);
				break;
			case 7:
				sapato(sapatox);
				break;
			case 8:
				carabina(carabinax);
				break;
			case 9:
				bicicleta(bicicletax);
				break;
			case 10:
				chocolate(chocolatex);
				break;
			case 11:
				elefante(elefantex);
				break;
			case 12:
				girassol(girassolx);
				break;
			case 13:
				borboleta(borboletax);
				break;
			case 14:
				tartaruga(tartarugax);
				break;
			case 15:
				caleidoscopio(caleidoscopiox);
				break;
			case 16:
				computador(computadorx);
				break;
			case 17:
				candelabro(candelabrox);
				break;
			case 18:
				paralelepipedo(paralelepipedox);
				break;
			case 19:
				hipopotamo(hipopotamox);
				break;
			case 20:
				ornitorrinco(ornitorrincox);
				break;
			case 21:
				desenvolvimento(desenvolvimentox);
				break;
		}
		limpar_entrada();
		
		while (1) {
			printf("\nJogar novamente? \n1.sim\n2.nao\n");
			denovo = 0;
			scanf("%d",&denovo);
			limpar_entrada();
			if (denovo == 1 || denovo == 2){
				break;
			}
		}
		if (denovo == 2){
			break;
		}
	}
	
	printf("Fim, obrigado por jogar!\n");
	return 0;
}
