#include <iostream>
#include <time.h>
#include <math.h>
int cnt=0; // global variable

// this I added at the local version of the file
int getMinIndex( int a[], int start, int len)
{
    int minIdx = start;
    for ( int j = minIdx+1; j<len; j++)
    {
        if ( a[minIdx] > a[j])
            minIdx = j;
    }
    return minIdx;
}
void swap( int *x , int *y); // function declared here


int* selectionSort( int a[], int N, int B)
{
    int minIndex;
    for ( int i=0; i<N;i++)
    {
        minIndex = getMinIndex( a, i, N);
        if ( minIndex != i) // Swap only if the minimum is not the one we are comparing
        {
            swap( &a[i], &a[minIndex]);
            cnt++;
            if ( cnt == B)
              return a;//terminate if over the budget
        }
    }

    return a;
}

void swap( int *x , int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    //return x,y; a function can only return SINGLE value
}

int main()
{
    // int arr[] = { 23, 5,78, 9, 10};
    // int N, B;
    // scanf("%d %d",&N, &B);
    // int arr[N];
    // for ( int i=0; i<N;i++) // input array elements
    // {
    //     scanf("%d",&arr[i]);
    // }

    // clock_t begin = clock();
    
    // selectionSort(arr,N,B);
    
    // clock_t end = clock();
    // double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    // printf("Sorting time %f", time_spent);

    // printf("\n The array is ");
    // for( int i=0; i<N; i++)
    // {
    //     printf("%d ", arr[i]);
    // }

     printf("after %d of swaps.", cnt);

    printf("%f %f", pow(2,30), pow(2,30));
    

}