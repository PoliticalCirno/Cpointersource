#include <stdio.h>
#include <stdlib.h>
void selection1() /*for some reason, This code does scanf first before printf.*/
{
     int *p;
        int x;
        p = &x;

        scanf( "%d", &x );
         printf( "%d\n", *p );
}


/*for some reason, This code does scanf first before printf.*/
void selction2()
{
     int *p;
        int y;
           p = &y;

        scanf( "%d", &y );
        printf( "%d\n", *p );

}



int main()
{

    int input;
    int *p;



    printf("Type 1 to point pointer to 1 to set the position to x \n ");
    printf("Type 2 to set position to y \n");
    scanf("%d \n", &input );

    switch(input)
{
case 1:
     printf("Set X Position. \n");
    selection1();
    break;

case 2:
    printf("Set X Position. \n");
    selction2();
    break;

   default: printf("uh ho, I don't recognize this!");

   break;

}

getchar();
 }

