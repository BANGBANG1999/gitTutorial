#include<stdio.h>

void display(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n", arr[i]);
    }
}
void deletion(int arr[], int index, int size)
{
    int j;
    for(j=index; j<size; j++)
    {
        arr[j] = arr[j+1];
    }
}
int main()
{
    int arr[100] = {1,2,3,3,4,5,5};
    int index = 5, size = 7;
    printf("Array before deletion : \n");
    display(arr,size);
    printf("Array after deletion : \n");
    deletion(arr,index,size);
    size -= 1;
    display(arr,size);
}
