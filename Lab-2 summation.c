#include <stdio.h>
#include <math.h>
int main(){
    int a,r,n;
    double sum;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter common ratio r and number of terms n: ");
    scanf("%d %d",&r,&n);
    if(r==1){
        sum=a*n;
    }else{
        sum=a*(pow(r,n)-1)/(r-1);
    }
    printf("Sum = %.0f\n",sum);
    return 0;
}
