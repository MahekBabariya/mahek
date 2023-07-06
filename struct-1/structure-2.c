#include <stdio.h>
#include <string.h>

struct Employee {
    int emp_id;
    char emp_name[30];
    int emp_age;
    char emp_role[30];
    char emp_city[30];
    int emp_experience;
    char emp_company_name[30];
};

int main() {
    struct Employee employee[1];
    int i;
    
    for(i=0;i<1;i++){
	
    printf("Enter Employee ID: ");
    scanf("%d", &employee[i].emp_id);

    printf("Enter Employee Name: ");
    scanf("%s", employee[i].emp_name);

    printf("Enter Employee Age: ");
    scanf("%d", &employee[i].emp_age);

    printf("Enter Employee Role: ");
    scanf("%s", employee[i].emp_role);

    printf("Enter Employee City: ");
    scanf("%s", employee[i].emp_city);

    printf("Enter Employee Experience: ");
    scanf("%d", &employee[i].emp_experience);

    printf("Enter Employee Company Name: ");
    scanf("%s", employee[i].emp_company_name);

}
   for(i=0;i<1;i++){
   
    printf(" %d\n", employee[i].emp_id);
    printf("%s\n", employee[i].emp_name);
    printf("%d\n", employee[i].emp_age);
    printf("%s\n", employee[i].emp_role);
    printf("%s\n", employee[i].emp_city);
    printf("%d\n", employee[i].emp_experience);
    printf("%s\n", employee[i].emp_company_name);
}
return 0;
}
