#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
//    int n,res;
//    scanf("%d",&n);
//    printf("%d\n",n);

    int i=0;
while(i<10)
{
	printf("I am inside the loop");     //have to use "" (double quotation) symbol, instead of “” (this) symbol.
	i++;                                // The code did not had any increment syntax. So the value of i will never
                                        //... increase. As a result, the while loop inside the code will run the
                                       // ... ... print function forever. By adding i++ inside while loop, i could
                                       //... ... ... meet the while loop condition and it could end the loop.
}





    return 0;
}
