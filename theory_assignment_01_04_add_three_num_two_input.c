#include<stdio.h>
#include<string.h>
#include<math.h>

int add_three_nums(int a, int b, int c);
int main()
{
    int n,m,res;
    scanf("%d %d",&n,&m);
    //printf("%d\n",n);
    res= add_three_nums(n,m,0);
    printf("%d",res);


    return 0;
}
int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}

