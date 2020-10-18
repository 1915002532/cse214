/* Update fifth (5^th) index with another value and print the whole array .....
   Rakibul Hasan Emon
   ID.1915002532
*/

#include <stdio.h>
int main()
{
    int array[100]={1,2,3,4,5,6,7,8,9,10};
    int size = 10, a , x=214, n=5;
    int k;
    printf("Original Array : ");
    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }

    array[n]=x;

    printf("\n\nAfter Update   : ");
    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }

    printf("\n");
    return 0;
}
