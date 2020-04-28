/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>

typedef int element;
int size;

void SelectionSort(int a[], int size)
{
    int i, j, t, min;

    element temp;

    printf("\n정렬한 원소:");


    for (t = 0; t < size; t++) printf("%d", a[t]);

    printf("\n===선택정렬 수행===\n");
    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++) {

            if (a[j] < a[min]) min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

        printf("\n%d단계", i + 1);
        for (t = 0; t < size; t++)
            printf("%3d", a[t]);
    }
}
        
 
void main()
{
    element list[7] = { 6,2,1,3,5,4,7 };
    size = 7;
    SelectionSort(list, size);
	
    getchar();
}