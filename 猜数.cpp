#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int a=rand()%100+1;
	int m;
	int n=0;
	do{
		printf("我已经想好了一个数\n");
		scanf("%d",&m);
		n++;
		if(m<a){
			printf("你猜的数小了\n"); 
		}
		else if(m>a){
			printf("你猜的数大了\n"); 
		}
    }while(m != a);
    printf("恭喜你猜对了，一共猜了%d次",n);
	return 0;
}
