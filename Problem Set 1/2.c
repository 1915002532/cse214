/* Scan valueS from user into an array until end of file ....
   Rakibul Hasan Emon
   ID.1915002532
*/

#include <stdio.h>
int main()
{
    int array[100];
    int a = 0,b;
    while(scanf("%d",&array[a]) != EOF)
    {
        a++;
       if(a+1>100)
        {
            printf("Overflow");
            break;
        }


    }
   /* for (b=0;b<a;b++)
        {
            printf("%d\n",array[b]);
        }*/

    return 0;
}

