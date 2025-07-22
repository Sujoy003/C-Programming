#include <stdio.h>
int main()
{
    int a[14] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    int low = 0;
    int high = 8;
    int mid;
    int test = 0;
    int value;
    int index;
    scanf("%d", &value);
    while (low <= high)
    {
        // mid = low + (high - low) / 2;
        mid= (low+high)/2;
        if (a[mid] == value)
        {
            test = 1;
           index = mid;
            break;
        }
        if (a[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (test == 1)
    {
        printf("value found in the  %d", mid);
    }
    else
    {
        printf("not found");
    }

    return 0;
}