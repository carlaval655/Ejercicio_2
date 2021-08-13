#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;


int fibonacci(int n);
int capicua(int n);
int residuo(int a, int b);
int primo();

int main()
{
   cout<<"el residuo es:"<<residuo(27,4)<<endl;
   cout<<capicua(311)<<endl;
   cout<<fibonacci(3)<<endl;
   primo();
   
    return 0;
}

int fibonacci(int n)
{
	int l,g,p;
    l=1;
    g=1;
    if(n>2)
    {
       while(n>2)
        {
            p=l+g;
            l=g;
            g=p;
            n--;
        }
        return p;
    }
    else
    {
        return 1;
    }

}
int capicua(int n)
{
	int l,p,t;
    l=n;
    t=0;
    while(l>0)
    {
        p=l%10;
        l=l/10;
        t=(t*10)+p;
    }
    if(n==t)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int primo()
{
	//inge este código lo hice con la parte de ingresar los datos para que de la posición que quiera
	int a,j,p,im,c,i;
	printf("ingresar que valor primo quiere \n");
	scanf("%d", &a);
	j=2;
	p=0;
	while(p<a){
		i=1;
		c=0;
		while(i<=j){
			if(j%i==0){
				c++;
			}
			i++;
			}
			if(c==2){
				p++;
				im=j;
		}
		j++;
	}
	
	printf("el numero primo es %d%n", im);
}

int residuo(int a, int b)
{
    int div=0;
    while(a>=b)
    {
        a-=b;
        div++;

    }
    return a;
}
