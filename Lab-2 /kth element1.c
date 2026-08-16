#include <stdio.h>
int main(){
    int n,k,i,j,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Enter k: ");
        scanf("%d", &k);
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Kth smallest element = %d\n",a[k-1]);
    return 0;
}
