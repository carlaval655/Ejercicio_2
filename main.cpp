#include <iostream>

using namespace std;


int fibonacci();
int capicua();
int residuo(int a, int b);
int primo(int n);

int main()
{
   cout<<"el residuo es:"<<residuo(27,4)<<endl;
    return 0;
}

int fibonacci()
{


}
int capicua()
{


}
int primo(int n)
{

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
