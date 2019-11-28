typedef struct Nodo{
	Elem dato;
	struct Nodo *sig;
}*Circular;

Circular nuevaC(){
	return NULL;
}

int esnuevaC(Circular c){
	return c==nuevaC();
}

Circular formarC(Circular c, Elem e){
	Circular t= (Circular) malloc(sizeof(struct Nodo));
	t->dato=e;
	if(esnuevaC(c)){
		c=t;
		c->sig=c;
	}else{
		t->sig=c->sig;
		c->sig=t;
	}
	return t;
}

Elem primeroC(Circular c){
	return c->sig->dato;
}

Circular desformarC(Circular c){
	Circular t;
	t=c->sig;
	if(c==c->sig){
		free(t);
		return nuevaC();
	}else{
		c->sig=c->sig->sig;
		free(t);
		return c;
	}
}

//Especial de Circular
Circular rotaC(Circular c){
	return c->sig;
}
