#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
/*int countdigit(int n)
{
    int i=0;
    while(n)
    {
        n=n/10;
        i++;

    }
    return i;
} */
int main()
{
    int no;
    int res=1;
    printf("Hello to the program!\n");
    while(res==1)
    {
        printf("\nGET THE BIRTH MONTH NO. IN UR HEAD and PRESS ANY KEY FOR NEXT STEP");
        getch();
        printf("\nNOW MULTIPLY BY 5 AND PRESS KEY FOR NEXT STEP ");
        getch();
        printf("\nADD 6 TO THE ANSWER and PRESS ANY KEY FOR NEXT STEP");
        getch();
        printf("\nMULTIPLY BY 4 TO THE ANSWER and PRESS ANY KEY FOR NEXT STEP");
        getch();
        printf("\nADD 9 TO THE ANSWER and PRESS ANY KEY FOR NEXT STEP");
        getch();
        printf("\nMULTIPLY BY 5 TO THE ANSWER and PRESS ANY KEY FOR NEXT STEP");
        getch();
        printf("\nADD BIRTHDATE TO THE ANSWER and PRESS ANY KEY FOR NEXT STEP");
        getch();
        printf("\nENTER THE RESULT YOU GOT  : ");
        scanf("%d",&no);
        no=no-165;
        printf("\n\nTHE BIRTHDAY YOU THOUGHT OF (DATE/MONTH): %d/%d",no%100,no/100);
        getch();
        /*month=no/100;
        date=no%100;*/
        printf("\n\nDO YOU WANT TO CONTINUE PLAYING THIS TRICK (0(for no)/1(for yes)): ");
        scanf("%d",&res);

    }
   printf("\nTHANKYOU !");

   return 0;
}
