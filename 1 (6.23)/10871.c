#include <stdio.h>

int main()
{
int i,n,x;
scanf("%d %d",&n,&x);
int arr[n],copy[n];
int k = 0;
for(i=0;i<n;i=i+1)
{
    scanf("%d ",&arr[i]);
}

for(i=0;i<n;i=i+1)
{
    if(arr[i] < x)
    {
       copy[k] = arr[i];
       k=k+1;
    }
}

for(i=0;i<k;i=i+1)
{
    printf("%d ",copy[i]);
}

}
