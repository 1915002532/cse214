/* Update Kth (take input K from user) index with the value X (take input X from user) and print the whole array .....
   Rakibul Hasan Emon
   ID.1915002532
*/

#include <stdio.h>
int main()
{
    int array[100]={1,2,3,4,5,6,7,8,9,10};
    int size = 10, a , X;
    int k;
    printf("Original Array : ");
    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }

    printf("\n\nSelect the index position of kth (0 to 9) : ");
    scanf("%d",&k);

     printf("\nInput the value of X : ");
    scanf("%d",&X);

    array[k]=X;

    printf("\nAfter Update   : ");
    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }

    printf("\n");
    return 0;
}

