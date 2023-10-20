#include <stdio.h>
int main()
{
    int arr1[100][100], arr2[100][100], sum[100][100];
    int nz1, nz2, row1, column1, row2, column2;
    int k = 1, l = 1, q = 1;
    printf("Enter the number of non zero elements in 1st matrix: \n");
    scanf("%d", &nz1);
    printf("Enter the no of rows and columns in the sparse matrix : ");
    scanf("%d%d", &row1, &column1);
    arr1[0][0] = row1;
    arr1[0][1] = column1;
    arr1[0][2] = nz1;
    printf("Enter the elements : \n");
    for (int i = 1; i <= nz1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }
    printf("The 1st sparse matrix 3 tuple form is : \n");
    for (int i = 0; i <= (nz1); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the number of non zero elements in the 2nd matrix : \n");
    scanf("%d", &nz2);
    printf("Enter the no of rows and columns in the sparse matrix : ");
    scanf("%d%d", &row2, &column2);
    arr2[0][0] = row2;
    arr2[0][1] = column2;
    arr2[0][2] = nz2;
    printf("Enter the elements : \n");
    for (int i = 1; i <= nz2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }
    printf("The 2nd sparse matrix 3 tuple form is : \n");
    for (int i = 0; i <= nz2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }
    // now we add the two matrix
    if (arr1[0][0] == arr2[0][0] && arr1[0][1] == arr2[0][1])
    {
        sum[0][0] = arr1[0][0];
        sum[0][1] = arr1[0][1];
        while (k <= row1 && l <= row2)
        {
            if (arr1[k][0] == arr2[l][0])
            {
                if (arr1[k][1] == arr2[l][1])
                {
                    sum[q][0] = arr1[k][0];
                    sum[q][1] = arr1[k][1];
                    sum[q][2] = arr1[k][2] + arr2[l][2];
                    k++, l++, q++;
                }
                else
                {
                    if (arr1[k][1] > arr2[l][1])
                    {
                        sum[q][0] = arr2[l][0];
                        sum[q][1] = arr2[l][1];
                        sum[q][2] = arr2[l][2];
                        l++, q++;
                    }
                    else
                    {
                        sum[q][0] = arr1[k][0];
                        sum[q][1] = arr1[k][1];
                        sum[q][2] = arr1[k][2];
                        k++, q++;
                    }
                }
            }
            if (arr1[k][0] > arr2[l][0])
            {
                sum[q][0] = arr2[l][0];
                sum[q][1] = arr2[l][1];
                sum[q][2] = arr2[l][2];
                l++, q++;
            }
            else
            {
                sum[q][0] = arr1[k][0];
                sum[q][1] = arr1[k][1];
                sum[q][2] = arr1[k][2];
            }
        }
    }
    printf("The sum sparse matrix 3 tuple form is : \n");
    for (int i = 0; i <=k+1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}