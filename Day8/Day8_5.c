#include<stdio.h>

//accept two numbers from user and display sum
int accept_number(void); //delcaration
int calculate(int n1,int n2);
void display_number(int n);
int main()
{
    int num1,num2,result; //local variables 
    num1 = accept_number();//after call if function returns value should catch            
    num2 = accept_number();//after call if function returns value should catch            

    result = calculate(num1,num2);//calculate 

    //as display function do not return any value no need to catch
    display_number(result);//show result //actual argument is passed by value
    return 0;
}

int calculate(int n1,int n2) //num1 will be copied in n1,num2 will be copied in n2
{
    int ans;
    ans = n1+n2;
    return ans;
}

//if function is called with some actual argument then on call of function
//formal parmeter will be created newly and actual argument will be copied in formal parameter
void display_number(int n) //formal parameter
{
    printf("value = %d\n",n);
}

//int here is return type of function
int accept_number(void) //function do not take any argument 
{
    int n; //memory of 4 bytes will be given to n
    printf("Specify Number \n");
    scanf("%d",&n);
    return n;
}//on exit of function call memory given for n will be released


