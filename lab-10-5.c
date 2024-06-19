#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50]; char s2[50]; int i; int j;

    printf("Enter the value:\n");
    gets(s2);

    int x=strlen(s2);


    for(j=0;s1[j]='\0';j++);

        for(i=x-1;i>=0;i--,j++)
        {
            s1[j]=s2[i];
        }
        s1[j]='\0';

    printf("output : %s",s1);


return 0;
}
