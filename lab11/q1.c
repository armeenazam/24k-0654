/*Write a program to copy the contents of one file to another. (Create a File with some dummy data, 
The data is not required to be formatted) */
#include<stdio.h> 
int main()
{
    FILE *file1=fopen("file1.txt","r");
    if (!file1) {
        printf("Error: Could not open file ");
        return 1;
    }
    char str[100];
    fgets(str,sizeof(str),file1);
    fclose(file1);
    printf("%s \n",str);
    FILE *file2=fopen("file2.txt","w");
    if (!file2) {
        printf("Error: Could not open file ");
        return 1;
    }
    fprintf(file2,"%s",str);

    return 0;

}