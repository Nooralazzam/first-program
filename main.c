#include <stdio.h> 

int main (){ 

float Celsius = 0.0f; 
float Fahrenheit = 0.0f; 
int choice = 0; 

printf("***Converter tempreture degree***\n");

printf("from Fahrenheit to Celsius 1 ,Or from Celsius to fahernheit enter 2: "); 
scanf("%d",&choice); 

if (choice == 1){ 

    printf("Enter the Degree =  "); 
    scanf("%f",&Fahrenheit);
    Celsius = (Fahrenheit - 32) *5.0/9.0  ; 
    printf("%f",Celsius); 

}
else if (choice == 2){ 

    printf("Enter the Degree=   "); 
    scanf("%f",&Celsius);
    Fahrenheit = (Celsius *9.0/5.0)+ 32; 
    printf("%f",Fahrenheit);
}
else {
    printf("invalid Choise"); 
}




return 0;
}