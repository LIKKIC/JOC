#include <stdio.h>
 
int main()
{
   
    int i, x, pos, n = 10;
 
    // initial array of size 10
    
    int arr[10]={2,6,10,14,18,3,7,11,15,19};
    // print the original array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    // element to be inserted
    x = 22;
 
    // position at which element
    // is to be inserted
    pos = 5;
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    // insert x at pos
    arr[pos - 1] = x;
 
    // print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}
