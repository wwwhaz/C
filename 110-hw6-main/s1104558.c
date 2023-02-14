#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <ctype.h> 
typedef struct
{
	char name[100];
}udata;

typedef struct member
{
	udata Info;
	struct member *next;
}all;

void display(all *T);
void reverse(all *T);

main()
{
	int i,B,l;
	char data[100],buffer[100],n[20]="0";
	all *S,*T,*P;
	S=NULL;
	
	for (i=1;i>0;i++)
	{ 
		T=(all*)malloc(sizeof(all));
		printf("Please input name #%d:",i);
		
	        scanf("%s",T->Info.name);
	        l=strlen(T); 
		B= (l!=5) && strcmp(T,n)!=0;//!(isalpha(T[i])) ;//
	        T->next=S;
		S=T;
		
	if (B){
          		printf("Input error\n");
				
		}	
		
	else  if(strcmp(T,n)==0)
	{
		printf("¥¿§Ç\n");
		printf("-----\n");
		T=S;
		reverse(T);
		printf("-----\n");
	
		printf("­Ë§Ç\n");
		printf("-----\n");
		T=S;
		display(T);
		printf("-----\n");
	break;	
	}	
	
	
	}
}

void display(all *T)
{

     while(T !=NULL)
	 {
	 	printf("%s\n",T ->Info.name);
	 	T=T->next;
	}	
}

void reverse(all *T)
{
	if(T->next !=NULL)
	  reverse(T->next);
	printf("%s\n",T->Info.name); 

	
	
	}	
