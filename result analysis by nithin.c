#include <stdio.h>
struct student {
    char firstName[50];
    int roll;
    float marks;
};
int main() {
    struct student s[100];
    int n,i,j; float num;
    printf("**FILL THE DIRECTORY**\n");
    printf("Enter the number of students: ");
    scanf("%d",&n);   
    for (i = 0; i < n; ++i)//storing the details
    {
        s[i].roll = i + 1;
        printf("\nFor roll number %d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks:");
        scanf("%f", &s[i].marks);
    }
    int choice;//variable for switch case
    do{
    printf("\n#### STUDENTS DIRECTORY ####\n");
    printf("Options\n");
    printf("1. Display Record\n");
    printf("2. See Percentage\n");
    printf("3. View Remarks\n");
    printf("4. Veiw result table\n");
    printf("0. Exit\n");
    printf("Enter your choice");
    scanf("%d\n\n",&choice);
    switch(choice){
    case 1:printf("Displaying Information:\n");
    // displaying information
    for (i = 0; i < n; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n\n\n");
    }
    break;
    case 2:
    printf("Displaying Percentage\n");
    printf("Enter Roll No. of Student:");
    scanf("%d",&i);
    num=s[i-1].marks;
    float per=(num/500)*100;
    printf("Percentage=%f\n\n\n", per);
    break;
    case 3: printf("Enter Roll No. of Student:");
    scanf("%d",&j);
    if(s[j-1].marks>=450&&s[j-1].marks<500)
    {printf("Outstanding\n\n\n");}
    else if(s[j-1].marks>=400&&s[j-1].marks<450)
    {printf("Very Good\n\n\n");}
    else if(s[j-1].marks>=350&&s[j-1].marks<400)
    {printf("Good\n\n\n");}
    else if(s[j-1].marks>=300&&s[j-1].marks<350)
    {printf("Average\n\n\n");}
    else(s[j-1].marks<300);
    {printf("Below Average\n\n\n");}
    break;
    case 4: printf("Studend Result List\n");
    printf("Roll No.\tName\tMarks Scored\tPercentage\n");
    for(i=0;i<n;i++){
        printf("%d       \t%s\t%f\t%f\n\n\n",i+1,s[i].firstName,s[i].marks,s[i].marks*0.14);
    }
    break;
    default: printf("invalid choice");
    }
    }while(choice!=0);
    // hold the screen
    getchar();
return 0;
}
