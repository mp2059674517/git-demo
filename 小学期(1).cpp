#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int tool=0,N=0;
long identity;/*ָ���ǵ�¼�û����˺�*/
struct RES/*������*/
{
	char nameR[30];/*������*/
	long ID1;/*�������*/
	char areaR[20];/*�������ڵ���*/
	char styR[20];/*��ʽ*/
	char timeR[15];/*Ӫҵʱ��*/
	int proceeds;/*�͹�����*/
	float scoreR;/*����ƽ������*/
	float speedA;/*�����ٶ�*/
	char introduction[100];/*�Բ����Ľ���*/
	float mindel;/*��С���ͽ��*/
	float pacfee;/*�˷����װ��*/
	int limit;/*����������*/
	int salvolR;/*�͹�����*/
}res[100];

struct FOOD/*��Ʒ��*/
{
	char nameF[25];/*ʳ������*/
	long numF;/*��Ʒ���*/
	int saleF;/*��Ʒ����*/
	int recF;/*��Ʒƽ������*/
	long ID2;/*���������ı��*/
	float priceF;/*��Ʒ�۸�*/
	char nameR2[15];/*������������*/
}food[200];

struct CON/*�����û���*/
{
	long IDC;/*�˿ͱ��*/
	char nameC[15];/*�˿�����*/
	char sex[6];/*�Ա�*/
	char phonum[11];/*11λ�绰����*/
	char addC[50];/*���͵�ַ*/
	char areaC[20];/*���ڵ���*/
	char pasC[10];/*����*/
	char emailC[25];/*���䣨�˺ţ�*/
}con[50];

struct MAN/*����Ա��*/
{
	long IDM;/*����Ա���*/
	char nameR1[15];/*����Ա��������*/
	long idMR;/*����Ա���������ı��*/
	char nameM[25];/*����Ա����*/
	char pasM[10];/*����Ա����*/
	char emailM[25];/*����Ա����*/
}man[50];

struct HIS/*��������ʷ��¼��*/
{
	long IDH;/*����ʷ��¼����Ӧ�Ŀͻ��ı��*/
	long numH;/*�������*/
	float tot;/*�����ܶ�*/
	char nameH[30];/*�͹���*/
	int timeH;/*������ʱ*/
	char addH[50];/*���͵ص�*/

	int end;/*�Ƿ���ɣ�1Ϊ��ɣ�0Ϊδ���*/
	/*����Ϊ�ʹ�ʱ��*/
	int year;
	int month;
	int day;
	int hour;
	int minute;
	/*����Ϊ�µ�ʱ��*/
	int HOUR;
	int MINUTE;
}his[100],tory[1];

struct COMMENT/*���ۿ�*/
{
	long numC;/*�������������ı��*/
	long idC;/*�������۵Ŀͻ��ı��*/
	long idF;/*�����۵Ĳ�Ʒ�ı��*/
	char nC[25];/*�����۵�ʳƷ��*/
	char com[150];/*������������*/
	float score;/*�Բ�Ʒ������*/
	long idR;/*�����۵Ĳ�Ʒ���������ı��*/
	float pri;/*�ò�Ʒ�ļ۸�*/
	
}comment[150];

struct P/*(tool)�����Ϳͻ�����ʷ��¼*/
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
	    int hourP;/*24Сʱ��*/
	    int minuteP;
	}p[100];
struct C/*(tool)���ۿ�*/
   {
	    long numc;/*�������������ı��*/
	    long idc;/*�������۵Ŀͻ��ı��*/
	    long idf;/*�����۵Ĳ�Ʒ�ı��*/
	    char nc[25];/*�����۵�ʳƷ��*/
		char comc[150];/*������������*/
		float scorec;/*�Բ�Ʒ������*/
		long idr;/*�����۵Ĳ�Ʒ��������*/
		float pric;/*�ò�Ʒ�ļ۸�*/	
   }c[150];	
	
int main()
{
	printf("��ӭʹ�ñ�����ϵͳ\n");
	int f1(int);
    int f2(int);
	int iii;
	for(iii=0;iii<120;iii++)
	{
		printf("�û�ע���밴1\n�û���¼�밴2\n�˳�ϵͳ�밴0\n");/*��һ��*/
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
		{printf("�������\n");}
	}	
	return 0;
}

int f1(int tool)
      /*�û�ע��*/
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
		printf("�����û���¼�밴1\n����Ա��¼�밴2\n�����ϼ��˵��밴0\n");
	    int choose2;
	    scanf("%d",&choose2);
		if(choose2==0)
		  {printf("���سɹ�\n");
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
		{printf("�������\n");}
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
	/*�����û���¼*/
	scanf("%ld",&identity);
	/*��¼�ɹ���*/
	int iiiii,choose3;
	for(iiiii=0;iiiii<100;iiiii++)
	{
		printf("��ѯ�����밴1\nȡ�������밴2\n���۶����밴3\n�����밴4\n�˺Ź����밴5\n�˳���¼�밴0\n");
		scanf("%d",&choose3);
		if(choose3==0)
		  {printf("�ǳ��ɹ�\n");
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
		{printf("�������\n");}
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
    /*���ʹ�ʱ������*/
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
/*��ʷ��¼��ѯ*/
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
	printf("������Ϣ���£�\n");
	for(i=0;i<=j;i++)
	{
		printf("����No.%d\n",i+1);
		printf("�����ţ�%ld\n",p[i].numP);
		printf("������ַ��%s\n",p[i].addP);
		printf("�͹����ƣ�%s\n",p[i].nameP);
		for(ij=0;ij<=k;ij++)
		{
			if(c[k].numc==p[i].numP)/*��ʷ��¼���һ��*/
			{
				printf("��ƷNo.%d\n",l+1);
			    printf("��Ʒ����%s\n",c[l].nc);
			    printf("��Ʒ�۸�%.2f\n",c[l].pric);
			    printf("���Ա���Ʒ�����ۣ�\n%s\n",c[l].comc);
			    l++;
			}
			
		}
		printf("�ܼۣ�%.2f\n",p[i].totP);
		if(p[i].endP==1)
		{
			printf("���������\n\n");
		}
		else
		{
			printf("����δ���\n\n");
		}
	}	
	
	return 0;
	
}

int f212(int tool)
{
	/*ȡ������*/
	return 0;
}

int f213(int tool)
{
	/*���۶���*/
	return 0;
}

int f214(int tool)
{
	/*����*/
	return 0;
}

int f215(int tool)
{
	/*�˺Ź���*/
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
		printf("��������͹��밴1\n��ѯ��Ʒ�밴2\n��Ӳ�Ʒ��Ϣ�밴3\n��ѯ�����밴4\n�˺Ź����밴5\n�����ϼ��˵��밴0\n");
		scanf("%d",&choose4);
		if(choose4==0)
		  {printf("�ǳ��ɹ�\n");
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
		{printf("�������\n");}
	}
	return 0;
}

int f221(int tool)
{
	/*��Ӳ͹������Ϣ���͹ݿ�*/
	return 0;
}

int f222(int tool)
{
	/*��ѯ��Ʒ*/
	return 0;
}

int f223(int tool)
{
	/*��Ӳ�Ʒ*/
	return 0;
}

int f224(int tool)
{
	/*��ѯ����*/
	int f2241(int);
	int f2242(int);
	
	int choose;
	while(1)
	{
		printf("�鿴�û���������밴1\nͳ���û���������밴2\n�����ϼ��˵��밴0\n");
	 	scanf("%d",&choose);
		if(choose==0)
		  {printf("���سɹ�\n");
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
		{printf("\n����������������룡\n\n");}
	
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
			printf("\n���ҵ��͹ݣ�%s\n",res[i].nameR);
			break;
		}
	}
	
	if(y!=-1)
	{
		break;
	 } 
	 
	if(y==-1)
	{
		printf("\�ù���Աû�������͹ݣ�\n");	
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
	/*�˺Ź���*/
	return 0;
}
