// accept string from user and copy it into another string in opposite format
#include<stdio.h>

void strcpyToggleX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;
        }
        else if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20]; 

    printf("Enter String\n");
    scanf("%[^'\n']s",Arr);

    strcpyToggleX(Arr,Brr);    // strcpyX(100,200);

    printf("Copied String in opposite case is : %s\n",Brr);
    printf("Orignal string is : %s\n",Arr);

    return 0;
}