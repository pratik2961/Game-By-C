#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int no = rand()%100+1;
    int movetaken = 0;
    

    while (1)
    {
        printf("Guess the number : \n");
        int gno;
        scanf("%d",&gno);
        if(gno > no){
            printf("Your number is large \n");
            movetaken = movetaken + 1;
        }
        else if (gno < no)
        {
            printf("Your number is small \n");
            movetaken = movetaken + 1;
        }
        else{
            printf("You won the game \n");
            printf("Number of moves : %d\n",movetaken);
            int again;
            printf("IF YOU WANT TO PLAY AGAIN THEN ENTER 1 AND 0 FOR EXIT \n");
            scanf("%d",&again);
            
            if(again==1)
            {
                no = rand()%100+1;
                movetaken = 0;
            }
            else{
                break;
            }

        }
        
    }
    
    return 0;
}