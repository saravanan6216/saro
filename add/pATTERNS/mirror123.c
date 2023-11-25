// Online C compiler to run C program online
/*
1     1
12   21
123 321
1234321
*/



#include <stdio.h>

int main() {
    int i,j,n=3,l,k;
    for(i=0;i<=n;i++)
    {
      k=0;  
        for(j=-n;j<=n;j++)
        {
            if((-(n-i)<j) && j<(n-i))
            {
             printf(" ");
            }
            else if(j<=0)
            {
                 k++;
             printf("%d",k);
             if(j==0) k--;
            
            }
            else
            {
               
                printf("%d",k);
                  k--;
            
            }
        }
        printf("\n");
    }
    printf("Hello world");

    return 0;
}
