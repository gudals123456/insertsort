#include <stdio.h>

void swap(int * a, int * b);
void printarr(int * arr,int size);

void main() {

	printf("hello C world!\n");
	printf("Insert sort\n\n");

	int arr[] = {34,27,35,1,23,19,85,67,4,10};
	
	printarr(arr,sizeof(arr)/4);
	
	for(int i = 0; i<sizeof(arr)/4 - 1; i++)
	{
		for(int j = i+1; j>0; j--)
		{
			if(arr[j-1] >= arr[j])
			{
				swap(&arr[j-1],&arr[j]);
				printarr(arr,sizeof(arr)/4);
			}
			else
			{
				break;
			}
		}
		printf("\n");
	}

	printarr(arr,sizeof(arr)/4);

}
void swap(int * a, int * b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;

}

void printarr(int * arr, int size)
{
	printf("arr = {");
	for(int i = 0; i<size; i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("}\n");
}