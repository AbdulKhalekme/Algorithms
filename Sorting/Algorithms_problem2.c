#include<stdio.h>
int insertion_sort(int A[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++){
        temp=A[i];
        j=i-1;
        while(j>=0 && A[j]>temp){
            A[j+1]=A[j];
            j=j-1;
        }
        printf("%d ",A[i]);
    }
}
int main()
{
    int n,A[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    int sort=insertion_sort(A,n);
    return 0;
}
