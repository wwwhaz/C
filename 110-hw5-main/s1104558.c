#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h> 
void getstring(char sguess[50]);
 
void getstring(char sguess[50])
{
    char str[][50]={"Anita", "Beryl", "Chloe", "Doris", "Emily",
"Flora", "Grace", "Helga", "Irene", "Josie", "Kathy", "Lorna", "Madge", "Naomi",
"Olive", "Pancy", "Rhoda", "Sonia", "Terri", "Viola", "Wendy", "Alvin", "Basil",
"Clyde", "Duane", "Elmer", "Floyd", "Giles", "Homer", "Irwin", "Jamie", "Keith",
"Lewis", "Miles", "Nicky", "Ozzie", "Percy", "Reule", "Simon", "Teddy", "Urban",
"Vince", "Willy"};
    srand((unsigned)time(NULL));
    strcpy(sguess,str[rand()%50]);
}
 int main(){
    
    char sguess[50];
    getstring(sguess);
    char character[5];
    int i,A,length,B;
    length=strlen(character);
     printf("Guessing...\n");
 do{
	A=0;
	scanf("%s",&character);
	for(i=0;i<5;i++) {
		B=!(isalpha(character[i]));}
	if (B){
          		printf("\033[31mInput error\033[0m\n");
				
			}
	
 	else{
        for(i=0;i<5;i++){

		if(toupper(character[i])==toupper(sguess[i])){
 	               printf("\033[37;42m%c\033[0m",toupper(character[i]));
		       A++;
				}
 	        else if (toupper(character[i])==toupper(sguess[(i+1)%5]) ||toupper(character[i])==toupper(sguess[(i+2)%5]) ||
		         toupper(character[i])==toupper(sguess[(i+3)%5]) ||toupper(character[i])==toupper(sguess[(i+4)%5]))
        	       printf("\033[37;43m%c\033[0m",toupper(character[i]));
                else
                       printf("\033[37;100m%c\033[0m",toupper(character[i]));
                         }
			printf("\n");
     }}


	while(A!=5);
		printf("\033[37;41m[BINGO]\033[m\n");
//		printf("%d",A);

 	return 0;

}
    

