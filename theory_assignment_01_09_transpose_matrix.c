#include<stdio.h>
//#include<string.h>
//#include<math.h>
void input_mat(int ara[][5], int sz)
{
    int i,j;
    for(i=0; i<sz; i++)
    {
        for(j=0; j<sz; j++)
        {
            scanf("%d",&ara[i][j]);
        }
        //printf("\n");
    }
}
void print_mat(int ara[][5], int sz)
{
    int i,j;
    for(i=0; i<sz; i++)
    {
        for(j=0; j<sz; j++)
        {
            printf("%d\t",ara[i][j]);
        }
        printf("\n");
    }
}
void trans_mat(int ara[][5],int sz)
{
    int i,j;
    for(i=0; i<sz; i++)                     // 00   01  02
    {                                       // 10   11  12
        for(j=0; j<sz; j++)                 // 20   21  22
        {
            printf("%d\t",ara[j][i]);
        }
        printf("\n");
    }

}
int main()
{
    int n=3,res;
    //scanf("%d",&n);
    int mat_tr[n][n];

    input_mat(mat_tr,n);
    printf("\n");
    print_mat(mat_tr,n);
    printf("\n");
    trans_mat(mat_tr,n);


    return 0;
}
