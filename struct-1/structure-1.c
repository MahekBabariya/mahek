#include<stdio.h>
#include<string.h>

struct Student{
	int stu_id;
	char stu_name[30];
	int stu_age;
	char stu_course[30];
	char stu_city[30];
	int  stu_std;
	char stu_school[30];
};
int main(){
	
	struct Student stu[1];
	int i;
	
	for(i=0;i<1;i++){
		
		printf("Enter Id : ");
		scanf("%d",&stu[i].stu_id);

     	printf("Enter name : ");
		scanf("%s",&stu[i].stu_name);
		
		printf("Enter age : ");
		scanf("%d",&stu[i].stu_age);
		
		printf("Enter cours : ");
		scanf("%s",&stu[i].stu_course);
		
		printf("Enter city : ");
	    scanf(" %s",&stu[i].stu_city);

		
		printf("Enter std : ");
		scanf("%d",&stu[i].stu_std);
		
		printf("Enter school: ");
		scanf("%s",&stu[i].stu_school);
}
       for(i=0;i<1;i++){
       		printf("%d\n",stu[i].stu_id);
       		printf("%s\n",stu[i].stu_name);
       		printf("%d\n",stu[i].stu_age);
       		printf("%s\n",stu[i].stu_course);
       		printf("%s\n",stu[i].stu_city);
       		printf("%d\n",stu[i].stu_std);
       		printf("%s\n",stu[i].stu_school);
       		
		   }
	return 0;	
}
	
	
	
	
	