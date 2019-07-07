#include"ark_l.h"
#include"ark_w.h"


//main函数部分 
int main(void) {
 	char filename[10];
 	
	int i,k,c,y;
	double f1,l1,lh1,y0,y01,ls1,ls11,dL,dL1,yp1,yp11,dy,dy1,xt1,xs1,lp1;	
	
	//printf("请输入文件名：\n");
    //scanf("%s",filename);
    //system("CLS");
    strcpy(filename,"test.txt");      //调试时用 
    
    //printf("请输入镜片数量：\n");
	//scanf("%d",&k);
	//system("CLS");
	k=3;                              //调试时用
    
    //printf("请输入入瞳直径：\n");
    //scanf("%d",&a);
	//system("CLS");
	a=10; ka=1;                             //调试时用
	
	//printf("请输入视场角（取负数）：\n");
    //scanf("%d",&m);
	//system("CLS");
	m=-3; km=1;                             //调试时用
	while(c!=1&&c!=2){
	
	printf("物体是否在无穷远：\n");
	printf("1.是\n");
	printf("2.否\n");
	printf("你的选择：");
    scanf("%d",&c);
	system("CLS");
	}
	
	/*if(c==2){
		printf("请输入物高y：\n");
		scanf("%le",&y);
	}*/
		
    read_data(filename,k);
    
    get_head1(c);
    get_head2(c);
   	get_head3(c);
   	get_head4(c);    //获取四大光线像物距信息 
	 
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
	
		
   	printf("焦距是%le\n",f1);
    printf("理想像距是%le\n",l1);
    printf("像方主面位置lH’是%le\n",lh1);
    printf("理想像高y0’是%le\n",y0);
	printf("0.7视场理想像高y0’是%le\n",y01);
	printf("实际像距是%le\n",ls1);
	printf("0.7孔径实际像距是%le\n",ls11);
	printf("球差是%le\n",dL);
	printf("0.7孔径球差是%le\n",dL1);
	printf("实际像高是%le\n",yp1);
	printf("0.7视场实际像高是%le\n",yp11);
	printf("全视场绝对畸变是%le\n",dy);
	printf("全视场相对畸变是%le\n",dy/y0);
	printf("0.7视场绝对畸变是%le\n",yp11-y01);
	printf("0.7视场相对畸变是%le\n",(yp11-y01)/y01);
	printf("子午场曲是%le\n",xt1);
	printf("弧矢场曲是%le\n",xs1);
	printf("像散是%le\n",xt1-xs1);
	printf("出瞳距是%le\n",lp1);
	wirte_result();
	 

}




