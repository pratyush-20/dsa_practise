/*#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int i, x, position, n = 5;
    printf("ARRAY BEFORE INSERTION\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
    x = 6;//item
    position = 3;
    n++;
    for (i = n - 1; i >= position; i--)
        arr[i] = arr[i - 1];
    arr[position - 1] = x;
    printf("ARRAY AFTER INSERTION\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
        printf("\n");
    }

    return 0;
}*/

#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5};
int item,position,n=5;
printf("ARRAY BEFORE INSERTION\n");
for (int i=0;i<=n;i++)
{
printf("%d\n",arr[i]);
}
item=10;
position=3;
n++;
for(int i=n-1;i>=position-1;i--)
{
arr[i]=arr[i-1];
}
arr[position-1]=item;
printf("ARRAY AFTER INSERTION\n");
for (int i=0;i<=n;i++)
{
printf("%d\n",arr[i]);
}
return 0;
}