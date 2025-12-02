#include <stdio.h>
#include <stdlib.h>
 

int main(){
    int option;

    do {
        printf("\n===== MENU =====\n");
        printf("1 - equal or bigger\n");
        printf("2 - average age of 5\n");
        printf("3 - salary rate 3\n");
        printf("0 - close|exit  \n");
        printf("chose one option: ");
        scanf("%d", &option);

        switch(option) {
            case 1: {       
              int num1,num2;
              printf("Enter your first number:");
              scanf("%d", &num1);
			  printf("write your second number:");
			  scanf("%d", &num2);
			  if (num1 == num2){
			  	printf("Enter numbers are equal\n");
			  }else if (num1>num2){
			  	printf(" the number %d its bigger\n", num1);
			  }else{
			  	printf("the number %d it bigger\n", num2);
			  }
                break;
				}

            case 2: {
            	 int n1, n2, n3, n4, n5;
   				 float average;

  				  printf("Enter 5 ages :\n");
   				 scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

   				 average = (n1 + n2 + n3 + n4 + n5) / 5.0;

  				  printf("The average age is: %.2f\n", average);
	
				break;
			}
 
            case 3:{
            	
			float sal_bruto;
			float sal_liq;
			float IRS;
			float SS;
			
			printf("enter your salary:");
			scanf("%f", &sal_bruto);
			
			if (sal_bruto < 1000){
				IRS=sal_bruto * 0.15;
			}else if (sal_bruto <=2000){
				IRS=sal_bruto * 0.22;
			}else if (sal_bruto <=3000){
				IRS=sal_bruto * 0.25;
			}else {
				IRS=sal_bruto * 0.27;
			} 
			SS=sal_bruto*0.11;
			sal_liq=sal_bruto - (IRS + SS);
			printf("your net salary is: %.2f", sal_liq);
			
				break;
				
			} 
              

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Invalid option! try again .\n");
                break;
        }

    } while(option!= 0);

    return 0;
}
