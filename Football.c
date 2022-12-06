#include<stdio.h>
#include<string.h>
int main()
{
    char s[2000];
    scanf("%s",s);
    int count=1;
    for(int i=0; i<strlen(s)-1; i++)
    {

        if(s[i]==s[i+1])
        {
            count++;
            if(count==7)
            {
                printf("YES");
                return 0;
            }
        }
        else
            count=1;
    }
    printf("NO");
}
//00100110111111101


