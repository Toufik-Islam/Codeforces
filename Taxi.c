#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n,x,count,rem=0;
    scanf("%d",&n);
    int *freq= (int*) calloc(5,sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        *(freq+x)+=1;
    }
    count=*(freq+4)+(*(freq+2))/2+*(freq+3);
    rem=*(freq+1)-*(freq+3);
    if(rem<0)
        rem=0;
    if(*(freq+2)%2==1)
        rem+=2;

    count+=(rem+3)/4;

    printf("%d",count);

    free(freq);
    return 0;
}
