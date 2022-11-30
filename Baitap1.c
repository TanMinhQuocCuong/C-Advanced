#include <stdio.h>

int arr[7] = {1,4,2,4,122,3,8};

void demPhanTu(int arr[], int length)
{   
    int max = 0;
    int check;
    int a[length];
    int b[length];

    a[0]=arr[0];
    
    for (int i = 1; i <= length; i++)
    {
        check=0;
        for(int j = 0; j <= max; j++)
        {
            if (arr[i] == a[j])
            {
                b[j]++;
                check =1;
                break;
            }
        }

        if (check == 0)
        {
            max++;
            a[max]=arr[i];
        }
    }
    for (int i=0; i<max;i++)
    {
        printf("%d %d \n",a[i],b[i]);
    }
}

int main()
{
    demPhanTu(arr, sizeof(arr);
}
