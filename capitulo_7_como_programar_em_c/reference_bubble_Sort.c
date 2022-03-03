#include<stdio.h> 
#define SIZE 10

void bubbleSort(int * const array, const int size);

int main(void)
{
	int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	
	int i;
	
	printf("Dice's itens in original order\n");
	
	for(i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	
	bubbleSort(a, SIZE);
	
	printf("\nDice's itens in crescent order\n");
	
	for(i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	
	printf("\n");
	return 0;
}

void bubbleSort(int * const array, const int size)
{
	void swap(int *element1Ptr, int *element2Ptr);
	int pass;
	int j;

	for(pass = 0; pass < SIZE -1; pass++)
	{
		for(j = 0;j < SIZE -1;j++)
		{
			if(array[j] > array[j + 1])
			{
				swap(&array[j],&array[j + 1]);
			}
		}
	}
	
}

void swap(int *element1Ptr, int *element2Ptr)
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}
