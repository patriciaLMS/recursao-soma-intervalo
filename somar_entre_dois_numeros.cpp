//Fa�a um programa que implemente uma fun��o recursiva que receba dois n�meros
//positivos por par�metro e retorne a soma dos N n�meros inteiros existentes entre eles.
#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<cmath>



using namespace std;
int soma_entre_n(int a, int b);
main()
{
system("chcp 1252 < nul");

   int n1, n2;
while(true)
{


   cout << "\nDigite um n�mero inteiro: " << endl;
   cin >> n1;
   fflush(stdin);
   cout << "Digite outro n�mero inteiro: " << endl;
   cin >> n2;
   fflush(stdin);
   if (n1 > n2)
   {
       cout << "Digite um primeiro n�mero menor que o segundo!"<< endl;
   }
   else
    {
        cout << soma_entre_n(n1+1,n2);
    }
   }

}







int soma_entre_n(int a, int b)
{

    if(a>=b)
    {
        return 0;
    }
    else
    {
        return a + soma_entre_n(a+1,b);
    }

}
