#include<stdio.h>
int main()
{
    int i, n, max, min;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d elements: \n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max=min=arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("largest elements is %d\n", max);
    printf("Smallest elements is %d\n", min);
    return 0;
}
