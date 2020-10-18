  /* Search a value X (take input X from user) in the array and print index if X found in the array otherwise print "-1"  .....
   Rakibul Hasan Emon
   ID.1915002532
*/

#include <stdio.h>
int main()
{
    int array[100]={1,2,3,4,5,6,7,8,9,10};
    int size = 10, a , X;
    int Found=0;

    printf("Original Array : ");
    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }


    printf("\n\nInput the value of X for searching : ");
    scanf("%d",&X);

    for (a=0;a<size;a++)
    {
        if (array[a]==X)
        {
            Found=1;
            break;
        }
    }

    if(Found==1)
    {
        printf("\nindex = %d",a);
    }
    else
    {
        printf("\n-1");
    }

    printf("\n");
    return 0;
}



