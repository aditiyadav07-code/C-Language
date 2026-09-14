 #include <stdio.h>
 
 int main()
 {
    int mark[5]={89, 90, 80, 85, 78};
    printf("marks0 = %d\n", mark[0]);
    printf("marks1 = %d\n", mark[1]);
    printf("marks2 = %d\n", mark[2]);
    printf("marks3 = %d\n", mark[3]);
    printf("marks4 = %d\n", mark[4]);

    float price[3];
    printf("Enter price for three items: ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);
    printf("Total price (0) = %f\n", price[0]*(1+0.18));
    printf("Total price (1) = %f\n", price[1]*(1+0.18));
    printf("Total price (2) = %f\n", price[2]*(1+0.18));
   
    return 0;

    /*
    - Array stores multiple values of the same data type.
    - Array indexing starts from 0.
    */
 }