#include <stdio.h>
/*Programa que lee una matriz muestra su traspuesta.
Fecha:6-9-2017
realizado por jair ramirez*/

int main() 
{
	int matriz [100][100];
	int f,c;
	printf("Ingrese filas:\n");
	scanf("%d",&f);
	printf("Ingrese Columnas:\n");
	scanf("%d",&c);
	printf("Ingrese Elementos de la Matriz\n");
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&matriz[i][j]);
		} 
	} 
	printf("\n"); 
	printf("Mostrando Matriz\n"); 
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d",matriz[i][j]);  
		} 
		printf("\n"); 
	}
	printf("\n"); 
	printf("Mostrando Matriz Traspuesta\n"); 
	for(int i=0;i<f;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d",matriz[j][i]);  
		} 
		printf("\n"); 
	}
	return 0;
}


