/*
 program-20 Accept monthly salary from the user and deduct 10% insurance premium,
              10% loan installment find out of remaining salary. 
*/
#include<stdio.h>
main()
{
    	float salary, remaining_salary, insurance_premium, loan_installment;

   
         printf("\n\n\t Enter your monthly salary: ");
         scanf("%f", &salary);

    
         insurance_premium = 0.1 * salary;

    
        remaining_salary = salary - insurance_premium;

    
        loan_installment = 0.1 * remaining_salary;

   
        remaining_salary -= loan_installment;

    
         printf("\n\n\t  Enter deducting insurance premium and loan installment, : ");
         printf("\n\n\t  Your remaining salary is: %.2f\n", remaining_salary);

}
