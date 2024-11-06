#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int scores, ctr = 0, ctr2 = 0, flag = 0, flag2 = 0;
	scanf("%d", &scores);
	void* teams = (char**) malloc(sizeof(char*) * 2);
	*((char**) teams) = (char*) malloc(sizeof(char) * 10);
	*((char**) teams + 1) = (char*) malloc(sizeof(char) * 10);
	for(int i = 0; i < scores; i++){
		if(flag == 0){
			scanf("%s", *((char**)teams));
			ctr++;
			flag = 1;
		}
		else{
			char* team =(char*) malloc(sizeof(char) * 10);
			scanf("%s", team);
			if(strcmp(team, *((char**)teams)) == 0){
				ctr++;
			}
			else{
				if(flag2 == 0){
					*((char**) teams + 1) = team;
					flag2 = 1;
				}
				ctr2++;
			}
		}
	}
	if(ctr > ctr2){
		printf("%s", *((char**)teams));
	}
	else
		printf("%s", *((char**) teams + 1));
}
