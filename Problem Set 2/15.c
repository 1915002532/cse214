/* Delete a value X (take input X from user) from the array shift all other value to left.
   If X is not present in the given array print "Element Not Found".
   Detyte all the occurrence of the value and print the whole array .....
   Rakibul Hasan Emon
   ID.1915002532
*/

#include <stdio.h>
int main()
{
    int array[100]={1,2,3,4,5,6,7,8,9,10};
    int size = 10, a ,b , X;
    int flag=0;
    printf("Original Array : ");
    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }

    printf("\n\nInput the value of X for deleting : ");
    scanf("%d",&X);

    for(b=0;b<size;b++)
    {
       if(X==array[b])
       {

        for(a=b;a<size;a++)
            {
                array[a]=array[a+1];
            }

            size--;
            flag++;
            b++;
       }
    }



    if(flag==0)
    {
        printf("\nElement Not Found");
    }

    else
    {
            printf("\n");
            for(a=0;a<size;a++)
        {
            printf("%d ",array[a]);
        }

    }

    printf("\n");
    return 0;
}




