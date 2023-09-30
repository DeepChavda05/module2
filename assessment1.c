#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{ 

        srand(time(NULL));
        
       /*Variable declaration/initialization*/
       char name[50];
        int lim ,i;
        int yscore = 0, cscore = 0;
        int c=0;
        int num;
        
        /*Print welcome message*/
        printf (" \n ener your name :");
        scanf ("%s", &name);
        printf("*WELCOME To ROCK PAPER SCISSOR GAME*\n\n");
        
        printf ("Enter How Many Rounds You Want To Play: ");
        scanf("%d",&lim);
        
        /*Run loop for game matches (limit)*/
         for(i=1;i<=lim;i++)
        {       
              printf("\n\nEnter 1 for ROCK\nEnter 2 for PAPER\nEnter 3 for SCISSOR\n: ");
			  printf ("\nenter your choice : ");       
              scanf("%d",&num);
       
       
        /*Add number inside the switch and use 3 numbers cases*/      
       switch(num)
       {
         case 1: printf("You have choosed ROCK");
         break;
       
         case 2: printf("You have choosed PAPER");
         break;
       
         case 3: printf("You have choosed SCISSOR");
         break;
       
         default:
         printf("Enter correct choice");
         c=1;
         break;
        
       }
       
              
       //For random number between 1 to 3    
    	int randN = 0;

        randN = rand()%(3)+1;
       
       if(c==0)
       {
       
       if(randN==1)
       {
         printf("\nComputer have choosed ROCK ");
       }
      else if(randN==2)
       {
         printf("\nComputer have choosed PAPER ");
       }
     else if(randN==3)
       {
         printf("\nComputer have choosed SCISSOR");
       }
       
       if(randN==num)
       {
          printf("\nGAME IS TIE");
       }
       else if(num==1 && randN==2)
       {
         printf("\nYOU LOSE!");
         cscore++;
       }
       else if(num==1 && randN==3)
       {
         printf("\nYOU WIN!");
         yscore++;
       }
       else if(num==2 && randN==3)
       {
         printf("\nYOU LOSE!");
         cscore++;
       }
       else if(num==2 && randN==1)
       {
         printf("\nYOU WIN!");
         yscore++;
       }
       else if(num==3 && randN==1)
       {
         printf("\nYOU LOSE!");
         cscore++;
       }
       else if(num==3 && randN==2)
       {
         printf("\nYOU WIN!");
         yscore++;
       }                          
      }
    }
    
       if(lim>1&&yscore>cscore)
       {
         printf("\nYour Score is %d\nComputer score is %d\nYOU WIN THIS GAME!",yscore,cscore);
       }
       else if(lim>1&&cscore>yscore)
       {
         printf("\nYour Score is %d\n Computer score is %d\nYOU LOSE THIS GAME!",yscore,cscore);
       }
       else if(lim>1)
       {
         printf("\nYour Score is %d\n Computer score is %d\nGAME IS TIE!",yscore,cscore);
       }
   return 0;     
} 


