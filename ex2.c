#include<stdio.h>
void fix(char *m){
	char a =*m;
    
	if(a){
		fix(m=m+1);
      
	}
    printf("%c",a);
}
int main(){
	char *s;
    scanf("%s",*&s);
    fix(s);
    
	return 0;
}
