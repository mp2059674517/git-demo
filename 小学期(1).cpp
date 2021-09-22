#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int tool=0,N=0;
long identity;/*指的是登录用户的账号*/
struct RES/*餐厅库*/
{
	char nameR[30];/*餐厅名*/
	long ID1;/*餐厅编号*/
	char areaR[20];/*餐厅所在地区*/
	char styR[20];/*菜式*/
	char timeR[15];/*营业时间*/
	int proceeds;/*餐馆收入*/
	float scoreR;/*餐厅平均评分*/
	float speedA;/*配送速度*/
	char introduction[100];/*对餐厅的介绍*/
	float mindel;/*最小起送金额*/
	float pacfee;/*运费与包装费*/
	int limit;/*最大服务人数*/
	int salvolR;/*餐馆销量*/
}res[100];

struct FOOD/*菜品库*/
{
	char nameF[25];/*食物名称*/
	long numF;/*菜品编号*/
	int saleF;/*菜品销量*/
	int recF;/*菜品平均评分*/
	long ID2;/*所属餐厅的编号*/
	float priceF;/*菜品价格*/
	char nameR2[15];/*所属餐厅名称*/
}food[200];

struct CON/*订餐用户库*/
{
	long IDC;/*顾客编号*/
	char nameC[15];/*顾客姓名*/
	char sex[6];/*性别*/
	char phonum[11];/*11位电话号码*/
	char addC[50];/*配送地址*/
	char areaC[20];/*所在地区*/
	char pasC[10];/*密码*/
	char emailC[25];/*邮箱（账号）*/
}con[50];

struct MAN/*管理员库*/
{
	long IDM;/*管理员编号*/
	char nameR1[15];/*管理员所属餐厅*/
	long idMR;/*管理员所属餐厅的编号*/
	char nameM[25];/*管理员名字*/
	char pasM[10];/*管理员密码*/
	char emailM[25];/*管理员邮箱*/
}man[50];

struct HIS/*订单与历史记录库*/
{
	long IDH;/*此历史记录所对应的客户的编号*/
	long numH;/*订单编号*/
	float tot;/*订单总额*/
	char nameH[30];/*餐馆名*/
	int timeH;/*配送用时*/
	char addH[50];/*配送地点*/

	int end;/*是否完成：1为完成，0为未完成*/
	/*以下为送达时间*/
	int year;
	int month;
	int day;
	int hour;
	int minute;
	/*以下为下单时间*/
	int HOUR;
	int MINUTE;
}his[100],tory[1];

struct COMMENT/*评论库*/
{
	long numC;/*评论所属订单的编号*/
	long idC;/*作出评论的客户的编号*/
	long idF;/*被评论的菜品的编号*/
	char nC[25];/*被评论的食品名*/
	char com[150];/*具体评论内容*/
	float score;/*对菜品的评分*/
	long idR;/*被评论的菜品所属餐厅的编号*/
	float pri;/*该菜品的价格*/
	
}comment[150];

struct P/*(tool)本订餐客户的历史记录*/
    {
    	long IDP;
    	long numP;
	    float totP;
	    char nameP[30];
	    char addP[50];
	    int timeP;
	    int endP;
	    int yearP;
	    int monthP;
	    int dayP;
	    int hourP;/*24小时制*/
	    int minuteP;
	}p[100];
struct C/*(tool)评论库*/
   {
	    long numc;/*评论所属订单的编号*/
	    long idc;/*作出评论的客户的编号*/
	    long idf;/*被评论的菜品的编号*/
	    char nc[25];/*被评论的食品名*/
		char comc[150];/*具体评论内容*/
		float scorec;/*对菜品的评分*/
		long idr;/*被评论的菜品所属餐厅*/
		float pric;/*该菜品的价格*/	
   }c[150];	
	
int main()
{
	printf("欢迎使用本订餐系统\n");
	int f1(int);
    int f2(int);
	int iii;
	for(iii=0;iii<120;iii++)
	{
		printf("用户注册请按1\n用户登录请按2\n退出系统请按0\n");/*第一步*/
		int choose1;
		scanf("%d",&choose1);
		if(choose1==0)
		{printf("Program ends.");
		break;} 
		else if(choose1==1||choose1==2)
		{
			switch(choose1)
			{
				case 1:f1(tool);
		        	break;
	            case 2:f2(tool);
	            	break;
			}
		}
		else
		{printf("输入错误\n");}
	}	
	return 0;
}

int f1(int tool)
      /*用户注册*/
      {
      	return 0;
	  }

int f2(int tool)
{
	int iiii;
	int f21(int);
    int f22(int);
	for(iiii=0;iiii<100;iiii++)
	{
		printf("订餐用户登录请按1\n管理员登录请按2\n返回上级菜单请按0\n");
	    int choose2;
	    scanf("%d",&choose2);
		if(choose2==0)
		  {printf("返回成功\n");
		   break;}
		else if(choose2==1||choose2==2)
		{
			switch(choose2)
			{
				case 1:f21(tool);
		          break;
	            case 2:f22(tool);
	              break;
			}
			
		}
		else
		{printf("输入错误\n");}
	}
	return 0;	
}

int f21(int tool)
{
	int f211(int);
    int f212(int);
    int f213(int);
    int f214(int);
    int f215(int);
	/*订餐用户登录*/
	scanf("%ld",&identity);
	/*登录成功后：*/
	int iiiii,choose3;
	for(iiiii=0;iiiii<100;iiiii++)
	{
		printf("查询订单请按1\n取消订单请按2\n评价订单请按3\n订餐请按4\n账号管理请按5\n退出登录请按0\n");
		scanf("%d",&choose3);
		if(choose3==0)
		  {printf("登出成功\n");
		   break;}
		else if(choose3==1||choose3==2||choose3==3||choose3==4||choose3==5)
		{
			switch(choose3)
			{
				case 1:f211(tool);
		          break;
	            case 2:f212(tool);
	              break;
	            case 3:f213(tool);
	              break;
	            case 4:f214(tool);
	              break;
	            case 5:f215(tool);
	              break;
			}
			
		}
		else
		{printf("输入错误\n");}
	}
	return 0;
}

int f211(int tool)
{
	FILE *fp5,*fp6;
	fp5=fopen("history.txt","r");
	struct HIS hh,*pp;
	int ij,i,j=0;
	if(fp5==NULL)
	{
		printf("\nOh~!");
		exit(1);
	}  
	for(ij=0;fscanf(fp5,"%ld%ld%f%s%s%d%d%d%d%d%d%d",&hh.IDH,&hh.numH,&hh.tot,hh.nameH,hh.addH,&hh.end,&hh.timeH,&hh.year,&hh.month,&hh.day,&hh.hour,&hh.minute),!feof(fp5);ij++);
	{
    if((pp=(struct  HIS *)malloc(sizeof(hh)*ij))==NULL)
	{
        printf("Application memory failure\n");
        exit(0);
    }}
    rewind(fp5);
    for(i=0;i<ij;i++)
	{
        fscanf(fp5,"%ld%ld%f%s%s%d%d%d%d%d%d%d",&pp[i].IDH,&pp[i].numH,&pp[i].tot,pp[i].nameH,pp[i].addH,&pp[i].end,&pp[i].timeH,&pp[i].year,&pp[i].month,&pp[i].day,&pp[i].hour,&pp[i].minute);
	}
    fclose(fp5);
    /*按送达时间排序*/
    for(i=0;i<ij;i++)
    {
    	if(pp[i].year<pp[i+1].year)
    	{
    		tory[0].year=pp[i].year;
    		tory[0].month=pp[i].month;
    		tory[0].day=pp[i].day;
    		tory[0].hour=pp[i].hour;
    		tory[0].minute=pp[i].minute;
    		tory[0].IDH=pp[i].IDH;
    		tory[0].numH=pp[i].numH;
    		tory[0].tot=pp[i].tot;
    		tory[0].nameH=pp[i].nameH;
    		tory[0].addH=pp[i].addH;
    		tory[0].end=pp[i].end;
    		tory[0].timeH=pp[i].timeH;
    		
    		pp[i].year=pp[i+1].year;
    		pp[i].month=pp[i+1].month;
    		pp[i].day=pp[i+1].day;
    		pp[i].hour=pp[i+1].hour;
    		pp[i].minute=pp[i+1].minute;
    		pp[i].IDH=pp[i+1].IDH;
    		pp[i].numH=pp[i+1].numH;
    		pp[i].tot=pp[i+1].tot;
    		pp[i].nameH=pp[i+1].nameH;
    		pp[i].addH=pp[i+1].addH;
    		pp[i].end=pp[i+1].end;
    		pp[i].timeH=pp[i+1].timeH;
    		
    		pp[i+1].year=tory[0].year;
    		pp[i+1].month=tory[0].month;
    		pp[i+1].day=tory[0].day;
    		pp[i+1].hour=tory[0].hour;
    		pp[i+1].minute=tory[0].minute;
    		pp[i+1].IDH=tory[0].IDH;
    		pp[i+1].numH=tory[0].numH;
    		pp[i+1].tot=tory[0].tot;
    		pp[i+1].nameH=tory[0].nameH;
    		pp[i+1].addH=tory[0].addH;
    		pp[i+1].end=tory[0].end;
    		pp[i+1].timeH=tory[0].timeH;
		}
		else if(pp[i].year=pp[i+1].year)
		{
			if(pp[i].month<pp[i+1].month)
			{
				tory[0].year=pp[i].year;
    			tory[0].month=pp[i].month;
    			tory[0].day=pp[i].day;
    			tory[0].hour=pp[i].hour;
    			tory[0].minute=pp[i].minute;
    			tory[0].IDH=pp[i].IDH;
    			tory[0].numH=pp[i].numH;
    			tory[0].tot=pp[i].tot;
    			tory[0].nameH=pp[i].nameH;
    			tory[0].addH=pp[i].addH;
    			tory[0].end=pp[i].end;
    			tory[0].timeH=pp[i].timeH;
    		
    			pp[i].year=pp[i+1].year;
    			pp[i].month=pp[i+1].month;
    			pp[i].day=pp[i+1].day;
    			pp[i].hour=pp[i+1].hour;
    			pp[i].minute=pp[i+1].minute;
    			pp[i].IDH=pp[i+1].IDH;
    			pp[i].numH=pp[i+1].numH;
    			pp[i].tot=pp[i+1].tot;
    			pp[i].nameH=pp[i+1].nameH;
    			pp[i].addH=pp[i+1].addH;
    			pp[i].end=pp[i+1].end;
    			pp[i].timeH=pp[i+1].timeH;
    		
    			pp[i+1].year=tory[0].year;
    			pp[i+1].month=tory[0].month;
    			pp[i+1].day=tory[0].day;
    			pp[i+1].hour=tory[0].hour;
    			pp[i+1].minute=tory[0].minute;
    			pp[i+1].IDH=tory[0].IDH;
    			pp[i+1].numH=tory[0].numH;
    			pp[i+1].tot=tory[0].tot;
    			pp[i+1].nameH=tory[0].nameH;
    			pp[i+1].addH=tory[0].addH;
    			pp[i+1].end=tory[0].end;
    			pp[i+1].timeH=tory[0].timeH;
    		}
    		
    		else if(pp[i].month=pp[i+1].month)
    		{
    			if(pp[i].day<pp[i+1].day)
    			{
    				tory[0].year=pp[i].year;
    				tory[0].month=pp[i].month;
    				tory[0].day=pp[i].day;
    				tory[0].hour=pp[i].hour;
    				tory[0].minute=pp[i].minute;
    				tory[0].IDH=pp[i].IDH;
    				tory[0].numH=pp[i].numH;
    				tory[0].tot=pp[i].tot;
    				tory[0].nameH=pp[i].nameH;
    				tory[0].addH=pp[i].addH;
    				tory[0].end=pp[i].end;
    				tory[0].timeH=pp[i].timeH;
    		
    				pp[i].year=pp[i+1].year;
    				pp[i].month=pp[i+1].month;
    				pp[i].day=pp[i+1].day;
    				pp[i].hour=pp[i+1].hour;
    				pp[i].minute=pp[i+1].minute;
    				pp[i].IDH=pp[i+1].IDH;
    				pp[i].numH=pp[i+1].numH;
    				pp[i].tot=pp[i+1].tot;
    				pp[i].nameH=pp[i+1].nameH;
    				pp[i].addH=pp[i+1].addH;
    				pp[i].end=pp[i+1].end;
    				pp[i].timeH=pp[i+1].timeH;
    		
    				pp[i+1].year=tory[0].year;
    				pp[i+1].month=tory[0].month;
    				pp[i+1].day=tory[0].day;
    				pp[i+1].hour=tory[0].hour;
    				pp[i+1].minute=tory[0].minute;
    				pp[i+1].IDH=tory[0].IDH;
    				pp[i+1].numH=tory[0].numH;
    				pp[i+1].tot=tory[0].tot;
    				pp[i+1].nameH=tory[0].nameH;
    				pp[i+1].addH=tory[0].addH;
    				pp[i+1].end=tory[0].end;
    				pp[i+1].timeH=tory[0].timeH;
    				
    				else if(pp[i].day=pp[i+1].day)
    				{
    					if(pp[i].hour<pp[i+1].hour)
    					{
    						tory[0].year=pp[i].year;
    						tory[0].month=pp[i].month;
    						tory[0].day=pp[i].day;
    						tory[0].hour=pp[i].hour;
    						tory[0].minute=pp[i].minute;
    						tory[0].IDH=pp[i].IDH;
    						tory[0].numH=pp[i].numH;
    						tory[0].tot=pp[i].tot;
    						tory[0].nameH=pp[i].nameH;
    						tory[0].addH=pp[i].addH;
    						tory[0].end=pp[i].end;
    						tory[0].timeH=pp[i].timeH;
    		
    						pp[i].year=pp[i+1].year;
    						pp[i].month=pp[i+1].month;
    						pp[i].day=pp[i+1].day;
    						pp[i].hour=pp[i+1].hour;
    						pp[i].minute=pp[i+1].minute;
    						pp[i].IDH=pp[i+1].IDH;
    						pp[i].numH=pp[i+1].numH;
    						pp[i].tot=pp[i+1].tot;
    						pp[i].nameH=pp[i+1].nameH;
    						pp[i].addH=pp[i+1].addH;
    						pp[i].end=pp[i+1].end;
    						pp[i].timeH=pp[i+1].timeH;
    		
    						pp[i+1].year=tory[0].year;
    						pp[i+1].month=tory[0].month;
    						pp[i+1].day=tory[0].day;
    						pp[i+1].hour=tory[0].hour;
    						pp[i+1].minute=tory[0].minute;
    						pp[i+1].IDH=tory[0].IDH;
    						pp[i+1].numH=tory[0].numH;
    						pp[i+1].tot=tory[0].tot;
    						pp[i+1].nameH=tory[0].nameH;
    						pp[i+1].addH=tory[0].addH;
    						pp[i+1].end=tory[0].end;
    						pp[i+1].timeH=tory[0].timeH;
						}
    					else if(pp[i].hour=pp[i+1].hour)
    					{
    						if(pp[i].minute<pp[i+1].minute)
    						{
    							tory[0].year=pp[i].year;
    							tory[0].month=pp[i].month;
    							tory[0].day=pp[i].day;
    							tory[0].hour=pp[i].hour;
    							tory[0].minute=pp[i].minute;
    							tory[0].IDH=pp[i].IDH;
    							tory[0].numH=pp[i].numH;
    							tory[0].tot=pp[i].tot;
    							tory[0].nameH=pp[i].nameH;
    							tory[0].addH=pp[i].addH;
    							tory[0].end=pp[i].end;
    							tory[0].timeH=pp[i].timeH;
    		
    							pp[i].year=pp[i+1].year;
    							pp[i].month=pp[i+1].month;
    							pp[i].day=pp[i+1].day;
    							pp[i].hour=pp[i+1].hour;
    							pp[i].minute=pp[i+1].minute;
    							pp[i].IDH=pp[i+1].IDH;
    							pp[i].numH=pp[i+1].numH;
    							pp[i].tot=pp[i+1].tot;
    							pp[i].nameH=pp[i+1].nameH;
    							pp[i].addH=pp[i+1].addH;
    							pp[i].end=pp[i+1].end;
    							pp[i].timeH=pp[i+1].timeH;
    		
    							pp[i+1].year=tory[0].year;
    							pp[i+1].month=tory[0].month;
    							pp[i+1].day=tory[0].day;
    							pp[i+1].hour=tory[0].hour;
    							pp[i+1].minute=tory[0].minute;
    							pp[i+1].IDH=tory[0].IDH;
    							pp[i+1].numH=tory[0].numH;
    							pp[i+1].tot=tory[0].tot;
    							pp[i+1].nameH=tory[0].nameH;
    							pp[i+1].addH=tory[0].addH;
    							pp[i+1].end=tory[0].end;
    							pp[i+1].timeH=tory[0].timeH;
							}
						}
					}
				}
			}
		}
	}
/*历史记录查询*/
    fp6=fopen("comment.txt","r");
	struct COMMENT gg,*ppp;
	int k=0,l=0;
	if(fp6==NULL)
	{
		printf("\nOh~!");
		exit(1);
	}  
	for(ij=0;fscanf(fp6,"%ld%ld%ld%ld%s%s%f%f",&gg.numC,&gg.idC,&gg.idF,&gg.idR,gg.nC,gg.com,&gg.score,&gg.pri),!feof(fp6);ij++);
	{
    if((ppp=(struct  COMMENT *)malloc(sizeof(gg)*ij))==NULL)
	{
        printf("Application memory failure\n");
        exit(0);
    }
	}
    rewind(fp6);
    for(i=0;i<ij;i++)
	{
        fscanf(fp6,"%ld%ld%ld%ld%s%s%f%f",&ppp[i].numC,&ppp[i].idC,&ppp[i].idF,&ppp[i].idR,ppp[i].nC,ppp[i].com,&ppp[i].score,&ppp[i].pri),!feof(fp6);
	}
    fclose(fp6);
    
	for(i=0;i<100;i++)
	{
		if(pp[i].IDH==identity);
		{
			p[j].IDP==identity;
			p[j].numP==pp[i].numH;
			p[j].totP==pp[i].tot;
			p[j].nameP==pp[i].nameH;
			p[j].addP==pp[i].addH;
			p[j].endP==pp[i].end;
			p[j].timeP==pp[i].timeH;
			j++;
		}

    for(i=0;i<150;i++)
	{
		if(ppp[i].idC==identity)
		{
			c[k].numc==ppp[i].numC;
			c[k].idc==ppp[i].idC;
			c[k].idf==ppp[i].idF;
			c[k].idr==ppp[i].idR;
			c[k].nc==ppp[i].nC;
			c[k].comc==ppp[i].com;
			c[k].scorec==ppp[i].score;
			c[k].pric==ppp[i].pri;
			k++;
		}
	}	
	}
	printf("订单信息如下：\n");
	for(i=0;i<=j;i++)
	{
		printf("订单No.%d\n",i+1);
		printf("订单号：%ld\n",p[i].numP);
		printf("订单地址：%s\n",p[i].addP);
		printf("餐馆名称：%s\n",p[i].nameP);
		for(ij=0;ij<=k;ij++)
		{
			if(c[k].numc==p[i].numP)/*历史记录编号一致*/
			{
				printf("菜品No.%d\n",l+1);
			    printf("菜品名：%s\n",c[l].nc);
			    printf("菜品价格：%.2f\n",c[l].pric);
			    printf("您对本菜品的评论：\n%s\n",c[l].comc);
			    l++;
			}
			
		}
		printf("总价：%.2f\n",p[i].totP);
		if(p[i].endP==1)
		{
			printf("订单已完成\n\n");
		}
		else
		{
			printf("订单未完成\n\n");
		}
	}	
	
	return 0;
	
}

int f212(int tool)
{
	/*取消订单*/
	return 0;
}

int f213(int tool)
{
	/*评价订单*/
	return 0;
}

int f214(int tool)
{
	/*订餐*/
	return 0;
}

int f215(int tool)
{
	/*账号管理*/
	return 0;
}

int f22(int tool)
{
	int ii;
	int f221(int);
    int f222(int);
    int f223(int);
    int f224(int);
    int f225(int);
	int choose4;
	for(ii=0;ii<100;ii++)
	{
		printf("添加所属餐馆请按1\n查询菜品请按2\n添加菜品信息请按3\n查询订单请按4\n账号管理请按5\n返回上级菜单请按0\n");
		scanf("%d",&choose4);
		if(choose4==0)
		  {printf("登出成功\n");
		   break;
		   return 0;}
		else if(choose4==1||choose4==2||choose4==3||choose4==4||choose4==5)
		{
			switch(choose4)
			{
				case 1:f221(tool);
		          break;
	            case 2:f222(tool);
	              break;
	            case 3:f223(tool);
	              break;
	            case 4:f224(tool);
	              break;
	            case 5:f225(tool);
	              break;
			}
			
		}
		else
		{printf("输入错误\n");}
	}
	return 0;
}

int f221(int tool)
{
	/*添加餐馆相关信息到餐馆库*/
	return 0;
}

int f222(int tool)
{
	/*查询菜品*/
	return 0;
}

int f223(int tool)
{
	/*添加菜品*/
	return 0;
}

int f224(int tool)
{
	/*查询订单*/
	int f2241(int);
	int f2242(int);
	
	int choose;
	while(1)
	{
		printf("查看用户订单情况请按1\n统计用户订单情况请按2\n返回上级菜单请按0\n");
	 	scanf("%d",&choose);
		if(choose==0)
		  {printf("返回成功\n");
		   break;
		   return 0;}
		else if(choose==1||choose==2)
		{
			switch(choose)
			{
				case 1:f2241(tool);
		          break;
	            case 2:f2242(tool);
	              break;
			}
			
		}
		else
		{printf("\n输入错误，请重新输入！\n\n");}
	
	 } 
	return 0;
}

int f2241(int tool)
{
	int x=0,i,y=-1;
	while(1)
	{
	for(i=0;i<100;i++)
	{
		if(man[x].IDM==res[i].ID1)
		{
			y=i;
			printf("\n查找到餐馆：%s\n",res[i].nameR);
			break;
		}
	}
	
	if(y!=-1)
	{
		break;
	 } 
	 
	if(y==-1)
	{
		printf("\该管理员没有所属餐馆！\n");	
	}
	}
	
	for(i=0;i<100;i++)
	{
		if(strcmp(res[y].nameR,his[i].nameH)=0)
		{
			
			break;
		}
	 } 
	 
}

int f2242(int tool)
{
	
}

int f225(int tool)
{
	/*账号管理*/
	return 0;
}
