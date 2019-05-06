#include<stdio.h>
#include<stdlib.h>
void poin_mat(int *mat , int rows  ,int  columns );
int main()
{
	int i , j , rows , columns;
	scanf("%d%d",&rows,&columns);
	int * mat = (int *)malloc(sizeof(int) * rows * columns);
	if(rows!=columns)
	{
		printf("Enter equal number of rows  and columns");
	}
	else
	{
		for(i=0;i<rows;i++)
		{
			for(j=0;j<columns;j++)
				scanf("%d",&(*((mat+i*columns)+j)));
		}

		poin_mat(mat,rows,columns);
	
	}
}		
void poin_mat(int *mat, int rows , int cols)
{
	int i , j ;		

	
		for(int i=0;i<rows;i++){
			printf("\n");
			for(int j=0;j<cols;j++){
				//printf("%d",*((mat+i*cols)+j));
				if(i > j){
					if((*((mat+i*cols) + j)) == 0){
						printf("matrix is upper triangular\n");
						return;
					}
				}
			}
		}
		printf("matrix is not upper triangular\n");
		return;
}
