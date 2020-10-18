/* Delete a value from after Kth index (take input K from user) from the array shift all other value to left. and print the whole array .....
   Rakibul Hasan Emon
   ID.1915002532
*/

#include <stdio.h>
int main()
{
    int array[100]={1,2,3,4,5,6,7,8,9,10};
    int size = 10, a ;
    int k;
    printf("Original Array : ");
    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }

    printf("\n\nEnter deletig index k (0 to 9) : ");
    scanf("%d",&k);

    for(a=k+1;a<size;a++)
    {
        array[a]=array[a+1];
    }
    size--;

    printf("\n\nAfter delete  : ");
    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }

    printf("\n");
    return 0;
}


