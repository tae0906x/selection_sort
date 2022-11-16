#include<stdio.h>
int main()
{
	int i, j;
	int max_idx = 0;

	int temp = 0;
	int n;
	int arr[5] = { 3, 5, 1, 4, 2 };
	for (i = 0; i < 5; i++) {
		int max = 100;
		for (j = i; j < 5; j++) {
			if (max > arr[j]) {
			max = arr[j];
			max_idx = j; 
			}
			temp = arr[i];
			arr[i] = arr[max_idx];
			arr[max_idx] = temp;
		}
	}
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
} 