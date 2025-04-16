#include <stdio.h>
#include <string.h>
int main ()
{
	int c,d,i;
	int f1[123]={0};
	int f2[123]={0};
	char str[20];
	char s[20];
	scanf("%s",str);
	scanf("%s",s);
	for(i=0;i<strlen(str);i++){
    	f1[str[i]]++;
	}for(int i=0;i<strlen(s);i++){
    	f2[s[i]]++;
	}for(i=0;i<123;i++){
    	if(f1[i]==f2[i]){
        	c++;
    	}
	}if(c==123){
    	printf("anogram");
	}else{
    	printf("no");
	}
}
