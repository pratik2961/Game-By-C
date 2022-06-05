#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int whowon(char comp,char you)
{
    if(comp == you)
    {
        return 0;
    }

    if(you == 's' && comp == 'g')
    {
        return -1;
    }
    else if(you == 's' && comp == 'w')
    {
        return 1;
    }

    if(you == 'g' && comp == 'w')
    {
        return -1;
    }
    else if(you == 'g' && comp == 's')
    {
        return 1;
    }

    if(you == 'w' && comp == 's')
    {
        return -1;
    }
    else if(you == 'w' && comp == 'g')
    {
        return 1;
    }
    return 0;
}
int main()
{
    while(1)
    {
        char comp,you;
        srand(time(0));

        int no = (rand()%100)+1;

        if(no<=33)
        {
            comp='s';
        }
        else if(no>33 && no<=66)
        {
            comp='g';
        }
        else{
            comp='w';
        }


        printf("Enter 's' for Snake \nEnter 'g' for Gun \nEnter 'w' for Water\n");
        fflush(stdin);
        scanf("%c",&you);

        int result = whowon(comp,you);

        printf("You choosed %c \nComputer choose %c\n",you,comp);

        if(result == 0)
        {
            printf("GAME DRAW! \n");
        }
        else if(result == -1)
        {
            printf("COMPUTER WON THE GAME! \n");
        }
        else if (result == 1)
        {
            printf("YOU WON THE GAME! \n");
        }

        printf("IF YOU WANT PLAY AGAIN ENTER Y OR N FOR EXIT : \n");
        char choose;
        fflush(stdin);
        scanf("%c",&choose);

        if(choose == 'Y')
        {

        }
        else{
            break;
        }
    }
    
    

}