#include"ark_l.h"
#include"ark_w.h"


//main函数部分 
int main(void) {
 	char filename[10];
 	
	int i,k,c,y;
	double cs;	
	
	//printf("请输入文件名：\n");
    //scanf("%s",filename);
    //system("CLS");
    strcpy(filename,"test.txt");      //调试时用 
    
    //printf("请输入镜片数量：\n");
//	scanf("%d",&k);
	//system("CLS");
                           //调试时用
    
    //printf("请输入入瞳直径：\n");
    //scanf("%le",&a);
	//system("CLS");
                        //调试时用
	//printf("请输入孔径系数：\n");
    //scanf("%le",&ka);
	//system("CLS");
	
	//printf("请输入视场角（取负数）：\n");
    //scanf("%le",&m);
	//system("CLS");
                         //调试时用
	
	//printf("请输入视场系数：\n");
    //scanf("%le",&km);
	//system("CLS");
	
	/*while(c!=1&&c!=2){
	
	printf("物体是否在无穷远：\n");
	printf("1.是\n");
	printf("2.否\n");
	printf("你的选择：");
    scanf("%d",&c);
	system("CLS");
	}
	
	if(c==2){
		printf("请输入物高：\n");
		scanf("%le",&xg);
	}*/
	k=3; a=10; ka=1; m=-3; km=1 ; 	
    read_data(filename,k);
    
    
    
    //printf("%le\n",get_yp1_c(filename,k,1));
    //printf("%le\n",get_yp1_c(filename,k,2));
    /*i=1;
    while(i!=0){
    	printf("请输入要查看的参数：\n");
    	printf("1.球差     2.子午慧差 3.畸变\n");
    	printf("4.子午场曲 5.弧矢场曲 6.像散\n");
    	printf("7.焦距     8.主点位置 9.出瞳距\n"); 
    	printf("0.结束程序\n");
    	printf("你的选择：");
		scanf("%d",&i) ;
		switch(i){
			case 0:break; 
			case 1:cs=get_ls1(c)-get_l1(c);printf("球差为:%le",cs);getch();break;
			case 2:cs=get_Ks(c);           printf("子午慧差为:%le",cs);getch();break;
			case 3:cs=get_yp1(c)-get_y0(c);printf("畸变为:%le",cs);getch();break;
			case 4:cs=get_xt1(c);printf("子午场曲为:%le",cs);getch();break;
			case 5:cs=get_xs1(c);printf("弧矢场曲为:%le",cs);getch();break;
			case 6:cs=get_xt1(c)-get_xs1(c);printf("像散为:%le",cs);getch();break;
			case 7:cs=get_f1();printf("焦距为:%le",cs);getch();break;
			case 8:cs=get_l1(c)-get_f1();printf("主点位置为:%le",cs);getch();break;
			case 9:cs=get_lp1(c);printf("出瞳距离为:%le",cs);getch();break;
		}
	system("CLS");	
	}
    
    
    //l1=get_xt1(2);
    //printf("xt1 is %le\n",l1);
    
    
    
    */
   
	
	FILE* fp1=fopen("result.txt", "w");
	fprintf(fp1,"无穷远物计算结果\n");
	c=1; 
   	fprintf(fp1,"焦距是：%le\n",get_f1());
    fprintf(fp1,"d光理想像距是：%le\n",get_l1(c));
    fprintf(fp1,"c光理想像距是：%le\n",get_l1_c(filename,k,c));
    fprintf(fp1,"f光理想像距是：%le\n",get_l1_f(filename,k,c));
	fprintf(fp1,"d光实际像距是：%le\n",get_ls1(c));
	fprintf(fp1,"c光实际像距是：%le\n",get_ls1_c(filename,k,c));
	fprintf(fp1,"f光实际像距是：%le\n",get_ls1_f(filename,k,c));
	ka=0.7;
	fprintf(fp1,"0.7孔径d光实际像距是：%le\n",get_ls1(c));
	fprintf(fp1,"0.7孔径c光实际像距是：%le\n",get_ls1_c(filename,k,c));
	fprintf(fp1,"0.7孔径f光实际像距是：%le\n",get_ls1_f(filename,k,c));
	ka=1; 
	fprintf(fp1,"像方主面位置lH’是：%le\n",get_l1(c)-get_f1());
	fprintf(fp1,"出瞳距是：%le\n",get_lp1(c));
	
    fprintf(fp1,"理想像高y0’是：%le\n",get_y0(c));
    km=0.7;
	fprintf(fp1,"0.7视场理想像高y0’是：%le\n",get_y0(c));
	km=1;
	fprintf(fp1,"球差是：%le\n",get_ls1(c)-get_l1(c));
	ka=0.7;
	fprintf(fp1,"0.7孔径球差是：%le\n",get_ls1(c)-get_l1(c));
	ka=1; 
	fprintf(fp1,"位置色差是：%le\n",get_ls1_f(filename,k,c)-get_ls1_c(filename,k,c));
	ka=0.7; 
	fprintf(fp1,"0.7孔径位置色差是：%le\n",get_ls1_f(filename,k,c)-get_ls1_c(filename,k,c));
	fprintf(fp1,"0孔径位置色差是：%le\n",get_l1_f(filename,k,c)-get_l1_c(filename,k,c));
	fprintf(fp1,"子午场曲是：%le\n",get_xt1(c));
	fprintf(fp1,"弧矢场曲是：%le\n",get_xs1(c));
	fprintf(fp1,"像散是：%le\n",get_xt1(c)-get_xs1(c));
	fprintf(fp1,"d光实际像高是：%le\n",get_yp1(c));
	fprintf(fp1,"c光实际像高是：%le\n",get_yp1_c(filename,k,c));
	fprintf(fp1,"f光实际像高是：%le\n",get_yp1_f(filename,k,c));
	km=0.7;
	fprintf(fp1,"0.7视场d光实际像高是：%le\n",get_yp1(c));
	fprintf(fp1,"0.7视场c光实际像高是：%le\n",get_yp1_c(filename,k,c));
	fprintf(fp1,"0.7视场f光实际像高是：%le\n",get_yp1_f(filename,k,c));
	km=1;
	fprintf(fp1,"绝对畸变是：%le\n",get_yp1(c)-get_y0(c));
	fprintf(fp1,"相对畸变是：%le\n",(get_yp1(c)-get_y0(c))/get_y0(c));
	km=0.7;
	fprintf(fp1,"0.7视场绝对畸变是：%le\n",get_yp1(c)-get_y0(c));
	fprintf(fp1,"0.7视场相对畸变是：%le\n",(get_yp1(c)-get_y0(c))/get_y0(c));
	km=1;
	fprintf(fp1,"倍率色差是：%le\n",get_yp1_f(filename,k,c)-get_yp1_c(filename,k,c));
	km=0.7;
	fprintf(fp1,"0.7视场倍率色差是：%le\n",get_yp1_f(filename,k,c)-get_yp1_c(filename,k,c));
	km=1;ka=1;
	fprintf(fp1,"子午慧差是：%le\n",get_Ks(c)); 
	km=0.7;ka=1;
	fprintf(fp1,"0.7视场子午慧差是：%le\n",get_Ks(c)); 
	km=1;ka=0.7;
	fprintf(fp1,"0.7孔径子午慧差是：%le\n",get_Ks(c)); 
	km=0.7;ka=0.7;
	fprintf(fp1,"0.7视场、0.7孔径子午慧差是：%le\n",get_Ks(c)); 
	
	
	FILE* fp2=fopen("result2.txt", "w");
	fprintf(fp2,"有限远物计算结果\n");
	c=2; 
   	fprintf(fp2,"焦距是：%le\n",get_f1());
    fprintf(fp2,"d光理想像距是：%le\n",get_l1(c));
    fprintf(fp2,"c光理想像距是：%le\n",get_l1_c(filename,k,c));
    fprintf(fp2,"f光理想像距是：%le\n",get_l1_f(filename,k,c));
	fprintf(fp2,"d光实际像距是：%le\n",get_ls1(c));
	fprintf(fp2,"c光实际像距是：%le\n",get_ls1_c(filename,k,c));
	fprintf(fp2,"f光实际像距是：%le\n",get_ls1_f(filename,k,c));
	ka=0.7;
	fprintf(fp2,"0.7孔径d光实际像距是：%le\n",get_ls1(c));
	fprintf(fp2,"0.7孔径c光实际像距是：%le\n",get_ls1_c(filename,k,c));
	fprintf(fp2,"0.7孔径f光实际像距是：%le\n",get_ls1_f(filename,k,c));
	ka=1; 
	fprintf(fp2,"像方主面位置lH’是：%le\n",get_l1(1)-get_f1());
	fprintf(fp2,"出瞳距是：%le\n",get_lp1(c));
	
    fprintf(fp2,"理想像高y0’是：%le\n",get_y0(c));
    km=0.7;
	fprintf(fp2,"0.7视场理想像高y0’是：%le\n",get_y0(c));
	km=1;
	fprintf(fp2,"球差是：%le\n",get_ls1(c)-get_l1(c));
	ka=0.7;
	fprintf(fp2,"0.7孔径球差是：%le\n",get_ls1(c)-get_l1(c));
	ka=1; 
	fprintf(fp2,"位置色差是：%le\n",get_ls1_f(filename,k,c)-get_ls1_c(filename,k,c));
	ka=0.7; 
	fprintf(fp2,"0.7孔径位置色差是：%le\n",get_ls1_f(filename,k,c)-get_ls1_c(filename,k,c));
	fprintf(fp2,"0孔径位置色差是：%le\n",get_l1_f(filename,k,c)-get_l1_c(filename,k,c));
	fprintf(fp2,"子午场曲是：%le\n",get_xt1(c));
	fprintf(fp2,"弧矢场曲是：%le\n",get_xs1(c));
	fprintf(fp2,"像散是：%le\n",get_xt1(c)-get_xs1(c));
	fprintf(fp2,"d光实际像高是：%le\n",get_yp1(c));
	fprintf(fp2,"c光实际像高是：%le\n",get_yp1_c(filename,k,c));
	fprintf(fp2,"f光实际像高是：%le\n",get_yp1_f(filename,k,c));
	km=0.7;
	fprintf(fp2,"0.7视场d光实际像高是：%le\n",get_yp1(c));
	fprintf(fp2,"0.7视场c光实际像高是：%le\n",get_yp1_c(filename,k,c));
	fprintf(fp2,"0.7视场f光实际像高是：%le\n",get_yp1_f(filename,k,c));
	km=1;
	fprintf(fp2,"绝对畸变是：%le\n",get_yp1(c)-get_y0(c));
	fprintf(fp2,"相对畸变是：%le\n",(get_yp1(c)-get_y0(c))/get_y0(c));
	km=0.7;
	fprintf(fp2,"0.7视场绝对畸变是：%le\n",get_yp1(c)-get_y0(c));
	fprintf(fp2,"0.7视场相对畸变是：%le\n",(get_yp1(c)-get_y0(c))/get_y0(c));
	km=1;
	fprintf(fp2,"倍率色差是：%le\n",get_yp1_f(filename,k,c)-get_yp1_c(filename,k,c));
	km=0.7;
	fprintf(fp2,"0.7视场倍率色差是：%le\n",get_yp1_f(filename,k,c)-get_yp1_c(filename,k,c));
	km=1;ka=1;
	fprintf(fp2,"子午慧差是：%le\n",get_Ks(c)); 
	km=0.7;ka=1;
	fprintf(fp2,"0.7视场子午慧差是：%le\n",get_Ks(c)); 
	km=1;ka=0.7;
	fprintf(fp2,"0.7孔径子午慧差是：%le\n",get_Ks(c)); 
	km=0.7;ka=0.7;
	fprintf(fp2,"0.7视场、0.7孔径子午慧差是：%le\n",get_Ks(c)); 
}




