#include <stdio.h>
int main(){
	int count,tel2,c,flag,ch,tel,apot,ap1,ap2;
	c=0;
	flag=0;
	count=1;
	tel=0;
	ch=getchar();
	
	
	
	while(ch!=EOF){
	ap1=0;
	flag=0;
	ap2=0;
	apot=0;
	while((ch!='+') && (ch!='-') && (ch!='*')){
		if(!(ch>='0' && ch <='9')) break;
		ap1=(ap1*10) +(ch-'0');
		ch=getchar();
	}
	if(tel==4){
		printf("ap1 is %d ",ap1);
		c=c-ap1;
		ap1=0;
	}
	while ((ch == '+') || (ch =='-') || (ch=='*')){
	//--------------------!
	switch (ch){
		case'+':
			tel=1;
			break;
		case'-':
			tel=2;
			break;
		case'*':
			tel=3;
			break;
		}
	ch=getchar();
	}
	//--------------------!
	while(ch!='\n' && ch!='+' && ch!='-'){
		ap2 = (ap2 * 10) + (ch - '0');	
		ch=getchar();
	}
	if(ch=='+' && tel==1){
		flag=1; //an panw apo 2 ari8mous
		//tel2=1;
	}
	if(ch=='+' && tel==2){
		flag=2;
	}
	if(ch=='-' && tel==1){
		flag=3;
		//tel2=2;
	}
	if(ch=='-' && tel==2){
		flag=4;
	}
//-------------------------!
if(flag==1){
	c=c+ap1+ap2;
}
if(flag==2){
	c=c+ap1-ap2;
	ch=getchar();
	printf("c is %d ",c);
	printf("ap1 %d ap2 %d ",ap1,ap2);
}
if(flag==3){
	c=c+ap1+ap2;
	tel=2;
}
if(flag==4){
	c=c+ap1-ap2;
	printf("c is %d ",c);
	ch=getchar();
}

//-------------------------!
//mono 2 ari8moi
if(tel==1 && flag==0){
	apot=c+ap1+ap2;
}
if(tel==2 && flag==0){
	apot=c+ap1-ap2;
}
if(flag==0 && tel==0){
	apot=c+ap1+ap2;
}
//------------------------!
//printf("ap1 is %d,ap2 is %d ",ap1,ap2);
if(flag==0){
	printf("ap1 %d ap2 %d ",ap1,ap2);
	printf("apot is %d\n",apot);
	ch=getchar();
	c=0;
	tel=0;
}
//-----------------------!


}
}


