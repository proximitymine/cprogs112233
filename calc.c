#include <stdio.h>
int main(){
	int flag,ch,tel,apot,ap1,ap2;
	ch=getchar();
	//while(ch!='\n'){
	while((ch!='+') && (ch!='-') && (ch!='*')){
		if(!(ch>='0' && ch <='9')) break;
		ap1=(ap1*10) +(ch-'0');
		ch=getchar();
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
	while(ch!='\n'){
		ap2 = (ap2 * 10) + (ch - '0');	
		ch=getchar();
		if(ch=='+'||ch=='-'){
			flag=1;
			break;
		}
	}
//ch=getchar();
if(tel==1){
	apot=ap1+ap2;
}
if(tel==2){
	apot=ap1-ap2;
}
printf("apot is %d\n",apot);
}
