#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[min_idx])
                min_idx = i;
        }
        swap(&array[min_idx], &array[step]);
    }
}
void printArray(int array[], int size) {
	for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
	}
	printf("\n");
}

int main() {
	int random;
    int sort[7] ;
	int length = sizeof(sort) / sizeof(sort[0]);
	for (int i = 0; i < length; i++)
	{
		random=rand()%1234;
		sort[i]=random;
	}
	
    
    selectionSort(sort, length);
	printArray(sort, length);
    return 0;
}
