#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,10};
    int total=0,ls=0,rs,n=(sizeof(arr))/(sizeof(arr[1]));
    for(int i =0;i<n;i++)
    {
        total +=arr[i];
    }
    for(int i =0;i<n;i++)
    {
        rs= total - ls-arr[i];
        if(rs==ls)
        {
            printf("Equilibrium point is at %d",arr[i]);
            break;
        }
        ls += arr[i];
    }
    
}