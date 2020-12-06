#include<stdio.h>
int main()
{
    int bilno;
    printf("Enter Bill NO :");
    scanf("%d",&bilno);
    float up1,up2,up3,up4,tot,amt;
    int q1,q2,q3,q4,discount=10;
    printf("Price and Quantity of Sanitizer :");
    scanf("%f%d",&up1,&q1);
    printf("Price and Quantity of Calculator :");
    scanf("%f%d",&up2,&q2);
    printf("Price and Quantity of Handwash :");
    scanf("%f%d",&up3,&q3);
    printf("Price and Quantity of Detergent :");
    scanf("%f%d",&up4,&q4);


    printf("%60s\n","KRUTARTH Mart Pvt Ltd");
    printf("%63s\n","3\\top, PQR Shopping Mall,");
    printf("%53s\n","Rajkot");
    printf("============================================================================================================\n");
    printf("%s%-6d%95s\n","BillNo:",bilno,"03-DEC-20");
    printf("============================================================================================================\n");
    printf("%s%20s%40s%20s%25s\n","No","Item Name","Unit Price","Qty","Total");
    printf("============================================================================================================\n");
    printf("%s%20s%40.2f%20d%27.2f\n","1","Sanitizer",up1,q1,up1*q1);
    printf("%s%20s%40.2f%20d%27.2f\n","2","Calculator",up2,q2,up2*q2);
    printf("%s%20s%40.2f%20d%27.2f\n","3","Hand Wash",up3,q3,up3*q3);
    printf("%s%20s%40.2f%20d%27.2f\n","4","Detergent",up4,q4,up4*q4);
    printf("============================================================================================================\n");

    tot = (up1*q1) + (up2*q2) + (up3+q3) + (up4*q4);
    printf("%100s%-5.2f\n","Amount : ",tot);
    printf("%100s%-.2d%-1s\n","Discount : ",discount,"%");
    printf("=============================================================================================================\n");
    amt = tot - (tot*discount)/100;
    printf("%100s%-.2f\n","Amount to be paid : ",amt);
    printf("=============================================================================================================\n");



    return 0;
}
