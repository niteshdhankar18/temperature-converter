#include <stdio.h>
void celciustofahrenheit(){
  float fahrenheit, celcius;
    printf("enter temp in celcius ");
    scanf("%f",&celcius);
    fahrenheit = (9.0*celcius)/5.0+32.0;
    printf("celcius to fahrenheit for %.2f is %.2f\n",celcius,fahrenheit);
}
// void fahrenhiettocelcius(float);
void fahrenheittocelcius(){
float fahrenheit, celcius;
    printf("enter temp in fahrenheit ");
    scanf("%f",&fahrenheit);
    celcius = (fahrenheit-32.0)*5.0/9.0;
    printf("fahrenheit to celcius for %.2f is %.2f\n",fahrenheit, celcius);
}
// void  celciustofahrenhiet(float);

int main() {
    int choice;
    printf("1. Convert Celsius to fahrenheit\n");
    printf("1. Convert fahrenheit to Celsius\n");
    printf("enter choice 1 or 2 :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        celciustofahrenheit();
        break;
    case 2:
   fahrenheittocelcius();
    break;
    default:
        printf("invalid choice!");
        break;
    }
   
    return 0;
}
