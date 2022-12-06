#include<stdio.h>
#include<string.h>

int main()
{
    char s[105];
    scanf("%s",s);
    int u_c=0,l_c=0;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            u_c++;
        else
            l_c++;
    }
    if(u_c>l_c)
    {
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]>='a' && s[i]<='z')
                s[i]-=32;
        }

    }
    else
    {
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                s[i]+=32;
        }
    }
    printf("%s",s);
}

