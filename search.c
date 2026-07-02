#include <stdio.h>
void main()
{
    int a[100],i,n,choice,k;
    int high,low,mid,key,j,found=0,temp;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("1. Linear Search\n2. Binary Search\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            found=0;
            printf("Enter the element to be found");
            scanf("%d",&k);
            for(i=0;i<n;i++)
            {
                if(a[i]==k)
                {
                    printf("Element found at position %d",i+1);
                    found=1;
                    break;
                }
                else
                {
                    printf("Element not found");
                }
            }
            break;
        case 2:
            found=0;
            for(i=0;i<n-1;i++)
            {
                for(j=0;j<n-i-1;j++)
                {
                    if (a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
            }
            printf("Sorted array: ");
            for(i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\n");
            low=0;
            high=n-1;
            printf("Enter the element to be serached");
            scanf("%d",&key);
            while(low<=high)
            {
                mid=(low+high)/2;
                if(a[mid]==key)
                {
                    printf("Element found at position %d",mid+1);
                    found=1;
                    break;

                }
                   else if(key<a[mid])
                {
                    high = mid-1;
                }
                else
                {
                    low = mid+1;
                }
            }
            break;

           
    }
}
