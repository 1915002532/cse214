/* Scan N (take input N form user) valueS from user into an array
   Rakibul Hasan Emon
   ID.1915002532
*/

#include <stdio.h>
int main()
{
    int array[100];
    int a,N;
    scanf("%d",&N);
    if(N>100)
    {
        printf("Overflow");
    }
    else
    {
        for (a=0;a<N;a++)
        {
            scanf("%d",&array[a]);
        }
    }
    return 0;
}
