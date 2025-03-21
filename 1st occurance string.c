#include <stdio.h>
int main()
{
    char a[10],ch;
    gets(a);
    scanf("%c",&ch);
    int i,f=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==ch)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("%d",i);
    }
    else
    {
        printf("not");
    }
}
