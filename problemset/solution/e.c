#include <stdio.h>

int get_answer(int);

int main()
{
    int i, n;
    int num;
    scanf("%d", &n);
    
    for (i=0; i<n; i++)
    {
        scanf("%d", &num);
        printf("%d\n", get_answer(num));
    }
    
}

int get_answer(int num)
{
    int arr[1001];
    int j;
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 4;
    for (j=3; j<num; j++)
    {
        arr[j] = arr[j-1] + arr[j-2] + arr[j-3];
    }
    
    return arr[num-1];
}
