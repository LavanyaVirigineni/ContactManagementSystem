/ * * * Contact Management System * * * /
#include <stdio.h>
struct Contact
{
    char person_name[15];
    char con_no[11];
};
int main() 
{
    struct Contact c[5];
    int a,n;
    printf("Enter number of persons: ");
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        printf("Person %d name: ",a+1);
        scanf("14%s",c[a].person_name);
        printf("Contact No: ");
        scanf("10%s",c[a].con_no);
        printf("Name: %s\n",c[a].person_name);
        printf("Contact No: %s\n",c[a].con_no);
    }
    return 0;
}
