#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int cash=100;
void play(int bet){
   char *P;
   P=(char*)malloc(3*sizeof(char));//在Heap申请内存空间
   P[0]='J';
   P[1]='Q';
   P[2]='K';
   printf("Shuffling.....");
   srand(time(NULL));
   for (int i = 0; i < 5; i++)//交换i次数据
   {
      int x=rand()%3;//对三取模，得到的结果是0，1，2
      int y=rand()%3;
      char temp=P[x];//交换数据
      P[x]=P[y];
      P[y]=temp;
   }
   int playerGuess;
   printf("what's the position of the queen?-1,2,3\n");
   scanf("%d",&playerGuess);
   if(P[playerGuess-1]=='Q'){
      cash=cash+3*bet;
      printf("you win! result is %c %c %c total cash is %d $\n",P[0],P[1],P[2],cash);
   }
   else{
      cash=cash-bet;
      printf("you lose! result is %c %c %c total cash is %d $\n",P[0],P[1],P[2],cash);
   }
   free(P);
}
int main() {
   printf("Wellcome to play my game!\n");
   int bet;
   while (cash>0)
   {
      printf("what's your bet? $\n");
      scanf("%d",&bet);
      if(bet==0||bet>cash){
         printf("Game Over!\n");
         break;
      }
      play(bet);
      printf("\n**************************\n");
   }
   system("pause");
   
}
