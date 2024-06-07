#include <stdio.h>
#include <string.h>
int main()
{
	char s[100];
	scanf("%s", s);
	int N = strlen(s);
	int bad = 0;
	for(int i=0; i<N; i++){
		char c = s[i];
		if(c>='A' && c<='Z') c = c - 'A' +'a';
		else if(c>='a' && c<='z') c = c - 'a' + 'A';
		printf("%c",c);
	}
	printf("\n");
}
