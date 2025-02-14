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
	while(r != 0){
		D = d;
		d = r;
		c = D/d;
		r = D%d;
	}
	printf("El mcd de %d y %d es %d \n", Dorig, dorig, d);

return 0;
}
