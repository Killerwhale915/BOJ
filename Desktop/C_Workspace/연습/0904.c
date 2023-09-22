#include <stdio.h>
void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
}

int main()
{
    int nums1[10] = {1, 2, 3, 0, 0, 0};
    int nums2[10] = {2, 5, 6};

    int i = 0;
    for (i = 0; i < 10; i++)
    {
        if (nums1[i] == "\0")
        {
            break;
        }
    }
    printf("%d", i);
}