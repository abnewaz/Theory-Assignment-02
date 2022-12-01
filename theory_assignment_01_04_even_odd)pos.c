#include<stdio.h>
#include<string.h>
#include<math.h>

int even_odd(int n,int k);
int main()
{
    int n,k,i,j,res;
    scanf("%d %d",&n,&k);
    res = even_odd(n,k);
    printf("\nThe %dth element in this sequence is %d.",k,res);
    return 0;
}
int even_odd(int n, int k)
{
    int i;
    int arr[n];
    int j=0;
    for(i=2; i<=n; i+=2)
    {
        arr[j]=i;
        printf("%d ",i);
        j++;
    }
    for(i=1; i<=n; i+=2)
    {
        arr[j]=i;
        printf("%d ",i);
        j++;
    }
    return arr[k-1];
}
