#include <stdio.h>
int h1, h2, h3, h4, h5, h6, h7, c1, c2, c4, b1, b2, b3, b0;
int hamming[7];
int a,b,c;

void error()
{   
    printf("Enter your recived Hamming code :\n");
    for(int i=0;i<7;i++)
    {
        printf("->");
        scanf("%d",&hamming[i]);
    }
    h1=hamming[0];
    h2=hamming[1];
    h3=hamming[2];
    h4=hamming[3];
    h5=hamming[4];
    h6=hamming[5];
    h7=hamming[6];

    // printf("hamming code is-->%d%d%d%d%d%d%d \n", h1, h2, h3, h4, h5, h6, h7);

    c1 = h1 + h3 + h5 + h7;
    c2 = h2 + h3 + h6 + h7;
    c4 = h4 + h5 + h6 + h7;
    if (c1 == 2 || c1 == 4)
    {
        c1 = 0;
    }
    else
    {
        c1 = 1;
    }
    if (c2 == 2 || c2 == 4)
    {
        c2 = 0;
    }
    else
    {
        c2 = 1;
    }
    if (c4 == 2 || c4 == 4)
    {
        c4 = 0;
    }
    else
    {
        c4 = 1;
    }

    // printf("%d%d%d", c4, c2, c1);
    
    a=c4*4;
    b=c2*2;
    c=c1*1;


    printf("Your error detected at %d number in Entered Hamming code:\n",a+b+c);

}

void main()
{
    int message[4];

    printf("*****Message in binary number system*****\n");
    printf("Enter your four bit message ::\n");
    for (int i = 0; i < 4; i++)
    {
        printf("->");
        scanf("%d", &message[i]);
    }

    b3 = message[0];
    b2 = message[1];
    b1 = message[2];
    b0 = message[3];

    // printf("%d%d%d%d\n", b0, b1, b2, b3);
    h1 = b3 + b2 + b0;
    h2 = b3 + b1 + b0;
    h3 = b3;
    h4 = b2 + b1 + b0;
    h5 = b2;
    h6 = b1;
    h7 = b0;
    if (h1 == 2 || h1 == 4)
    {
        h1 = 0;
    }
    else
    {
        h1 = 1;
    }
    if (h2 == 2 || h2 == 4)
    {
        h2 = 0;
    }
    else
    {
        h2 = 1;
    }
    if (h4 == 2 || h4 == 4)
    {
        h4 = 0;
    }
    else
    {
        h4 = 1;
    }
    fflush(stdin);

    printf("hamming code is-->%d%d%d%d%d%d%d \n", h1, h2, h3, h4, h5, h6, h7);
    error();
    
}