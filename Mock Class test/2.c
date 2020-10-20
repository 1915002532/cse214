 /*  Mock Class Test Examination
     Summer 2020
     Rakibul Hasan Emon
     ID.1915002532
     CSE214 Data Structure Laboratory
     20-10-2020
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
    printf("\n\nInput the value of X : ");
    scanf("%d",&X);

    printf("\nSelect the index position of kth (0 to 9) : ");
    scanf("%d",&k);

    printf("\nAfter insert value : ");

    for(a=size;a>=k;a--)
    {
       array[a] = array[a-1];
    }
    size++;
    array[k]=X;

    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }

    printf("\n\n");

    printf("Reverse array : ");
      for(a=size-1;a>=0;a--)
    {
        printf("%d ",array[a]);
    }

    printf("\n");
    return 0;
}


