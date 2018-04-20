
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//se dan tres opciones para la funcion, la primera es sin usar la libreria strin.h, y las otras dos van en incremento de especificidad
char* primera_opcion(char*);//DECLARACION DE LAS FUNCIONES
char* segunda_opcion(char*);
char* tercera_opcion(char*);


int main(int argc, char *argv[])
{
	char* derecho = malloc(50*sizeof(char));//SE APARTA MEMORIA PARA GUARDAR PALABRA INGRESADA
	char* reves = malloc(50*sizeof(char)); //vector que guardara la palabra invertida
	printf("Ingrese una palabra: ");//PETICION PARA INGRESAR PALABRA POR EL USUARIO
	scanf("%s",derecho);

	reves = primera_opcion(derecho); //SE LLAMA A LA FUNCION
	//reves = segunda_opcion(derecho);
	//reves = tercera_opcion(derecho);

	printf("la palabra ingresada es %s \n", reves); //SE IMPRIME LA PALABRA INVERTIDA

    free(derecho);//liberacion de memoria apartada con malloc
	free(reves);
    return 0;
}


char* primera_opcion(char* derecho)
{
	char* vuelta = malloc(50*sizeof(char));//SE APARTA MEMORIA PARA LA PALABRA INVERTIDA
	int i = 0;
	int inicio = 0;
	int final;
	while(derecho[i]!= 0)//SE CUENTA CUANTOS CARACTERES TIENE LA PALABRA INGRESADA
	{
		i++;
	}

	for(final = i - 1;final>=0; final--)
	{
		vuelta[inicio]=derecho[final];//DE ATRAS HACIA DELANTE SE COPIA CADA CARCTER DE LA PALABRA EN EL NUEVO VECTOR
		inicio++;
	}
	return vuelta;//SE DEVUELVE LA DIRECCION DEL VECTOR INVERTIDO

}

char* segunda_opcion(char* derecho)
{
	char* vuelta = malloc(50*sizeof(char));
	int i = 0;
	int j = 0;

	printf("%d\n",strlen(derecho));

	for(i=strlen(derecho)-1;i>=0; i--)//strlen() DEVUELVE EL LARGO DE UNA CADENA DE CARACTERES
	{
		vuelta[j]=derecho[i];//DE ATRAS HACIA DELANTE SE COPIA CADA CARACTER DE LA PALABRA EN EL NUEVO VECTOR
		j++;
	}
	return vuelta;//SE DEVUELVE LA DIRECCION DEL VECTOR INVERTIDO
}

char* tercera_opcion(char* derecho)
{
	return _strrev(derecho);//LA FUNCION _strrev() INVIERTE UNA CADENA DE CARACTERES
}
