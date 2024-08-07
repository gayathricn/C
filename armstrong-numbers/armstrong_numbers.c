#include "armstrong_numbers.h"
#include<stdio.h>
#include<math.h>

bool is_armstrong_number(int n)
    {
    int sum=0,d,num,a=0;
    num=n;
    if(n==0)
        return true;
    else
    {
                while(n>0)
            {
            n=n/10;
            a++;
            }
        n=num;
        do{
            d=n%10;  
            sum=sum+pow(d,a);
            n=n/10;
            }while(n>0);
        if(sum==num)
            return true;
        else
            return false;
        }
        
    }
/*int main()
    {
    //int n;
    is_armstrong_number(n);
    return 0;
    }
*/