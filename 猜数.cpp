#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(0));
	int a=rand()%100+1;
	int m;
	int n=0;
	do{
		printf("���Ѿ������һ����\n");
		scanf("%d",&m);
		n++;
		if(m<a){
			printf("��µ���С��\n"); 
		}
		else if(m>a){
			printf("��µ�������\n"); 
		}
    }while(m != a);
    printf("��ϲ��¶��ˣ�һ������%d��",n);
	return 0;
}
