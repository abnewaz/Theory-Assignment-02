#include<stdio.h>
#include<string.h>
#include<math.h>
void input_arr(int num_arr[], int sz)
{
    int i,r;
    for(i=0; i<sz; i++)
    {
        scanf("%d",&num_arr[i]);
    }
    //return 0;
}
void print_arr(int num_arr[], int sz)
{
    int i;
    for(i=0; i<sz; i++)
    {
        printf("%d ",num_arr[i]);
    }
    //return 0;
}

int find_median(int sort_dig[],int sz)
//,)
{
    int i, j=0, res, temp;


    for(j=0; j<sz; j++)
    {
        for(i=0; i<sz-1; i++)         // 4, 13, 3, 2, 67      => 4,3,2,13,67
    {                           // 0  1  2   3   4      =>
        if(sort_dig[i]>sort_dig[i+1])
        {
            temp = 0;
            temp = sort_dig[i];
            sort_dig[i]=sort_dig[i+1];
            sort_dig[i+1]=temp;
            //swap(sort_dig[i],sort_dig[i+1]);
        }
    }
    }
   // print_arr(sort_dig,sz);

    if(sz%2 == 0)
    {
        int e,g,f;
        e= sz/2;
        //f=e+1;
        g = sort_dig[e] + sort_dig[e-1];
        res = g/2;
        return res;
    }
    else
    {
        int e = sz/2;
        res = sort_dig[e];
        return res;
    }
    //return 0;
}

int main()
{
    int size,res,med;
    scanf("%d",&size);
    //printf("%d\n",n);
    int arr[size];
    input_arr(arr,size);
    //print_arr(arr, size);
    //med =
    med =find_median(arr,size);

    printf("\n%d",med);

    return 0;
}
