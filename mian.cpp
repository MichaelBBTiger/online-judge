#include<stdio.h>
void rankChar(char a, char b, char c){

if (a<b)
   {
     if(a<c)
      {
        if(b<c)
         printf("%c %c %c\n",a,b,c);
        else  printf("%c %c %c\n",a,c,b);
      }
     else  printf("%c %c %c\n",c,a,b);
   }
else {
       if(a<c)  printf("%c %c %c\n",b,a,c);
       else {
              if (b<c)  printf("%c %c %c\n",b,c,a);
              else  printf("%c %c %c\n",c,b,a);
            }
     }
}

int main(){

char ss[5];
char a,b,c;

while ( scanf ("%s",ss) != EOF){
	a = ss[0];
	b = ss[1];
	c = ss[2];

        rankChar(a,b,c);
}

return 0;
}


