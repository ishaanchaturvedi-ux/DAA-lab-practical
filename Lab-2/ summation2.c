#include <stdio.h>
int main(){
    int a, r, n;
    int sum = 0;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter common ratio r and number of terms n: ");
    scanf("%d %d",&r,&n);
    for(int i=1;i<=n;i++){
        sum=sum+a;
        a=a*r;
    }
    printf("Sum = %d\n",sum);
    return 0;
}
