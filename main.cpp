#include"ark_l.h"
#include"ark_w.h"


//main�������� 
int main(void) {
 	char filename[10];
 	
	int i,k,c,y;
	double cs;	
	
	//printf("�������ļ�����\n");
    //scanf("%s",filename);
    //system("CLS");
    strcpy(filename,"test.txt");      //����ʱ�� 
    
    //printf("�����뾵Ƭ������\n");
//	scanf("%d",&k);
	//system("CLS");
                           //����ʱ��
    
    //printf("��������ֱͫ����\n");
    //scanf("%le",&a);
	//system("CLS");
                        //����ʱ��
	//printf("������׾�ϵ����\n");
    //scanf("%le",&ka);
	//system("CLS");
	
	//printf("�������ӳ��ǣ�ȡ��������\n");
    //scanf("%le",&m);
	//system("CLS");
                         //����ʱ��
	
	//printf("�������ӳ�ϵ����\n");
    //scanf("%le",&km);
	//system("CLS");
	
	/*while(c!=1&&c!=2){
	
	printf("�����Ƿ�������Զ��\n");
	printf("1.��\n");
	printf("2.��\n");
	printf("���ѡ��");
    scanf("%d",&c);
	system("CLS");
	}
	
	if(c==2){
		printf("��������ߣ�\n");
		scanf("%le",&xg);
	}*/
	k=3; a=10; ka=1; m=-3; km=1 ; 	
    read_data(filename,k);
    
    
    
    //printf("%le\n",get_yp1_c(filename,k,1));
    //printf("%le\n",get_yp1_c(filename,k,2));
    /*i=1;
    while(i!=0){
    	printf("������Ҫ�鿴�Ĳ�����\n");
    	printf("1.���     2.����۲� 3.����\n");
    	printf("4.���糡�� 5.��ʸ���� 6.��ɢ\n");
    	printf("7.����     8.����λ�� 9.��ͫ��\n"); 
    	printf("0.��������\n");
    	printf("���ѡ��");
		scanf("%d",&i) ;
		switch(i){
			case 0:break; 
			case 1:cs=get_ls1(c)-get_l1(c);printf("���Ϊ:%le",cs);getch();break;
			case 2:cs=get_Ks(c);           printf("����۲�Ϊ:%le",cs);getch();break;
			case 3:cs=get_yp1(c)-get_y0(c);printf("����Ϊ:%le",cs);getch();break;
			case 4:cs=get_xt1(c);printf("���糡��Ϊ:%le",cs);getch();break;
			case 5:cs=get_xs1(c);printf("��ʸ����Ϊ:%le",cs);getch();break;
			case 6:cs=get_xt1(c)-get_xs1(c);printf("��ɢΪ:%le",cs);getch();break;
			case 7:cs=get_f1();printf("����Ϊ:%le",cs);getch();break;
			case 8:cs=get_l1(c)-get_f1();printf("����λ��Ϊ:%le",cs);getch();break;
			case 9:cs=get_lp1(c);printf("��ͫ����Ϊ:%le",cs);getch();break;
		}
	system("CLS");	
	}
    
    
    //l1=get_xt1(2);
    //printf("xt1 is %le\n",l1);
    
    
    
    */
   
	
	FILE* fp1=fopen("result.txt", "w");
	fprintf(fp1,"����Զ�������\n");
	c=1; 
   	fprintf(fp1,"�����ǣ�%le\n",get_f1());
    fprintf(fp1,"d����������ǣ�%le\n",get_l1(c));
    fprintf(fp1,"c����������ǣ�%le\n",get_l1_c(filename,k,c));
    fprintf(fp1,"f����������ǣ�%le\n",get_l1_f(filename,k,c));
	fprintf(fp1,"d��ʵ������ǣ�%le\n",get_ls1(c));
	fprintf(fp1,"c��ʵ������ǣ�%le\n",get_ls1_c(filename,k,c));
	fprintf(fp1,"f��ʵ������ǣ�%le\n",get_ls1_f(filename,k,c));
	ka=0.7;
	fprintf(fp1,"0.7�׾�d��ʵ������ǣ�%le\n",get_ls1(c));
	fprintf(fp1,"0.7�׾�c��ʵ������ǣ�%le\n",get_ls1_c(filename,k,c));
	fprintf(fp1,"0.7�׾�f��ʵ������ǣ�%le\n",get_ls1_f(filename,k,c));
	ka=1; 
	fprintf(fp1,"������λ��lH���ǣ�%le\n",get_l1(c)-get_f1());
	fprintf(fp1,"��ͫ���ǣ�%le\n",get_lp1(c));
	
    fprintf(fp1,"�������y0���ǣ�%le\n",get_y0(c));
    km=0.7;
	fprintf(fp1,"0.7�ӳ��������y0���ǣ�%le\n",get_y0(c));
	km=1;
	fprintf(fp1,"����ǣ�%le\n",get_ls1(c)-get_l1(c));
	ka=0.7;
	fprintf(fp1,"0.7�׾�����ǣ�%le\n",get_ls1(c)-get_l1(c));
	ka=1; 
	fprintf(fp1,"λ��ɫ���ǣ�%le\n",get_ls1_f(filename,k,c)-get_ls1_c(filename,k,c));
	ka=0.7; 
	fprintf(fp1,"0.7�׾�λ��ɫ���ǣ�%le\n",get_ls1_f(filename,k,c)-get_ls1_c(filename,k,c));
	fprintf(fp1,"0�׾�λ��ɫ���ǣ�%le\n",get_l1_f(filename,k,c)-get_l1_c(filename,k,c));
	fprintf(fp1,"���糡���ǣ�%le\n",get_xt1(c));
	fprintf(fp1,"��ʸ�����ǣ�%le\n",get_xs1(c));
	fprintf(fp1,"��ɢ�ǣ�%le\n",get_xt1(c)-get_xs1(c));
	fprintf(fp1,"d��ʵ������ǣ�%le\n",get_yp1(c));
	fprintf(fp1,"c��ʵ������ǣ�%le\n",get_yp1_c(filename,k,c));
	fprintf(fp1,"f��ʵ������ǣ�%le\n",get_yp1_f(filename,k,c));
	km=0.7;
	fprintf(fp1,"0.7�ӳ�d��ʵ������ǣ�%le\n",get_yp1(c));
	fprintf(fp1,"0.7�ӳ�c��ʵ������ǣ�%le\n",get_yp1_c(filename,k,c));
	fprintf(fp1,"0.7�ӳ�f��ʵ������ǣ�%le\n",get_yp1_f(filename,k,c));
	km=1;
	fprintf(fp1,"���Ի����ǣ�%le\n",get_yp1(c)-get_y0(c));
	fprintf(fp1,"��Ի����ǣ�%le\n",(get_yp1(c)-get_y0(c))/get_y0(c));
	km=0.7;
	fprintf(fp1,"0.7�ӳ����Ի����ǣ�%le\n",get_yp1(c)-get_y0(c));
	fprintf(fp1,"0.7�ӳ���Ի����ǣ�%le\n",(get_yp1(c)-get_y0(c))/get_y0(c));
	km=1;
	fprintf(fp1,"����ɫ���ǣ�%le\n",get_yp1_f(filename,k,c)-get_yp1_c(filename,k,c));
	km=0.7;
	fprintf(fp1,"0.7�ӳ�����ɫ���ǣ�%le\n",get_yp1_f(filename,k,c)-get_yp1_c(filename,k,c));
	km=1;ka=1;
	fprintf(fp1,"����۲��ǣ�%le\n",get_Ks(c)); 
	km=0.7;ka=1;
	fprintf(fp1,"0.7�ӳ�����۲��ǣ�%le\n",get_Ks(c)); 
	km=1;ka=0.7;
	fprintf(fp1,"0.7�׾�����۲��ǣ�%le\n",get_Ks(c)); 
	km=0.7;ka=0.7;
	fprintf(fp1,"0.7�ӳ���0.7�׾�����۲��ǣ�%le\n",get_Ks(c)); 
	
	
	FILE* fp2=fopen("result2.txt", "w");
	fprintf(fp2,"����Զ�������\n");
	c=2; 
   	fprintf(fp2,"�����ǣ�%le\n",get_f1());
    fprintf(fp2,"d����������ǣ�%le\n",get_l1(c));
    fprintf(fp2,"c����������ǣ�%le\n",get_l1_c(filename,k,c));
    fprintf(fp2,"f����������ǣ�%le\n",get_l1_f(filename,k,c));
	fprintf(fp2,"d��ʵ������ǣ�%le\n",get_ls1(c));
	fprintf(fp2,"c��ʵ������ǣ�%le\n",get_ls1_c(filename,k,c));
	fprintf(fp2,"f��ʵ������ǣ�%le\n",get_ls1_f(filename,k,c));
	ka=0.7;
	fprintf(fp2,"0.7�׾�d��ʵ������ǣ�%le\n",get_ls1(c));
	fprintf(fp2,"0.7�׾�c��ʵ������ǣ�%le\n",get_ls1_c(filename,k,c));
	fprintf(fp2,"0.7�׾�f��ʵ������ǣ�%le\n",get_ls1_f(filename,k,c));
	ka=1; 
	fprintf(fp2,"������λ��lH���ǣ�%le\n",get_l1(1)-get_f1());
	fprintf(fp2,"��ͫ���ǣ�%le\n",get_lp1(c));
	
    fprintf(fp2,"�������y0���ǣ�%le\n",get_y0(c));
    km=0.7;
	fprintf(fp2,"0.7�ӳ��������y0���ǣ�%le\n",get_y0(c));
	km=1;
	fprintf(fp2,"����ǣ�%le\n",get_ls1(c)-get_l1(c));
	ka=0.7;
	fprintf(fp2,"0.7�׾�����ǣ�%le\n",get_ls1(c)-get_l1(c));
	ka=1; 
	fprintf(fp2,"λ��ɫ���ǣ�%le\n",get_ls1_f(filename,k,c)-get_ls1_c(filename,k,c));
	ka=0.7; 
	fprintf(fp2,"0.7�׾�λ��ɫ���ǣ�%le\n",get_ls1_f(filename,k,c)-get_ls1_c(filename,k,c));
	fprintf(fp2,"0�׾�λ��ɫ���ǣ�%le\n",get_l1_f(filename,k,c)-get_l1_c(filename,k,c));
	fprintf(fp2,"���糡���ǣ�%le\n",get_xt1(c));
	fprintf(fp2,"��ʸ�����ǣ�%le\n",get_xs1(c));
	fprintf(fp2,"��ɢ�ǣ�%le\n",get_xt1(c)-get_xs1(c));
	fprintf(fp2,"d��ʵ������ǣ�%le\n",get_yp1(c));
	fprintf(fp2,"c��ʵ������ǣ�%le\n",get_yp1_c(filename,k,c));
	fprintf(fp2,"f��ʵ������ǣ�%le\n",get_yp1_f(filename,k,c));
	km=0.7;
	fprintf(fp2,"0.7�ӳ�d��ʵ������ǣ�%le\n",get_yp1(c));
	fprintf(fp2,"0.7�ӳ�c��ʵ������ǣ�%le\n",get_yp1_c(filename,k,c));
	fprintf(fp2,"0.7�ӳ�f��ʵ������ǣ�%le\n",get_yp1_f(filename,k,c));
	km=1;
	fprintf(fp2,"���Ի����ǣ�%le\n",get_yp1(c)-get_y0(c));
	fprintf(fp2,"��Ի����ǣ�%le\n",(get_yp1(c)-get_y0(c))/get_y0(c));
	km=0.7;
	fprintf(fp2,"0.7�ӳ����Ի����ǣ�%le\n",get_yp1(c)-get_y0(c));
	fprintf(fp2,"0.7�ӳ���Ի����ǣ�%le\n",(get_yp1(c)-get_y0(c))/get_y0(c));
	km=1;
	fprintf(fp2,"����ɫ���ǣ�%le\n",get_yp1_f(filename,k,c)-get_yp1_c(filename,k,c));
	km=0.7;
	fprintf(fp2,"0.7�ӳ�����ɫ���ǣ�%le\n",get_yp1_f(filename,k,c)-get_yp1_c(filename,k,c));
	km=1;ka=1;
	fprintf(fp2,"����۲��ǣ�%le\n",get_Ks(c)); 
	km=0.7;ka=1;
	fprintf(fp2,"0.7�ӳ�����۲��ǣ�%le\n",get_Ks(c)); 
	km=1;ka=0.7;
	fprintf(fp2,"0.7�׾�����۲��ǣ�%le\n",get_Ks(c)); 
	km=0.7;ka=0.7;
	fprintf(fp2,"0.7�ӳ���0.7�׾�����۲��ǣ�%le\n",get_Ks(c)); 
}




