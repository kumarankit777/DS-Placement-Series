#include <stdio.h>

void swap(int *xp, int *yp) 
{ 

    int temp = *xp; 

    *xp = *yp; 

    *yp = temp; 
}

void selectionSort(int arr[], int n){
    int i,j,temp;
    for (i = 0; i < n-1; i++)
    {
        int minindex = i;
       for (j = i+1; j < n; j++)
       {
           if (arr[j]<arr[minindex])
           {
               minindex = j;
               
           }
           
       }
       swap(&arr[minindex],&arr[i]);
        
    }
    printf("Sorted array:");
    for ( i = 0; i < n; i++)
    {
        printf(" %d",arr[i]);
        

    }
    
    
}

int main()
{
    int arr[100],i,n,temp;
    printf("Enter no of elements to be sorted:");
    scanf(" %d",&n);
    for(i=0;i<n;i++)
    {
       printf("Enter element no %d ",i+1);
       scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    return 0;

}

    