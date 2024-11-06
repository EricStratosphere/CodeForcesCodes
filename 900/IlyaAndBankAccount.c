#include <stdio.h>
int main()
{
	int state;
	scanf("%d", &state);
	if(state >= 0)
		printf("%d", state);
	else{
		state = state*-1;
		int mod = state%10;
		if(state/10 < (state/100)*10+mod)
			printf("%d", (state/10)*-1);
		else
			printf("%d", ((state/100)*10+mod)*-1);
	}
}
