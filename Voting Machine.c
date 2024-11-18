#include<stdio.h>
#define AVENGERS_COUNT
#define AVENGER1 "IRON MAN"
#define AVENGER2 "CAPTAIN AMERICA"
#define AVENGER3 "THOR"
#define AVENGER4 "HULK"
#define AVENGER5 "BLACK WIDOW"
#define AVENGER6 "HAWKEYE"
int votescount1=0, votescount2=0, votescount3=0, votescount4=0, votescount5=0, votescount6=0;

void castvote()
{	
   int choice;
   printf("\t\t PLEASE VOTE FOR YOUR FAVOURITE AVENGER \t\t\n\n\n");
   printf("1. %s\n", AVENGER1);
   printf("2. %s\n", AVENGER2);
   printf("3. %s\n", AVENGER3);
   printf("4. %s\n", AVENGER4);
   printf("5. %s\n", AVENGER5);
   printf("6. %s\n", AVENGER6);
   printf("Input your choice (1 - 6) : \n\n");
   scanf("%d",&choice);
   switch(choice)
   {
      case 1: votescount1++;
	   break;
      case 2: votescount2++;
	   break;
      case 3: votescount3++;
	   break;
      case 4: votescount4++;
	   break;
	  case 5: votescount5++;
	   break;
	  case 6: votescount6++;
		break;
  
	  default: printf("\n\n Error: Wrong Choice !! Please retry \n\n");
      //hold the screen
      getchar();
   }
   printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
   printf("\t\t Thanks for voting !!\n\n");
   printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
}

void votesCount()
{

   printf(" \t\t Voting Statics \n\n");
   printf("%s - %d \n ", AVENGER1, votescount1);
   printf("%s - %d \n ", AVENGER2, votescount2);
   printf("%s - %d \n ", AVENGER3, votescount3);
   printf("%s - %d \n ", AVENGER4, votescount4);
   printf("%s - %d \n ", AVENGER5, votescount5);
   printf("%s - %d \n ", AVENGER6, votescount6); 
}

int main()
{
   int i;
   int choice;
   do
   {
   	  printf("\t  ==========================================\n\n");
      printf("\t\tWELCOME TO MARVEL VOTING SYSTEM  \n\n ");
      printf("\t  ==========================================\n\n");
      printf("1. Cast the Vote\n");
      printf("2. Find Vote Count\n");
	  printf("3. Exit\n");
      printf("Please enter your choice : \n");
      scanf("%d", &choice);
      
      switch(choice)
	  {
         case 1: castvote();
		 break;
         case 2: votesCount();
		 break;
		 
         default: printf("Error: Invalid Choice \n\n");
      }
   }
   while(choice!=0);
   //hold the screen
   getchar();
   return 0;
}
