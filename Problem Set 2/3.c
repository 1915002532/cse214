 /*  Insert a value X (take input X from user) in the array at the third(3th) index and shift all other value to right.
     And print the whole array ......
     Rakibul Hasan Emon
     ID.1915002532
*/

#include <stdio.h>
int main()
{
    int array[100]={1,2,3,4,5,6,7,8,9,10};
    int size = 10, a , X;
    int n=3;
    printf("Original Array : ");
    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }
    printf("\n\nInput the value of X : ");
    scanf("%d",&X);

    printf("\nAfter insert value : ");
    for(a=size;a>=n;a--)
    {
       array[a] = array[a-1];
    }

    size++;
    array[n]=X;

    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }

     printf("\n");

    return 0;


}

