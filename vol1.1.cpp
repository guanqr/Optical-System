#include"ark_l.h"
#include"ark_w.h"


//main�������� 
int main(void) {
 	char filename[10];
 	
	int i,k,c,y;
	double f1,l1,lh1,y0,y01,ls1,ls11,dL,dL1,yp1,yp11,dy,dy1,xt1,xs1,lp1;	
	
	//printf("�������ļ�����\n");
    //scanf("%s",filename);
    //system("CLS");
    strcpy(filename,"test.txt");      //����ʱ�� 
    
    //printf("�����뾵Ƭ������\n");
	//scanf("%d",&k);
	//system("CLS");
	k=3;                              //����ʱ��
    
    //printf("��������ֱͫ����\n");
    //scanf("%d",&a);
	//system("CLS");
	a=10; ka=1;                             //����ʱ��
	
	//printf("�������ӳ��ǣ�ȡ��������\n");
    //scanf("%d",&m);
	//system("CLS");
	m=-3; km=1;                             //����ʱ��
	while(c!=1&&c!=2){
	
	printf("�����Ƿ�������Զ��\n");
	printf("1.��\n");
	printf("2.��\n");
	printf("���ѡ��");
    scanf("%d",&c);
	system("CLS");
	}
	
	/*if(c==2){
		printf("���������y��\n");
		scanf("%le",&y);
	}*/
		
    read_data(filename,k);
    
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
	
		
   	printf("������%le\n",f1);
    printf("���������%le\n",l1);
    printf("������λ��lH����%le\n",lh1);
    printf("�������y0����%le\n",y0);
	printf("0.7�ӳ��������y0����%le\n",y01);
	printf("ʵ�������%le\n",ls1);
	printf("0.7�׾�ʵ�������%le\n",ls11);
	printf("�����%le\n",dL);
	printf("0.7�׾������%le\n",dL1);
	printf("ʵ�������%le\n",yp1);
	printf("0.7�ӳ�ʵ�������%le\n",yp11);
	printf("ȫ�ӳ����Ի�����%le\n",dy);
	printf("ȫ�ӳ���Ի�����%le\n",dy/y0);
	printf("0.7�ӳ����Ի�����%le\n",yp11-y01);
	printf("0.7�ӳ���Ի�����%le\n",(yp11-y01)/y01);
	printf("���糡����%le\n",xt1);
	printf("��ʸ������%le\n",xs1);
	printf("��ɢ��%le\n",xt1-xs1);
	printf("��ͫ����%le\n",lp1);
	wirte_result();
	 

}




