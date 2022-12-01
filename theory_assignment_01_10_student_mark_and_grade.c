#include<stdio.h>
//#include<string.h>
//#include<math.h>
char grade(int marks)
{
    int m; char res;
    if(80<=marks && marks<=100)
    {
        res = 'A';
        return res;
    }
    else if(60<=marks && marks<=79)
    {
        res = 'B';
        return res;
    }
    else if(40<=marks && marks<=59)
    {
        res = 'C';
        return res;
    }
    else if(0<=marks && marks<=39)
    {
        res = 'F';
        return res;
    }
}
int main()
{
    int mark;
    scanf("%d",&mark);
    char m =grade(mark);
    printf("%c",m);
    return 0;
}
