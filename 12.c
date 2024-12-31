#include <stdio.h>

void ascending(int arr[],int n)
{
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < (n-i-1); j++) {
            if(arr[j] > arr[j+1])
            {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}
void descending(int arr[],int n)
{
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < (n-i-1); j++) {
            if(arr[j] < arr[j+1])
            {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

    void maxx(int arr[],int n,int *max)
    {
       *max=0;
        for(int i= 0; i < n ; i++) {
            if(*max < arr[i])
            {
                *max=arr[i];
            }
        }
    }

    void minn(int arr[],int n,int *min)
    {
    *min=arr[0];
        for(int i= 0; i < n ; i++) {
            if(*min > arr[i])
            {
                *min=arr[i];
            }
        }
    }




int main()
{  int number;
     int n;
    printf("please enter number of array:\n");
    scanf("%d",&n);
     printf("please enter array:\n");

    int arr[n];
    for(int i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }

    do {
    printf("1-sort in ascending order.\n");
    printf("2-sort in descending order.\n");
    printf("3-find the maximum.\n");
    printf("4-find the minimum.\n");
    printf("5-exit\n\n");
    printf("Please select the desired option:\n");
    scanf("%d",&number);
    printf("\n");

    switch (number)
    {
      case 1:
      {
       ascending(arr,n);
        printf("ascending:\n");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n\n");
        break;
      }
      case 2:
      {
       descending(arr,n);
        printf("descending:\n");
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n\n");
        break;
      }
      case 3:
      {
       int max;
       maxx(arr,n,&max);
        printf("max is: %d ",max);
        printf("\n\n");
        break;
      }
     case 4:
      {
       int min;
       minn(arr,n,&min);
        printf("min is: %d ",min);
        printf("\n\n");
        break;
      }
    }
}while(number !=5);

}