#include<stdio.h>
#include<string.h>

int main()
{
    char s[105],rs[105];
    scanf("%s %s",s,rs);
    int i,j=strlen(s)-1;
    for(i=0; i<strlen(s); i++,j--)
    {
        if(s[i]!=rs[j])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
