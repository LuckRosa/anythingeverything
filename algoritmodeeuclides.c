#include <stdio.h>
int main (){
	int D, d, c, r;
	printf("ALGORÍTMO DE EUCLIDES \n Introduzca dos números: \n");
	scanf("%d", &D);
	scanf("%d", &d);
	c = D/d;
	r = D%d;
	while(r != 0){
		D = d;
		d = r;
		c = D/d;
		r = D%d;
	}
	printf("El mcd de %d y %d es", D, d);

return 0;
}
