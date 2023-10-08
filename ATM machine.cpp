
#include <stdio.h>

int main()
{
    int amount,h,f ;
    printf("Enter the amount value ");
    scanf("%d",&amount);
    if (amount%100==0)
    {
        if(amount>20000)
        {
            printf("Enter amount of lesser denomination ");
        }
        else if (amount<= 500)
        printf("%dhundereds\n",amount/100);
        else
        {
            h=5;
            f=(amount-500)/500;
            h=h+((amount-500)%500)/100;
            if(h>5)
            {
                f=f+1;
                h=h-5;
            }
            printf("500s :%d\t 100s :%d\n",f,h);
        }
    }
    else 
    {
        printf("Enter your amount in the multiples of 100s");
    }
    return 0;
}
