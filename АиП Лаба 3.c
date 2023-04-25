/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,k;
    double lnx,a,x,sum,eps;
    printf("Hello!\n"); //приветствие
    printf("Made by Spesivtseva Polina Eduardovna, 224\n"); //ссылка на автора программы
    printf("Enter  the method of calculating the amount:\n (1) With a given accuracy \n (2) For a given number of row members\n->\n");
    //просьба ввести номер варианта вычисления значения натурального логарифма от х
    scanf("%d",&i); //ввод номера варианта вычисления значения натурального логарифма от х
    switch(i) //оператор выбора
    {
    case(1)://кейс1
        printf("Input of initial data:\n"); //ввод исходных данных
        printf("Enter the value of x(x>0)->\n"); //просьба ввести значение х
        scanf("%lf",&x); //ввод значения х
        printf("Enter the accuracy as a decimal fraction->\n"); //просьба ввести значение точности
        scanf("%lf",&eps); //ввод точности
        a = (x-1)/(x+1); //1е слагаемое
        sum = a; //начальное значение суммы
        n = 1; //количество итераций на каждом шаге
        do  //внешний цикл-изменение а
        {
            n++;
            a *=  ((x-1)*(x-1))/((2*n+1)*(x+1)*(x+1));   //следующее слагаемое
            sum += a;  //очередная сумма
        }    
        while (fabs(a) >= eps); //внутренний цикл-вычисление суммы ряда
        sum=2*sum; // значение суммы
        printf("lnx=%lf\n",sum);//вывод значения натурального логарифма от х
        printf("log(x)=%lf\n",log(x));
    break;        
        
    case(2)://кейс2
        printf("Input of initial data:\n"); //ввод исходных данных
        printf("Enter the number of row members->\n"); //просьба ввести количество членов ряда
        scanf("%d",&k); //ввод количества членов ряда      
        printf("Enter the value of x(x>0)->\n"); //просьба ввести значение х
        scanf("%lf",&x); //ввод значения х 
        a = (x-1)/(x+1); //1е слагаемое
        sum=a;//начальное значение суммы
        lnx=2*a;
        for(n=1;n<=k-1;n++)
        {
            a *=  ((x-1)*(x-1))/((2*n+1)*(x+1)*(x+1));   //следующее слагаемое
            sum += a;  //очередная сумма
        }
        lnx=2*sum; //изменение значения логарифма
        printf("lnx=%lf\n",lnx); //вывод значения логарифма
        printf("log(x)=%lf\n",log(x));
    break;
    default:
        printf("Enter the correct data!"); //просьба ввести корректные данные
    break;
    }
    return 0;
}



