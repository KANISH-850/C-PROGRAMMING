#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void palindrome(char s[]){
     int i,j,len,isp=1;
     len=strlen(s);
     for(i=0,j=len-1;i<len/2;i++,j--){
         if(s[i]!=s[j]){
             isp=0;
             break;
         }
     }
     if(isp){
         printf("True");
     }
     else{
         printf("False");
     }
 }
 int main()
 {
     char a[100];
     fgets(a,100,stdin);
     a[strcspn(a,"\n")]='\0';
     palindrome(a);
 }
