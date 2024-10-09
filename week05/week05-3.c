//week05-3.c
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char s[]="`12345678980-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	while(scanf("%c",&c)==1){
		c=tolower(c);
		if(c==' '||c=='\n')printf("%c",c);
		else{
			for(int i=0;s[i]!=0;i++){
				if(c==s[i])printf("%c",s[i-2]);
			}
		}
	}
}
