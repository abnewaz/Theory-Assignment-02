#include<stdio.h>
#include<string.h>
#include<math.h>
int check_presence(char a[], int n);
int main()
{
    int n,res;
    char input_str[52];
    scanf(" %s",input_str);
    if((check_presence(input_str,1) == 1) && (check_presence(input_str,7) == 1) &&(check_presence(input_str,9) == 1))
    {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}
int check_presence(char a[], int n)
{
    int i=0, j, m;
    while(a[i] != '\0')
    {
        if(a[i] == n+48)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
