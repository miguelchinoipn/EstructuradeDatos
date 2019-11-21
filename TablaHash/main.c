#include"hash.h"

int
main(void)
{
	struct TablaHash *tabla = NULL;

	AgregarDato(&tabla,"Hola");
	AgregarDato(&tabla,"Mundo");
	AgregarDato(&tabla,"Progra");
	AgregarDato(&tabla,"argorP");

	//ImprimirTabla(tabla);

	BuscarDato(tabla,"argorP");

	EliminarDato(&tabla,"Progra");
	BuscarDato(tabla,"Progra");

return 0;
}