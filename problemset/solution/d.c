#include <stdio.h>
#include <stdlib.h>

typedef struct ClassScore{
    int writing;
    int clang;
    int basic_str;
}Score;

int compare(Score a, Score b)
{
    int cnt_a=0, cnt_b=0;
    if (a.writing > b.writing)
    {
        cnt_a++;
    }
    else if (a.writing < b.writing)
    {
        cnt_b++;
    }
    
    if (a.clang > b.clang)
    {
        cnt_a++;
    }
    else if (a.clang < b.clang)
    {
        cnt_b++;
    }
    
    if (a.basic_str > b.basic_str)
    {
        cnt_a++;
    }
    else if (a.basic_str < b.basic_str)
    {
        cnt_b++;
    }
    
    if (cnt_a>=cnt_b)
    {
        return cnt_a;
    }
    else
    {
        return cnt_b;
    }
}

int main()
{
    int n, i;
    
    int sum_w=0, sum_c=0, sum_b=0;
    scanf("%d", &n);
    
    // Scores를 담는 구조체 동적배열 선언
    Score *scores = (Score *)malloc(sizeof(Score) * n);
    for (i=0; i<n; i++)
    {
        scanf("%d %d %d", &scores[i].writing, &scores[i].clang, &scores[i].basic_str);
        sum_w += scores[i].writing;
        sum_c += scores[i].clang;
        sum_b += scores[i].basic_str;
    }
    
    for (i=0; i<n/2; i++)
    {
        printf("%d\n", compare(scores[i], scores[n-i-1]));
    }
    
    free(scores);
    
    return 0;
}
