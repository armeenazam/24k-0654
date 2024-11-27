/*Define a structure Employee with fields name, id, salary, and a nested structure Address
 (fields: city and zip_code). 
Write a program to input details for multiple employees, store them in a file, and read them back to display.*/
#include<stdio.h> 
struct addresses{
 char city[50];
 int zipcode;
};
struct employees{
char name[20];
int id;
int salary;
struct addresses address;
};
int main()
{
    FILE *ptr=fopen("employee","w");
    if (!ptr) {
        printf("Error: Could not open file ");
        return 1;
    }
    int n;
    struct employees employee[50];
    printf("enter the number of employees:\n");
    scanf("%d",&n);
    for(int i=0; i<n;i++){
        printf("enter the details for employe %d:\n",i+1);
        printf("name:\n");
        scanf(" %s", employee[i].name);
        printf("id:\n");
        scanf("%d",&employee[i].id);
        printf("salary:\n");
        scanf("%d",&employee[i].salary);
        printf("address (city ,zipcode):\n");
        scanf("%s %d",&employee[i].address.city,&employee[i].address.zipcode);   
    }
    for(int i=0;i<n;i++){
        fprintf(ptr,"\ndetails for employee %d\n",i+1);
        fprintf(ptr,"name: %s \n",employee[i].name);
        fprintf(ptr,"id:%d\n",employee[i].id);
        fprintf(ptr,"salary:%d\n",employee[i].salary);
        fprintf(ptr,"address: %s city, zipcode:%d \n",employee[i].address.city,employee[i].address.zipcode);
    }
    fclose(ptr);
    ptr=fopen("employee","r");
    char str[100];
     while (fgets(str, sizeof(str), ptr) != NULL) { 
        printf("%s \n", str);
    }
    fclose(ptr);
        return 0;
}     
