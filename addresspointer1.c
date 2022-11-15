#include<stdio.h>
int main( )
{       int n;
        printf("enter the n elements ");
        scanf("%d",&n);
        int arr[n];
        int i;
        printf("Enter the array n elements : ");
        for(i=0; i<n; i++)
        {
                scanf("%d", &arr[i]);
        }
        printf("\nArray elements with their addresses using pointers : \n");

        for(i=0; i<n; i++)
        {
                printf("Value of arr[%d] = %d\t", i,*(arr+i));
                printf("Address of arr[%d] = %p\n",i,arr+i);
        }

        return 0;
}