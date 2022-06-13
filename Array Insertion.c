#include<stdio.h>
int main()
{
    int array[196];
    int i,size,number,position;
    printf("Enter The Array Size: \n");
    scanf("%d",&size);
    printf("Enter Array Element: \n");
    for(i=0;i<size;i++)
    {
        printf("Array [%d] = ",i);
        scanf("%d",&array[i]);
    }
    printf("Enter New Element To Insert: \n");
    scanf("%d",&number);
    printf("Enter The Position:\n");
    scanf("%d",&position);
    for(i=size;i>=position;i--)
    {
        array[i]=array[i-1];
    }
    array[position-1]=number;
    size++;
    printf("Array Element After Insertion:\n");
    for(i=0;i<size;i++)
    {
        printf("Array [%d] = %d\n",i,array[i]);
    }
    return 0;
}
