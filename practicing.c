#include <stdio.h>

int main()
{
    int arr[]={11, 35, 78, 92, 43};
    int find=78;
    for(int i=0; i<5; i++)
    {
        if(arr[i]==find)
        {
            printf("Found %d", find);
            return 0;
        }
    }
    printf("Not found %d", find);
    return 0;
}