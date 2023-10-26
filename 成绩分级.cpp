#include <stdio.h>
int main(){
	printf("«Î ‰»Î≥…º®");
	int n,m;
	scanf("%d",&n);
	m=n/10;
	switch(m){
		case 10:
		case 9:
		printf("A\n");
		break;
		case 8:
		printf("B\n");
		break;
		case 7:
		printf("C\n");
		break;
		case 6:
		printf("D\n");
		break;
		default:
		printf("E\n");
		break;	
		
	}
	return 0;
}
