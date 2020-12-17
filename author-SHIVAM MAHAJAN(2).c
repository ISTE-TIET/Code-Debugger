/*When the sum of the cube of the individual digits of a number
 is equal to that number, the number is called Armstrong number. For example 153.
Sum of its divisor is 13 + 53;+ 33; = 1+125+27 = 153*/
#include <stdio.h>
#include<math.h>

void main(){
    int num,r,sum,temp;
    int sno,eno;

    printf("Input starting number of range: ");
    scanf("%d",&sno);

    printf("Input ending number of range : ");
    scanf("%d",&eno);

    printf("Armstrong numbers in given range are: ");
    for(num=sno;num<=eno;num++){
         temp=num;
         sum = 0;

         while(temp!=0){
             r=temp % 10;
             temp /=10;
             sum += pow(r,3);
         }
         if(sum == num)
             printf("%d ",num);
    }
printf("\n");
}
