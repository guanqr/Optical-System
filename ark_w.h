//子函数部分 
double str_doubtrans(char str[])
{
    double num_double=0;
    num_double = atof(str);  //转换为浮点型值
    return  num_double ;
}
void read_data(char *filename,int a)//读取txt文档 
{
	char temp[26];                                   
	double r, n, d, Vd, s;
	FILE *fp; 
	int i;
	
	if((fp=fopen(filename, "r"))==NULL )     
    {  
        printf("Open file failed!!\n");  
        exit(1);  
    }  
        
    for(i=0;i<a;i++){
    	
    	fscanf(fp,"%s%le%le%le%le%le",temp,&r,&n,&d,&Vd,&s);
    	save(temp,r,n,d,Vd,s);                //储存镜片参数 
    	save1(temp);
    	save2(temp);
    	save3(temp);
    	save4(temp);
 
	}
	
	 fclose(fp); 
	 
	//以下内容作为调试,为确认是否导入数组 
	 //GLASS *t;
	 //char si[26]; 
	 //strcpy(si,"a2");
	 //t= Search(si);
	 //printf("The r of %s is %le\n",t->name,t->r);
	 
}

void save(char *temp,double r,double n,double d,double Vd,double s)//统计各个镜片参数 
{
	if(head==NULL) //统计第一个镜片 
    {  
        head = new GLASS; 

	
        strcpy(head->name, temp);  
        head->r = r; 
        head->n = n;
		head->Vd = Vd;
		head->s = s;
		head->d = d;  
        head->next = NULL;
        
        return;
  
    }
    
   	GLASS *ptr1 = head;  
    GLASS *ptr2 = NULL;
     while( NULL != ptr1 )  //到表尾 
    {  
        
	
		ptr2 = ptr1;  
        ptr1 = ptr1->next;  
    }  
    
	ptr1 = new GLASS;  
	
    strcpy(ptr1->name, temp); 
    ptr1->r = r;  
    ptr1->n = n;
	ptr1->Vd = Vd;
	ptr1->s = s; 
	ptr1->d = d; 
    ptr1->next = NULL; 
    ptr2->next = ptr1; 
   
	
	  
	
}

void save1(char *temp)//
{
		if(head1==NULL) //统计第一个镜片 
    {  
       
		head1= new FACE;
		strcpy(head1->name, temp);
		head1->next = NULL;
        
        
        return;
  
    }
    
    
    FACE  *ptr3 = head1;
    FACE  *ptr4 = NULL;
     while( NULL != ptr3 )  //到表尾 
    {  
        
		ptr4 = ptr3;
		ptr3 = ptr3->next;
		 
    }  
    
	 
	ptr3 = new FACE;
	
    
    strcpy(ptr3->name, temp); 
    ptr3->next = NULL;
    ptr4->next = ptr3;

}

void save2(char *temp)//
{
		if(head3==NULL) //统计第一个镜片 
    {  
       
		head3= new FACE2;
		strcpy(head3->name, temp);
		head3->next = NULL;
        
        
        return;
  
    }
    
    
    FACE2 *ptr3 = head3;
    FACE2 *ptr4 = NULL;
     while( NULL != ptr3 )  //到表尾 
    {  
        
		ptr4 = ptr3;
		ptr3 = ptr3->next;
		 
    }  
    
	 
	ptr3 = new FACE2;
	
    
    strcpy(ptr3->name, temp); 
    ptr3->next = NULL;
    ptr4->next = ptr3;

}

void save3(char *temp)//
{
		if(head2==NULL) //统计第一个镜片 
    {  
       
		head2= new FACE1;
		strcpy(head2->name, temp);
		head2->next = NULL;
        
        
        return;
  
    }
    
    
    FACE1 *ptr3 = head2;
    FACE1 *ptr4 = NULL;
     while( NULL != ptr3 )  //到表尾 
    {  
        
		ptr4 = ptr3;
		ptr3 = ptr3->next;
		 
    }  
    
	 
	ptr3 = new FACE1;
	
    
    strcpy(ptr3->name, temp); 
    ptr3->next = NULL;
    ptr4->next = ptr3;

}

void save4(char *temp)//
{
		if(head4==NULL) //统计第一个镜片 
    {  
       
		head4= new FACE3;
		strcpy(head4->name, temp);
		head4->next = NULL;
        
        
        return;
  
    }
    
    
    FACE3 *ptr3 = head4;
    FACE3 *ptr4 = NULL;
     while( NULL != ptr3 )  //到表尾 
    {  
        
		ptr4 = ptr3;
		ptr3 = ptr3->next;
		 
    }  
    
	 
	ptr3 = new FACE3;
	
    
    strcpy(ptr3->name, temp); 
    ptr3->next = NULL;
    ptr4->next = ptr3;

}

GLASS *Search(char *current)//查找镜片所在链表位置 
{
	if(head==NULL)
	return head;
	
	GLASS *ptr1 = head;  
    GLASS *ptr2 = NULL;  
    while( (NULL != ptr1) && (0 != strcmp(ptr1->name, current)) )  
    {  
        ptr2 = ptr1;  
        ptr1 = ptr1->next;  
    }
	
	return ptr1;
	  
}

FACE *Search1(char *current)//
{
	if(head1==NULL)
	return head1;
	
	FACE *ptr1 = head1;  
    FACE *ptr2 = NULL;  
    while( (NULL != ptr1) && (0 != strcmp(ptr1->name, current)) )  
    {  
        ptr2 = ptr1;  
        ptr1 = ptr1->next;  
    }
	
	return ptr1;
	  
}

FACE1 *Search2(char *current)//
{
	if(head2==NULL)
	return head2;
	
	FACE1 *ptr1 = head2;  
    FACE1 *ptr2 = NULL;  
    while( (NULL != ptr1) && (0 != strcmp(ptr1->name, current)) )  
    {  
        ptr2 = ptr1;  
        ptr1 = ptr1->next;  
    }
	
	return ptr1;
	  
}

FACE2 *Search3(char *current)//
{
	if(head3==NULL)
	return head3;
	
	FACE2 *ptr1 = head3;  
    FACE2 *ptr2 = NULL;  
    while( (NULL != ptr1) && (0 != strcmp(ptr1->name, current)) )  
    {  
        ptr2 = ptr1;  
        ptr1 = ptr1->next;  
    }
	
	return ptr1;
	  
}

FACE3 *Search4(char *current)//
{
	if(head4==NULL)
	return head4;
	
	FACE3 *ptr1 = head4;  
    FACE3 *ptr2 = NULL;  
    while( (NULL != ptr1) && (0 != strcmp(ptr1->name, current)) )  
    {  
        ptr2 = ptr1;  
        ptr1 = ptr1->next;  
    }
	
	return ptr1;
	  
}

void wirte_result()//将计算结果输出到txt文档 
{
	FILE* fp1=fopen("result.txt", "w");
	fprintf(fp1,"I am the fish"); 
 } 
 
void calculat_U1l1(GLASS *si)//计算像方参数及下一面物方 
{
	
	double I, I1, U1,L1,L11,U11,PA,x;
	
	GLASS *g;
	FACE *f; 
	g=si;
	f=Search1(g->name);
	
	
	 
	I=asin((f->L-g->r)/g->r*sin(f->U/180*Pi))/Pi*180;
	//printf("The L of %s is %le\n",g->name,f->L);
	//printf("The U of %s is %le\n",g->name,f->U);
	//printf("The I of %s is %le\n",g->name,I);
	I1=asin(f->n1/g->n*(f->L-g->r)/g->r*sin(f->U/180*Pi))/Pi*180;
	//printf("The I1 of %s is %le\n",g->name,I1);
	U1=f->U+I-I1;
	//printf("The U1 of %s is %le\n",g->name,U1);
	L1=(f->L-g->r)*sin(f->U/180*Pi)/g->r*f->n1/g->n*g->r/sin(U1/180*Pi)+g->r; 
	//printf("The L1 of %s is %le\n",g->name,L1);
	
	PA=f->L*sin(f->U/180*Pi)/cos((I-f->U)/2/180*Pi);
	
	x=PA*PA/2/g->r;
	f->PA=PA;
	f->x=x;
	
	if(NULL!=g->next){
	
	U11=U1;
	L11=L1-g->next->d;
	//printf("The d of %s is %le\n",g->name,g->next->d);
	
	//printf("The L11 of %s is %le\n",g->name,L11);
	f->next->L=L11;
	f->next->U=U11;
	f->next->n1=g->n;
	
	}
	
	
	f->I1=I1;
	f->I=I;
	
	f->L1=L1;
	f->U1=U1;
	
	
	 
	
	
}

void xs_calculat(GLASS *si)
{
	double y,c,k,t1,s1,t11,s11,D;
	
	GLASS *g;
	FACE *f; 
	g=si;
	f=Search1(g->name);
	//printf("The x is %le\n",f->x);
	//printf("The m is %le\n",f->I);
	y=(g->n*cos(f->I1/180*Pi)-f->n1*cos(f->I/180*Pi))/g->r;
	//printf("The a is %le\n",y);
/*	if(f->t==1.0e15){
		c=y;
		//printf("The c is %le\n",c);
		k=y;
		//printf("The k is %le\n",k);	
	}
	else{*/
		c=f->n1*cos(f->I/180*Pi)*cos(f->I/180*Pi)/f->t+y;
		//printf("The c is %le\n",c);
		k=f->n1/f->s+y;
		//printf("The k is %le\n",k);
	
	
	t1=g->n*cos(f->I1/180*Pi)*cos(f->I1/180*Pi)/c;
	//printf("The t1 is %le\n",t1);
	s1=g->n/k;
	//printf("The si is %le\n",s1);
	
	f->t1=t1;
	f->s1=s1;
	
	
	if(NULL!=g->next){
		

	
	D=(g->next->d-f->x+f->next->x)/cos(f->U1/180*Pi);
	//printf("The D is %le\n",D);
	t11=t1-D;
//	printf("The t11 is %le\n",t11);
	
	s11=s1-D;
	//printf("The s11 is %le\n",s11);
	
	f->next->s=s11;
	f->next->t=t11;
	
	}
	
	
	


	
	
	
	
}

void calculat1_U1l1(GLASS *si)//计算轴上点边缘光线像物参数 
{
	
	double I, I1, U1,L1,L11,U11;
	
	GLASS *g;
	FACE3 *f; 
	g=si;
	f=Search4(g->name);
	
	
	if(f->L==1.0e15){
		I=asin(a*ka/g->r)/Pi*180;
		//printf("The i is %le\n",I);
		I1=asin(a*ka/g->r*f->n1/g->n)/Pi*180;
		//printf("The I1 is %le\n",I1);
		U1=f->U+I-I1;
		//printf("The U1 is %le\n",U1);
		L1=a*ka/g->r*f->n1/g->n*g->r/sin(U1/180*Pi)+g->r; 
		//printf("The L1 is %le\n",L1);
		
	}
	 else{
	 
	I=asin((f->L-g->r)/g->r*sin(f->U/180*Pi))/Pi*180;
	//printf("The I is %le\n",I);
	I1=asin(f->n1/g->n*(f->L-g->r)/g->r*sin(f->U/180*Pi))/Pi*180;
	//printf("The I1 is %le\n",I1);
	U1=f->U+I-I1;
	//printf("The U1 is %le\n",U1);
	L1=(f->L-g->r)*sin(f->U/180*Pi)/g->r*f->n1/g->n*g->r/sin(U1/180*Pi)+g->r; 
	//printf("The L1 is %le\n",L1);	
		}
	
	
	if(NULL!=g->next){
	
	U11=U1;
	L11=L1-g->next->d;
	//printf("The d of %s is %le\n",g->name,g->next->d);
	
	//printf("The L11 of %s is %le\n",g->name,L11);
	f->next->L=L11;
	f->next->U=U11;
	f->next->n1=g->n;
	
	}
	
	f->L1=L1;
	f->U1=U1;
	
	
	 
	
	
}

void calculat_u1l1(GLASS *si)//计算第二近轴光线 
{
	
	double i, i1, u1,l1,l11,u11;
	
	GLASS *g;
	FACE1 *f; 
	g=si;
	f=Search2(g->name);
	//printf("The l is %le\n",f->l);
	//printf("The u is %le\n",f->u);
	
	i=(f->l-g->r)/g->r*(f->u);
	//printf("The i is %le\n",i);
	i1=(f->n1/g->n*(f->l-g->r)/g->r*(f->u));
	//printf("The i1 is %le\n",i1);
	u1=f->u+i-i1;
	//printf("The u1 is %le\n",u1);
	l1=g->r+g->r*i1/u1;
	//printf("The l1 is %le\n",l1);
	
	if(NULL!=g->next){
	
	u11=u1;
	l11=l1-g->next->d;
	//printf("The d of %s is %le\n",g->name,g->next->d);
	
	//printf("The l11 of %s is %le\n",g->name,l11);
	f->next->l=l11;
	f->next->u=u11;
	f->next->n1=g->n;
	
	
	}
	
	f->l1=l1;
	f->u1=u1;

	
	 
	
	
}

void calculat1_u1l1(GLASS *si)//计算第一近轴光线 
{
	
	double i, i1, u1,l1,l11,u11;
	
	GLASS *g;
	FACE2 *f; 
	g=si;
	f=Search3(g->name);
	
	
	if(f->l==1.0e15)	{
		i=a/g->r;
		//printf("The i is %le\n",i);
		i1=f->n1/g->n*i;
		//printf("The i1 is %le\n",i1);
	}
	else{
		i=(f->l-g->r)/g->r*(f->u);
		//printf("The i is %le\n",i);
		i1=(f->n1/g->n*(f->l-g->r)/g->r*(f->u));
		//printf("The i is %le\n",i);
	}
	u1=f->u+i-i1;
	l1=g->r+g->r*i1/u1;
	
	
	if(NULL!=g->next){
	
	u11=u1;
	l11=l1-g->next->d;
	//printf("The d of %s is %le\n",g->name,g->next->d);
	
	//printf("The l11 of %s is %le\n",g->name,l11);
	f->next->l=l11;
	f->next->u=u11;
	f->next->n1=g->n;
	
	
	}
	
	f->l1=l1;
	f->u1=u1;

	
	 
	
	
}

void get_head1(int c)//得到head1即轴外点实际光线各像物距数据 
{
	char si[26];
	FACE *y;
   	strcpy(si,"a1");
   	double L,U,t;
   	if(c==1){
   	
   	
   	U=m*km;
   	t=1.0e15;
	
	L=kb*ka*a/tan(U/180*Pi);
	}
   	
	else{
	
	U=-atan((km*xg+ka*kb*a)/head->d)/Pi*180;
	//printf("U is %le\n",U);
	L=-ka*kb*a/((km*xg+ka*kb*a)/head->d);
	//printf("L is %le\n",L); 
	//t=(head->r*sin((head1->U+head1->I)/180*Pi)+xg)/sin(head1->U/180*Pi);
	t=-sqrt(xg*xg+head->d*head->d); 
	} 
	
	
	double n1=1;          		//设置初值
   	
	y=Search1(si);
   	y->n1=n1;
   	y->L=L;
   	y->U=U;                    //设置初值 
   	y->t=t;
   	y->s=t;
   	GLASS *ptr1 = head;  
    GLASS *ptr2 = NULL;  
    while( NULL != ptr1 )  
    { 
    	calculat_U1l1(ptr1); 
        ptr2 = ptr1;  
        ptr1 = ptr1->next;
    };
} 

void get_head2(int c)//得到head2即第二近轴光线各像物距数据 
{
	char si[26];
   	strcpy(si,"a1");
   	double l,u; 
   	
    if(c==1){
    
   	l=0;
   	u=sin(m/180*Pi);
	}
	else{
	l=0;

	u=km*-xg/head->d;

	
	}
	double n1=1;          		//设置初值
   	FACE1 *y;
	y=Search2(si);
   	y->n1=n1;
   	y->l=l;
   	y->u=u;                    //设置初值 
   	
   	GLASS *ptr1 = head;  
    GLASS *ptr2 = NULL;  
    while( NULL != ptr1 )  
    { 
    	calculat_u1l1(ptr1); 
        ptr2 = ptr1;  
        ptr1 = ptr1->next;
    };
} 

void get_head3(int c)//得到head3即第一近轴光线各像物距数据 
{
	char si[26];
	
	double l,u;
   	strcpy(si,"a1");
    if(c==1){

   	l=1.0e15;
   	u=0;}
	  
	else{
		
	l=-head->d;
	u=sin(-atan(a/head->d));
		
		
	} 
	double n1=1;          		//设置初值
   	FACE2 *y;
	y=Search3(si);
   	y->n1=n1;
   	y->l=l;
   	y->u=u;                    //设置初值 
   	
   	GLASS *ptr1 = head;  
    GLASS *ptr2 = NULL;  
    while( NULL != ptr1 )  
    { 
    	calculat1_u1l1(ptr1); 
        ptr2 = ptr1;  
        ptr1 = ptr1->next;
    };
} 

void get_head4(int c)//得到head4即轴上点实际光线各像物距数据 
{
	char si[26];
   	strcpy(si,"a1");
    double L,U;
    if(c==1){
   	L=1.0e15;
   	U=0; }
   	else{
   		
   	L=-head->d;
   	U=asin(ka*sin(atan(a/head->d)))/Pi*180; 
   	}
   	
	double n1=1;          		//设置初值
   	FACE3 *y;
	y=Search4(si);
   	y->n1=n1;
   	y->L=L;
   	y->U=U;                    //设置初值 
   	
   	GLASS *ptr1 = head;  
    GLASS *ptr2 = NULL;  
    while( NULL != ptr1 )  
    { 
    	calculat1_U1l1(ptr1); 
        ptr2 = ptr1;  
        ptr1 = ptr1->next;
    };
} 

double get_f1()//获取焦距f1 done
{
	
	double f1;
	get_head3(1);
	f1=head3->l1;
	FACE2 *ptr1 = head3->next;  
    FACE2 *ptr2 = NULL;  
    while( NULL != ptr1 )  
    { 
    	f1=f1*ptr1->l1/ptr1->l;
    	
    	
        ptr2 = ptr1;  
        ptr1 = ptr1->next;
    };
    
    return f1;
}

double get_l1(int c)//理想像距l’（近轴像位置）done
{
	double l1;
	
	get_head3(c); 
	
	FACE2 *ptr1 = head3;  
    FACE2 *ptr2 = NULL;  
    while( NULL != ptr1->next )  
    { 
    
    	
    	
        ptr2 = ptr1;  
        ptr1 = ptr1->next;
    }; 
    
    l1=ptr1->l1;
    
    return l1;
}

double get_ls1(int c)//实际像位置done
{
	double ls1;
	get_head4(c);
	FACE3 *ptr1 = head4;  
    FACE3 *ptr2 = NULL;  
    while( NULL != ptr1->next )  
    { 
    
    	
    	
        ptr2 = ptr1;  
        ptr1 = ptr1->next;
    }; 
    
    ls1=ptr1->L1;
    
    return ls1;
}

double get_yp1(int c)//实际像高done
{
	double l1,yp1,L1,U1;
	
	l1=get_l1(c);
	
	get_head1(c);
	 
	
	FACE *ptr1 = head1;  
    FACE *ptr2 = NULL;  
    while( NULL != ptr1->next )  
    { 
    
    	
    	
        ptr2 = ptr1;  
        ptr1 = ptr1->next;
    }; 
    
    L1=ptr1->L1;
    U1=ptr1->U1;
	yp1=(L1-l1)*tan(U1/180*Pi);
	
	return yp1;
	 
    
   
}

double get_xt1(int c)//子午场曲计算 done
{
	double xt1,lt1,l1;
	
	get_head1(c);
	 
	
	GLASS *ptr1 = head;  
    GLASS *ptr2 = NULL;  
    while( NULL != ptr1 )  
    { 
    	xs_calculat(ptr1); 
        ptr2 = ptr1;  
        ptr1 = ptr1->next;
    };
    
    FACE *ptr3 = head1;  
    FACE *ptr4 = NULL;  
    while( NULL != ptr3->next )  
    { 
    
    	
    	
        ptr4 = ptr3;  
        ptr3 = ptr3->next;
    }; 
    
    lt1= ptr3->t1*cos(ptr3->U1/180*Pi)+ptr3->x;
    l1=get_l1(c);
	xt1= lt1-l1;
	
	return xt1;
    
    
	
}

double get_xs1(int c)//弧矢场曲计算 done
{
	double xs1,ls1,l1;
	
	get_head1(c);
	
	GLASS *ptr1 = head;  
    GLASS *ptr2 = NULL;  
    while( NULL != ptr1 )  
    { 
    	xs_calculat(ptr1); 
        ptr2 = ptr1;  
        ptr1 = ptr1->next;
    };
    
    FACE *ptr3 = head1;  
    FACE *ptr4 = NULL;  
    while( NULL != ptr3->next )  
    { 
    
    	
    	
        ptr4 = ptr3;  
        ptr3 = ptr3->next;
    }; 
    
    ls1= ptr3->s1*cos(ptr3->U1/180*Pi)+ptr3->x;
    l1=get_l1(c);
	xs1= ls1-l1;
	
	return xs1;
    
    
	
}

double get_lp1(int c)//出瞳距计算 done
{
	double lp1;
	
	get_head2(c);
    
    FACE1 *ptr3 = head2;  
    FACE1 *ptr4 = NULL;  
    while( NULL != ptr3->next )  
    { 
    
    	
    	
        ptr4 = ptr3;  
        ptr3 = ptr3->next;
    }; 
    
    lp1=ptr3->l1;
    
	return lp1;
    
    
	
}

double get_y0(int c)//计算理想像高done
{	

	double f1,y0;
	if(c==1){
		f1=get_f1();
		y0=-f1*tan(m*km/180*Pi);
		
	}
	else{
		get_head3(c);
		get_head2(c);
		
	FACE2 *ptr1 = head3;  
    FACE2 *ptr2 = NULL;  
    while( NULL != ptr1->next )  
    { 
    
    	
    	
        ptr2 = ptr1;  
        ptr1 = ptr1->next;
    }; 
		
	FACE1 *ptr3 = head2;  
    FACE1 *ptr4 = NULL;  
    while( NULL != ptr3->next )  
    { 
    
    	
    	
        ptr4 = ptr3;  
        ptr3 = ptr3->next;
    }; 
		
	y0=	(ptr3->l1-ptr1->l1)*ptr3->u1;
	
	}
	return y0;
	} 
	
double get_Ks(int c)//计算慧差done 
{	
	double ya1,yb1,Ks,yp1;
	
	kb=1;
	ya1=get_yp1(c);
	printf("ya1=%le\n",ya1);
	kb=-1;
	yb1=get_yp1(c);
	printf("yb1=%le\n",yb1);
	
	kb=0;
	yp1=get_yp1(c);
	printf("yp1=%le\n",yp1);
	
	Ks=(ya1+yb1)/2-yp1;
	
	return Ks; 
	
}	
	

