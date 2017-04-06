#include<stdio.h>
#include<stdlib.h>

typedef struct N{

int tk,tp;

long long pp[1000003];//-1 is tank, tap is di


}h;

		int cre(int ai,int bi,int di,h ** li);
int main(){

int n,p,l,ai,bi,di;
h * li[1003];
scanf("%d %d",&n,&p);


		for(l=0;l<p;l++){
scanf("%d %d %d",&ai,&bi,&di);
cre(ai,bi,di,li);
				}


return 0;
	  }

		int cre(int ai,int bi,int di,h ** li){
h * temp;
if(li[ai-1] == 0){
h * new = (h *)malloc(sizeof(h));new->tk=ai;li[ai-1]=new;
		 }
if(li[bi-1] == 0){
h * new2 = (h *)malloc(sizeof(h));new2->tk=bi;new2->pp[ai-1]=-1;li[bi-1]=new2;	
		 }
temp = li[ai-1];temp->pp[bi-1]=di;temp->tp=bi;


					     }
/*
typedef struct N{

int tk,tp;

long long pp[1000003];//-1 is tank, tap is di


}h;
*/
