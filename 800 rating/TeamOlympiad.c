#include <stdio.h>
#include <stdlib.h>
int teams;
void findLowest(int, int, int);
int main()
{
    int students;
    scanf("%d", &students);
    int*types = (int*)malloc(sizeof(int) * students);
    int pCounter = 0, mCounter = 0, sCounter = 0;
    for(int i = 0; i < students; i++){
        scanf("%d", types+i);
        if(*(types+i) == 1)
            pCounter++;
        else if (*(types+i) == 2)
            mCounter++;
        else
            sCounter++;
    }
    findLowest(pCounter, sCounter, mCounter);
    printf("%d\n", teams);
    if(teams > 0){
        int pArr[pCounter], mArr[mCounter], sArr[sCounter];
        int pTemp = 0, mTemp = 0, sTemp = 0;
        for(int i = 0; i < students; i++){
            if(types[i] == 1){
                pArr[pTemp] = i+1;
                pTemp++;
            }
            else if(types[i] == 2){
                mArr[mTemp] = i+1;
                mTemp++;
            }
            else{
                sArr[sTemp] = i+1;
                sTemp++;
            }
        }
        for(int i = 0; i < teams; i++){
            printf("%d %d %d\n", pArr[i], mArr[i], sArr[i]);
        }
    }
}
 
void findLowest(int p, int s, int m){
   if(p <= s && p <= m)
    teams = p;
   else if(s <= p && s <= m)
    teams = s;
   else if(m <= s && m <= p)
    teams = m;
}
