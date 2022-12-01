#include<stdio.h>
//#include<string.h>
//#include<math.h>

//void input_str()
//int shift_char()
int main()
{
    int size, n,res,i,d,k;

    //printf("%d\n",n);
    char arr[102];
    scanf("%s",arr);
    scanf("%d",&size);
    //printf("%s",arr);

    for(i=0; arr[i] != '\0'; i++)
    {
        k=0;
        d = arr[i];
        arr[i]=d+size;
        k=arr[i];
        if(k>122)
        {
            k=k-122;
            //printf("\nk-----------%d",k);
            n=96+k;
            arr[i]=n;
            //printf("\n n-----------%d",n);
        printf("%c",arr[i],arr[i]);
    }
    else
        printf("%c",arr[i],arr[i]);
    }
//    char z='z';
//    printf("\n\n%d",z);

    return 0;
}
