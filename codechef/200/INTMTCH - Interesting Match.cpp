#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;
   scanf("%d %d",&x,&y);
   if(abs(x-y)<=2)
   printf("Interesting");
   else
   printf("Boring");
}

