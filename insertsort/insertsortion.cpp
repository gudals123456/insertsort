#include <stdio.h>

void swap(int * a, int * b);
void printarr(int * arr,int size);

void main() {

	printf("hello C world!\n");
	printf("Insertion sort\n\n");

	int arr[] = {34,27,35,1,23,19,85,67,4,10};
	
	printarr(arr,sizeof(arr)/4);
	
	for(int i = 0; i < sizeof(arr)/4 ; i++)
	{
		int tmp = arr[i];
		int j = 0;
		for(j = i; j>0; j--)
		{	
			if(tmp <= arr[j-1])
			{
				arr[j] = arr[j-1];
			}
			else
			{
				break;
			}
		}
		arr[j] = tmp;
		printarr(arr,sizeof(arr)/4);
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