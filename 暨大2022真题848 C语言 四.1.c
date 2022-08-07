#include<stdio.h>
int main()
{
	char dianshu1[4];
	char huase1[4];
	int i,j;
	for(i=0;i<5;i++)
	{
		j=i+1;
		printf("请输入第%d张牌的点数：",j);
		scanf("%s",&dianshu1[i]);
		printf("请输入第%d张牌的花色：",j);
		scanf("%s",&huase1[i]);
	}
	int dianshu2[4];
	int huase2[4];
	for(i=0;i<5;i++)
	{
		switch(dianshu1[i])
		{
			case '2': dianshu2[i]=2;break;
			case '3': dianshu2[i]=3;break;
			case '4': dianshu2[i]=4;break;
			case '5': dianshu2[i]=5;break;
			case '6': dianshu2[i]=6;break;
			case '7': dianshu2[i]=7;break;
			case '8': dianshu2[i]=8;break;
			case '9': dianshu2[i]=9;break;
			case 't': dianshu2[i]=10;break;
			case 'j': dianshu2[i]=11;break;
			case 'q': dianshu2[i]=12;break;
			case 'k': dianshu2[i]=13;break;
			default : dianshu2[i]=14;break;
		}
		switch(huase1[i])
		{
			case 'c':huase2[i]=1;break;
			case 'd':huase2[i]=2;break;
			case 'h':huase2[i]=3;break;
			default :huase2[i]=4;break;
		}
	}
	if(dianshu2[0]<=dianshu2[1]&&dianshu2[1]<=dianshu2[2]&&dianshu2[2]<=dianshu2[3]&&dianshu2[3]<=dianshu2[4])
	{
		if(huase2[0]==huase2[1]&&huase2[1]==huase2[2]&&huase2[2]==huase2[3]&&huase2[3]==huase2[4])
		{
			printf("Straight and Flush");
		}
		else
		{
			printf("Straight");
		}
	}
	else
	{
		if(huase2[0]==huase2[1]&&huase2[1]==huase2[2]&&huase2[2]==huase2[3]&&huase2[3]==huase2[4])
		{
			printf("Flush");
		}
		else
		{
			printf("Nothing");
		}
	}
	return 0;
}
