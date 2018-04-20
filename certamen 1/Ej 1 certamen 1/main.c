

#include <stdio.h>

int dif_maxmin(int*);
int main()
{
    int arr1[10]={2,36,56,41,27,35,89,67,90,47};
    //posiciones  0  1  2  3  4  5  6  7  8  9
    printf("%i\n",dif_maxmin(arr1));
	return 0;
}

int dif_maxmin(int* x)
{
	int i,y,res = 0;
	int aux = x[0];
	int aux2 = x[0];
	for(i=0;i<9;i++)
	{
	
	if(aux < x[i+1])
	  aux = x[i+1];
	
	}

	for(y=0;y<9;y++)
	{
	if(aux2 > x[y+1])
	aux2 = x[y+1];
	}

	res = aux-aux2;
 return res;
}



