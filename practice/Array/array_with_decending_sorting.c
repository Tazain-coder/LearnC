#include <stdio.h>

int main()
{

    int i,j,k,n, temp;

    // Make a array
    printf("Enter the Array size: ");
    scanf("%d", &n);

    // Define a array
    int x[n];

    // Add elements to the array
    for (i=0; i<n; i++)
    {
        printf("Enter A value: ");
        // Take input from the user
        scanf("%d", &x[i]);
    }
    // First loop for first element to be compared
    for(j=0;j<=n-2;j++)
        // second loop for  second element to compare
        for (k=j+1;k<=n-1;k++)
        {
            // Comparing 2 elements to determine which is larger
            if (x[j] < x[k])
            {
                //If x[j] is smaller swap the values
                temp = x[j];
                x[j] = x[k];
                x[k] = temp;
                
            }
        }

        for (i=0;i<n;i++)
        {
            printf("%d ",x[i]);
        }
        return 0;

}