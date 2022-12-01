#include<stdio.h>
float factt(float a)
{
    float ans=1,t=a;
    while(a!=0)
    {
        ans = ans *a;
        a--;
    }
    return ans;
}
float div_fact(float b, float c)
{
    float d, res,f;
    res = factt(b)/factt(c);
    return res;
}
int main(void)
{
    float n,m,res, result;
    scanf("%f%f",&n,&m);
    printf("%f",div_fact(n,m));
    return 0;
}
