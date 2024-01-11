#include <stdio.h>
#include <stdlib.h>

int main()
{
float s1=0, s2 , i=1 , ap ;
do{
s1+=1/(i*i) ;
s2=s1+1/(i+1)*(i+1);
i++;
printf("%f",&s2);
}while((s1-s2)>0,000001);
printf("%f<= pi <= %f ",s2,s1);
    return 0;
}
