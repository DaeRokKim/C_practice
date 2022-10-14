#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__

#include <string.h>

typedef struct _emp
{
   int emp_num;
   char emp_name[15];
} EMP;

EMP *AddEmployee(int emp_num, const char *emp_name);
void ShowEmployee(EMP *pemp);

#endif