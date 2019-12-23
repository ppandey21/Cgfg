#include<stdio.h>
#define INCREMENT(X) ++X
int main(){
	char *ptr = "GeekQuiz";
	int x = 10;
	printf("%s  ", INCREMENT(ptr)); 
	printf("%d\n", INCREMENT(x)); 
	return 0; 
}

