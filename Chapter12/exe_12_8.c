#include <stdio.h>
#include <stdlib.h>

int * make_array(int elem, int val);
void show_array(const int ar[], int n);

int main(void)
{
    int * pa;
    int size;
    int value;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    while(size > 0)
    {
        printf("Enter the initialization value: ");
        scanf("%d", &value);
        pa = make_array(size, value);
        if(pa)
        {
            show_array(pa, size);
            free(pa);
        }
        printf("Enter the number of elements(<1 to quit): ");
        scanf("%d", &size);
    }

    printf("Done.\n");

    return 0;
}

int * make_array(int elem, int val)
{
    int * array = (int *)malloc(elem * sizeof(int));
    if(array == NULL)
        return NULL;
    int i;
    for(i = 0; i < elem; i++)
        array[i] = val;

    return array;
}

void show_array(const int ar[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        printf("%d ", ar[i]);

    printf("\n");
}
