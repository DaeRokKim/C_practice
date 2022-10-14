#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Employee.h"

EMP *AddEmployee(int emp_num, const char *emp_name)
{
   EMP *newEmp = (EMP *)malloc(sizeof(EMP));
   newEmp->emp_num = emp_num;
   strcpy(newEmp->emp_name, emp_name);

   return newEmp;
}

void ShowEmployee(EMP *pemp)
{
   printf("직원 번호 : %d \n", pemp->emp_num);
   printf("직원 이름 : %s \n", pemp->emp_name);
}

