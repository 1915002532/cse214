/* Insert any value at tenth index of the array  and print the whole array .....
   Rakibul Hasan Emon
   ID.1915002532
*/

#include <stdio.h>
int main()
{
    int array[100]={1,2,3,4,5,6,7,8,9,10,11};
    int size = 11, a;

    printf("Original Array     : ");

    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }
    array[10]=214;

    printf("\n\nAfter insert value : ");
    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }

      printf("\n");
    return 0;
}
