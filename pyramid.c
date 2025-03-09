#include<stdio.h>
int main()
{

    int i=1,j,k;
    //Variable to store the number of rows
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    //Outer loop to handle number of rows
    do
    {
       
        //inner loop to print spaces
        j=1;
        do
        {
            printf(" ");
            j++;
        } while (j<=rows-i);

        //inner loop to print stars
        k=1;
        do
        {
            printf(" *");
            k++;
        } while (k<=i);
        

        
        i++;

        printf("\n");
    } while (i<=rows);

    return 0;
}
