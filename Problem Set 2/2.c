/* Insert a value X [take input X from user] in the array at the end of currently stored elements .....
   Rakibul Hasan Emon
   ID.1915002532
*/

#include <stdio.h>
int main()
{
    int array[100]={1,2,3,4,5,6,7,8,9,10},n,a,b,X,size = 10;

   /* for scan an array

   printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter elements of this array : \n");
    for(a=0;a<n;a++)
    {
        printf("Element : %d--",a);
        scanf("%d",&array[a]);
    }*/

     printf("Original Array : ");
     for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }

    printf("\n\nInput value be inserted : ");
    scanf("%d",&X);

    printf("\nInput the position where the value to be inserted  (0 to 9) : ");
    scanf("%d",&b);

    printf("\n");

     /* when scan an array
     printf("   Original Array : ");
    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }*/

    array[b]=X;
   // printf("\n");

    printf("After insert value : ");
    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }

    printf("\n");

    return 0;
}
