/* Scan values from user into an array until user is zero(0)...
   Rakibul Hasan Emon
   ID.1915002532
*/

#include <stdio.h>
int main()
{
    int array[100];
    int a = 0;
    while(scanf("%d",&array[a]) != EOF)
    {
        if (0 == array[a])
        {
            break;
        }
        else if (a>100)
        {
            printf("Overflow");
            break;
        }
        else
        {
            a++;
        }
    }
    return 0;
}

