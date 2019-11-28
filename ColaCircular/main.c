#include <stdio.h>
#include <stdlib.h>
#include "Elem.h"
#include "Circular.h"

void carrusel(Circular c){
	while(!esnuevaC(c)){
		ImpElem(primeroC(c));
		c=desformarC(c);
		//getchar();
	}
}

int main(){
	Circular c= nuevaC();
	int i;
	for(i=1;i<=10;i++){
		c=formarC(c,i);
	}
	carrusel(c);
	return 0;
}


