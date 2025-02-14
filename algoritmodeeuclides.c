#include <stdio.h>
int main (){
	int D, Dorig, d, dorig, c, r;
	printf("ALGORÍTMO DE EUCLIDES \n Introduzca dos números: \n");
	scanf("%d", &D);
	scanf("%d", &d);
	Dorig = D;
	dorig = d;
	c = D/d;
	r = D%d;

	if (Dorig < dorig){
		printf("Eres un cretino \n");
	}

	while(r != 0){
		D = d;
		d = r;
		c = D/d;
		r = D%d;
	}

	if (d==1){
		printf("No existe un mcd entre %d y %d", Dorig, dorig);
	}
	else{
		printf("El mcd de %d y %d es %d \n", Dorig, dorig, d);
	}

	
return 0;
}
