#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void* a, const void* b)
{
    if (*(int*)a < *(int*)b)
        return 1;
    else if (*(int*)a > *(int*)b)
        return -1;
    else
        return 0;
}
int main(void)
{
    char s1[11] = { NULL };
    int s2[10] = { 0 };
    scanf("%s", s1);
    int len = strlen(s1);

    for (int i = 0; i < len; i++)
        s2[i] = s1[i] - 48;

    qsort(s2, len, sizeof(int), compare);
    for (int i = 0; i < len; i++)
        printf("%d", s2[i]);
    return 0;
}
