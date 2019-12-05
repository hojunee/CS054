#include <stdio.h>
#include <stdbool.h> // 채점을 위한 헤더파일
#include <stdlib.h>

int* solution(int arr[], size_t arr_len) { // size_t는 채점용 parameter for programmers
    int* answer = arr;
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
    return answer;
}

int main()
{
    int target[2] = {11, 22};
    solution(target, 2);
    
    printf("%d %d", target[0], target[1]);
    return 0;
}
