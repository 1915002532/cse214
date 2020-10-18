/* Print the array element in reverse order.Each elements should be separated by space ......
   Rakibul Hasan Emon
   ID.1915002532
*/
#include <stdio.h>
int main()
{

    int array[100]={1,2,3,4,5,6,7,8,9,10};
    int size = 10, a;

    for(a=0;a<size;a++)
    {
        printf("%d ",array[a]);
    }

    printf("\n");

    for(a=size-1;a>=0;a--)
    {
        printf("%d ",array[a]);
    }

    printf("\n");
    return 0;
}
