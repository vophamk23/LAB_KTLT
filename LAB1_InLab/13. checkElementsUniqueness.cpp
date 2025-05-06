#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <iostream>
#include <algorithm>

bool checkElementsUniqueness(int *arr, int n)
{
    // Sử dụng mảng đánh dấu vì giá trị của arr[i] nằm trong khoảng [0, 1000]
    bool visited[1001] = {false}; // Khởi tạo tất cả phần tử là false

    for (int i = 0; i < n; i++)
    {
        // Nếu phần tử đã xuất hiện trước đó, mảng không duy nhất
        if (visited[arr[i]])
        {
            return false;
        }

        // Đánh dấu phần tử này đã xuất hiện
        visited[arr[i]] = true;
    }

    // Nếu không có phần tử nào lặp lại, mảng là duy nhất
    return true;
}