/*An algorithm for array sorting*/

#include <iostream>

void merge(int* nums1, int nums1size, int m, int* nums2, int nums2size, int n)
{
    /*nums1pointer = n1p
      nums2pointer = n2p
      write pointer = wp*/
    int n1p = m - 1;
    int n2p = n - 1;
    int wp = n + m - 1;

    while (wp >= 0)
    {
        if (n1p < 0)
            nums1[wp--] = nums2[n2p--];
        else if (n2p < 0)
            nums1[wp--] = nums1[n1p--];
        else if (nums1[n1p] > nums2[n2p])
        {
            nums1[wp] = nums1[n1p];
            wp--;
            n1p--;
        }
        else
            nums1[wp--] = nums2[n2p--];
    }
}

int main()
{
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int nums2[] = {2, 5, 6};
    
    merge(nums1, 6, 3, nums2, 3, 3);

    for (int i = 0; i < 6; i++)
    {
        std::cout << nums1[i] << " ";
    }

    return 0;
}
