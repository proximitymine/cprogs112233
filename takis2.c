#include <stdio.h>


int main()
{ int a,pros,af,flag,f,e,d,b,count,ch,c; 
count=0;
  ch = getchar();                               
  while (ch !=43 && ch!=45) {           
	count++;
	//printf("count is %d\n ",count);
	if(ch==48){
		a=0;
	}
	if(ch==49){
		a=1;
	}
	if(ch==50){
		a=2;
	}
	if(ch==51){
		a=3;
	}
	if(ch==52){
		a=4;
	}
	if(ch==53){
		a=5;
	}
	if(ch==54){
		a=6;
	}
	if(ch==55){
		a=7;
	}
	if(ch==56){
		a=8;
	}
	if(ch==57){
		a=9;
	}
	//printf("A IS %d B is %d    ",a,b);
	if(count==2){
		c=(b*10)+a;
	}
	if(count>2){
		c=(c*10)+(b*10)+a;
	}
	//printf("C IS %d\n",c);
	b=a;
	
	
	ch = getchar();	
	}
	//printf("is %d\n",c); 
	if(ch==43){
		flag=1;//pros
	}
	if(ch==45){
		flag=2;//afairesi
	}
	count=0;
	ch=getchar();
	while(ch!=10){
	count++;
	if(ch==48){
		d=0;
	}
	if(ch==49){
		d=1;
	}
	if(ch==50){
		d=2;
	}
	if(ch==51){
		d=3;
	}
	if(ch==52){
		d=4;
	}
	if(ch==53){
		d=5;
	}
	if(ch==54){
		d=6;
	}
	if(ch==55){
		d=7;
	}
	if(ch==56){
		d=8;
	}
	if(ch==57){
		d=9;
	}
	
	if(count==2){
		f=(e*10)+d;
	}
	if(count>2){
		f=(f*10)+(e*10)+d;
	}
	e=d;
	ch=getchar();
	}
	if(flag==1){
		pros=c+f;
		printf("%d+%d=%d\n",c,f,pros);
	}
	if(flag==2){
		af=c-f;
		printf("%d-%d=%d\n",c,f,af);
	}
}
