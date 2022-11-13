
#include<stdio.h>
int linearsearch(int arr[],int size,int element)
{
for(int i =0 ; i<size ;i++)
{
    if(arr[i]==element)
    {
        return i+1;
    }
}
return -1;
}
int binarysearch(int arr[],int size , int element)
{
int low , mid , high;
low =0 ;
high=size ;
while(low<=high)
{
mid = (low + high)/2;
if(arr[mid-1]==element)
{
    return mid;
}
 if (arr[mid-1] < element)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,23,234,2323,223,56,4564,332,121};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("The elements of array are \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
int element;
printf("Enter element you want to search\n");
scanf("%d",&element);
int searchindex=binarysearch(arr,size,element);
if(searchindex==-1)
{printf("Element %d is not found\n",element);}
else
printf("The element %d is at index %d\n",element,searchindex);
return 0;
}
