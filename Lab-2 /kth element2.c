#include <stdio.h>
int main(){
    int n,k,i,j,min,temp;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter k: ");
    scanf("%d",&k);
    if(k<1||k>n){
        printf("Invalid k");
        return 0;}
    for(i=0;i<k;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j; }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;}
    printf("Kth smallest element =%d\n",a[k-1]);
return 0;
}
