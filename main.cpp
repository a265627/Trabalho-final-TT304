#include <iostream>
#include <stdio.h>
int N;
int S;


thr_Hidrogenio(int N, int S){
	for(N=0; N<2; N++){
		printf("H");
	}
	return 0;
}

thr_Enxofre(int N, int S){
	for(N=0; N<1; N++){
		printf("S");
	}
	return 0;
}

thr_Oxigenio(int N, int S){
	for(N=0; N<4; N++){
	printf("O");
	}
	return 0;
}


int main() {
	
	int n, i;
	N = 0;
	S = 0;
	
	printf("defina o numero de linhas a ser impresso \n");
	scanf("%d", &n);
	
	for (i = n; i > 0; i--){
	
	if (S == 0){
		S--;
		thr_Hidrogenio(N, S);
		S++;
	}
	
	if (S == 0){
		S--;
		thr_Enxofre(N, S);
		S++;
	}
	
	if (S == 0){
		S--;
		thr_Oxigenio(N, S);
		S++;
	}
	
	printf("\n");
	
}

	
	
	return 0;
}
