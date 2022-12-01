#include<stdio.h>
#include<string.h>
char transform(char a);
int main()
{
    char case_comb_str[102];
    scanf("%s",case_comb_str);
    int i=0;
    while(case_comb_str[i] != '\0')
    {
        case_comb_str[i]=transform(case_comb_str[i]);
        i++;
    }
    printf("%s",case_comb_str);
    return 0;
}
char transform(char a)
{
    if(a<97)
    {
        return a+32;
    }
    else
    {
        return a-32;
    }
}
