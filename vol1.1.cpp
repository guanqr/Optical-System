#include <graphics.h>
#include"ark_l.h"
#include"ark_w.h"
//main�������� 
int main(void) {
 	char filename[10];
 	
	int i,k,c;
	double f1,l1,lh1,y0,y01,ls1,ls11,dL,dL1,yp1,yp11,dy,dy1,xt1,xs1,lp1;
	
    
    //printf("�����뾵Ƭ������\n");
	//scanf("%d",&k);
	//system("CLS");
	k=3;                              //����ʱ��
    /*if(c==2){
		printf("���������y��\n");
		scanf("%le",&y);
	}*/

	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

	setinitmode(0, 0, 0);
	initgraph(1520, 760);
	setbkcolor(EGERGB(0x0, 0x0, 0x0));
	setfillcolor(EGERGB(220,220,220));//�ҿ� 
	bar(5, 5, 1515, 30);
	bar(5,35,400,755);
	setfillcolor(EGERGB(0xff,0xff,0xff));//�׿� 
	bar(100, 7, 200, 28);
	bar(300, 7, 400, 28);
	bar(500, 7, 600, 28);
	bar(700, 7, 800, 28);
	bar(900, 7, 1000, 28);
	bar(1150, 7, 1250, 28);
	bar(1350, 7, 1450, 28);
	setfillcolor(EGERGB(175,238,238));//���� 
	bar(1458,7,1510,28);
	bar(18,39,95,60);
	bar(108,39,185,60);
	setfont(16, 0, "����");
	setcolor(WHITE);
	setbkmode(TRANSPARENT);
	outtextxy(1230, 740, "Copytight 2019 GUAN.LI.LUO v0.0.1");
	setfont(18, 0, "����");
	setcolor(BLACK);
	outtextxy(20, 7, "��ȡ�ļ�");
	outtextxy(220, 7, "�׾�ϵ��");
	outtextxy(420,7, "���׾�");
	outtextxy(620, 7, "�ӳ�ϵ��");
	outtextxy(820, 7, "����ӳ�");
	outtextxy(1020, 7, "����Զ��(1/2)");
	outtextxy(1270, 7, "��ĸ߶�");
	outtextxy(1466, 7, "���");
	outtextxy(20, 40, "������");
	outtextxy(110, 40, "������");
	char str1[100]={0};
	char str2[100]={0};
	char str3[100]={0};
	char str4[100]={0};
	char str5[100]={0};
	char str6[100]={0};
	char str7[100]={0};//�������������� 
	int bz1,bz2,bz3,bz4,bz5,bz6,bz7;
	int key=0,key1=0; 
	bz1=0;bz1=0;bz2=0;bz3=0;bz4=0;bz5=0;bz6=0;bz7=0;
	int x,y;
	mouse_msg msg = {0};
	for ( ; is_run(); delay_fps(60))//�ж���갴���ض����� 
	{
		while (mousemsg())
		{
			msg = getmouse();
		}
	 	mousepos(&x,&y);
    	if((x>100&&x<200)&&(y>7&&y<28)){
	    	if(msg.is_down()==1){
	    		if(bz1==0){
	    			inputbox_getline("��ȡ�ļ�", "��������Ҫ��ȡ���ļ�", str1, 100);
		    	    outtextxy(110, 7, str1);
		    	    key1=1;
		    	    strcpy(filename, str1);
		    	    read_data(filename,k);
   
		    	    bz1=1;
				}	    
	    	}
    	}
    	else if((x>300&&x<400)&&(y>7&&y<28)){
	    	if(msg.is_down()==1){
	    		if(bz2==0){
	    			inputbox_getline("�׾�ϵ��", "���趨�׾�ϵ��", str2, 100);
		    	    outtextxy(310, 7, str2);
		    	    ka=str_doubtrans(str2);//+++++++++++++++++++++++++++++++++++
					bz2=1;
				} 
	    	}
    	} 
    	else if((x>500&&x<600)&&(y>7&&y<28)){
	    	if(msg.is_down()==1){
	    		if(bz3==0){
	    			inputbox_getline("���׾�", "���趨���׾�", str3, 100);
		        	outtextxy(510, 7, str3);
		        	a=str_doubtrans(str3);
	    			bz3=1;
				}
	    	}
    	} 
    	else if((x>700&&x<800)&&(y>7&&y<28)){
	    	if(msg.is_down()==1){
	    		if(bz4==0){
	    			inputbox_getline("�ӳ�ϵ��", "���趨�ӳ�ϵ��", str4, 100);
		        	outtextxy(710, 7, str4);
		        	km=str_doubtrans(str4);
	    			bz4=1;
				}  
	    	}
    	} 
    	else if((x>900&&x<1000)&&(y>7&&y<28)){
	    	if(msg.is_down()==1){
	    		if(bz5==0){
	    			inputbox_getline("����ӳ�", "���趨����ӳ�(������������)", str5, 100);
		    	    outtextxy(910, 7, str5);
		    	    m=-str_doubtrans(str5);
	    			bz5=1;
				}	    
	    	}
    	} 
    	else if((x>1150&&x<1250)&&(y>7&&y<28)){
	    	if(msg.is_down()==1){
	    		if(bz6==0){
	    			inputbox_getline("����Զ��", "���趨�Ƿ�Ϊ����Զ��(1Ϊ����Զ�2Ϊ�������)", str6, 100);
		    	    outtextxy(1160, 7, str6);
		    	    c=(int)(str_doubtrans(str6));
	    			bz6=1;
				}
	    	}
    	} 
    	else if((x>1350&&x<1450)&&(y>7&&y<28)){
	    	if(msg.is_down()==1){
	    		if(bz7==0){
	    			inputbox_getline("��ĸ߶�", "���趨��ĸ߶�", str7, 100);
		    	    outtextxy(1360, 7, str7);
	    			bz7=1;
				}	    
	    	}
    	} 
    	else if((x>1458&&x<1510)&&(y>7&&y<28)){
	    	if(msg.is_down()==1){
	    		setfillcolor(EGERGB(0xff,0xff,0xff));
	            bar(100, 7, 200, 28);
	            bar(300, 7, 400, 28);
	            bar(500, 7, 600, 28);
               	bar(700, 7, 800, 28);
             	bar(900, 7, 1000, 28);
             	bar(1150, 7, 1250, 28);
            	bar(1350, 7, 1450, 28);  
				bz1=0;bz1=0;bz2=0;bz3=0;bz4=0;bz5=0;bz6=0;bz7=0;
				key1=0;
	    	}
    	}
    	else if((x>18&&x<95)&&(y>39&&y<60)){//������ 
	    	if(msg.is_down()==1){
	    		if(key==0){
	    			key=1;
	    		    if(key1==0) outtextxy(80, 280, "���ȡ�ļ���");
	    		    else{
	
	//��һ����ѭ�������				
	get_head1(c);
    get_head2(c);
   	get_head3(c);
   	get_head4(c);    //��ȡ�Ĵ�����������Ϣ 
	 
   	f1=get_f1();
   	l1=get_l1();
	lh1=l1-f1;
	y0=f1*tan(-m/180*Pi);
	y01=f1*tan(-m/180*0.7*Pi);
	ls1=get_ls1();
	ka=0.7;
	get_head4(c);
	ls11=get_ls1();k=1;
	dL=ls1-l1;
	dL1=ls11-l1; 
	yp1=get_yp1();
	m=-2.1;
	get_head1(c);
	yp11=get_yp1();m=-3;get_head1(c);
	dy=yp1-y0;
	xt1=get_xt1();
	xs1=get_xs1();
	lp1=get_lp1();
					
					 
                   	char f1s[200],l1s[200],lh1s[200],y0s[200],y01s[200],ls1s[200],
					      ls11s[200],dLs[200],dL1s[200],yp1s[200],yp11s[200],dys[200],
						  dyy0s[200],ypy01s[200],ypyy01s[200],xt1s[200],xs1s[200],xtxs1s[200],lp1s[200];
		
                 	sprintf(f1s,"%le",f1);
                 	sprintf(l1s,"%le",l1);
                 	sprintf(lh1s,"%le",lh1);
                 	sprintf(y0s,"%le",y0);
                 	sprintf(y01s,"%le",y01);
                 	sprintf(ls1s,"%le",ls1);
                 	sprintf(ls11s,"%le",ls11);
                 	sprintf(dLs,"%le",dL);
                 	sprintf(dL1s,"%le",dL1);
                 	sprintf(yp1s,"%le",yp1);
                 	sprintf(yp11s,"%le",yp11);
                 	sprintf(dys,"%le",dy);
                 	sprintf(dyy0s,"%le",dy/y0);
                 	sprintf(ypy01s,"%le",yp11-y01);
                 	sprintf(ypyy01s,"%le",(yp11-y01)/y01);
                 	sprintf(xt1s,"%le",xt1);
                 	sprintf(xs1s,"%le",xs1);
                 	sprintf(xtxs1s,"%le",xt1-xs1);
                 	sprintf(lp1s,"%le",lp1);
                 	
                 	setcolor(BLACK);
                 	outtextxy(20, 80, "����");
                    outtextxy(20, 100, "�������");
                    outtextxy(20, 120, "������λ��lH'");
                    outtextxy(20, 140, "�������y0'");
                    outtextxy(20, 160, "0.7�ӳ��������y0'");
                    outtextxy(20, 180, "ʵ�����");
                    outtextxy(20, 200, "0.7�׾�ʵ�����");
                    outtextxy(20, 220, "���");
                    outtextxy(20, 240, "0.7�׾����");
                    outtextxy(20, 260, "ʵ�����");
                    outtextxy(20, 280, "0.7�ӳ�ʵ�����");
                    outtextxy(20, 300, "ȫ�ӳ����Ի���");
                    outtextxy(20, 320, "ȫ�ӳ���Ի���");
                    outtextxy(20, 340, "0.7�ӳ����Ի���");
                    outtextxy(20, 360, "0.7�ӳ���Ի���");
                    outtextxy(20, 380, "���糡��");
                    outtextxy(20, 400, "��ʸ����");
                    outtextxy(20, 420, "��ɢ");
                    outtextxy(20, 440, "��ͫ��");
                    //
                    outtextxy(200, 80, f1s);
                    outtextxy(200, 100, l1s);
                    outtextxy(200, 120, lh1s);
                    outtextxy(200, 140, y0s);
                    outtextxy(200, 160, y01s);
                    outtextxy(200, 180, ls1s);
                    outtextxy(200, 200, ls11s);
                    outtextxy(200, 220, dLs);
                    outtextxy(200, 240, dL1s);
                    outtextxy(200, 260, yp1s);
                    outtextxy(200, 280, yp11s);
                    outtextxy(200, 300, dys);
                    outtextxy(200, 320, dyy0s);
                    outtextxy(200, 340, ypy01s);
                    outtextxy(200, 360, ypyy01s);
                    outtextxy(200, 380, xt1s);
                    outtextxy(200, 400, xs1s);
                    outtextxy(200, 420, xtxs1s);
                    outtextxy(200, 440, lp1s);
                    
                    
                    

                    } 
                }
	    	}
    	}
    	else if((x>108&&x<185)&&(y>39&&y<60)){
	    	if(msg.is_down()==1){
	    		key=0;
	    		setfillcolor(EGERGB(220,220,220));//�ҿ� 
            	bar(5,35,400,755);
            	setfillcolor(EGERGB(175,238,238));//���� 
            	bar(18,39,95,60);
            	bar(108,39,185,60);
            	outtextxy(20, 40, "������");
	            outtextxy(110, 40, "������");
	    	}
    	}
    }	
	getch();
	closegraph();
	
	//wirte_result();
}
