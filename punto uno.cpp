#include <stdio.h>
/*Programa que muestra matriz identidad.
6-9-2017
realizado por jair ramirez*/
int main()
{
	int matriz[6][6];
	int i,j; 
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			matriz[i][j];
		} 
	} 
	printf("Mostrar Matriz:\n");
	
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			if(i==j)
			{
				matriz[i][j]=1;
			}else
			{
				matriz[i][j]=0;
			} 
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	} 
	return 0;
}





