#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
typedef struct Sword{
	char word[200];
	int num;
	struct Sword * next;
}Sword;
void add(Sword * Head,char * str);
void display(Sword * Head,FILE * fp);
void release(Sword * Head);
 
int main(void){
	FILE * fp;
	char filename [] ="TaiwanTravelGuide.txt";
	char str[200];
//	fgets(str, (sizeof str/ sizeof str[0]), stdin);
	int i,j;  
	Sword * Head; 
	Head = (Sword *)malloc(sizeof(Sword));
	memset(Head,0,sizeof(Sword));
	if((fp = fopen(filename,"r"))==NULL){
		exit(0);
	}
	while(fscanf(fp,"%s",str) != EOF){  
		add(Head,str);      
	}
	fclose(fp);         
	if((fp = fopen(filename,"a"))==NULL){ 
		exit(0);
	}
//	  for(i = 0; filename[i] != '\0'; ++i)
  //  {
     //   while (!( (filename[i] >= 'a' && filename[i] <= 'z') || (filename[i] >= 'A' && filename[i] <= 'Z') || filename[i] == '\0') )
      //  {
        //    for(j = i; filename[j] != '\0'; ++j)
          //  {
           //     filename[j] = filename[j+1];
           // }
          //  filename[j] = '\0';
      //  }
   // }
//	puts(str);
	display(Head,fp);    
	fclose(fp);      
	release(Head); 
	return 0;	
}
	void add(Sword * Head,char * str){ 
		Sword * tw;
		Sword * p = Head;
		while(1){
			if(strcmp(p->word,str)==0){ 
				p->num++;           
				return;
			}else{               
				if(p->next != NULL){
					p = p->next;
				}else{      
					tw = (Sword *)malloc(sizeof(Sword));
					memset(tw,0,sizeof(Sword));
					sprintf(tw->word,"%s",str);
					tw->num++;            
					p->next = tw;         
					return;
				}
			}
		}
	}
	
	void display(Sword * Head,FILE * fp){ 
		Sword * show;
		for(show = Head->next;show != NULL;show = show->next){ 
			printf("%s  %d\n",show->word,show->num);
			fprintf(fp,"%s  %d\n",show->word,show->num);
		}
	}
	
	void release(Sword * Head){ 
		Sword * tw;
		Sword * pre = Head;
		while(pre != NULL){  
			tw = pre->next;  
			free(pre);     
			pre = tw;
		}
	}
