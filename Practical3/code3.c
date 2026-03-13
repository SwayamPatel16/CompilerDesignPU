#include <stdio.h>
#include <string.h> 
int main()
{
char user_name[] = "Jagruthi";
char user_password[] = "abc@123"; char user_name1[20];
char user_password1[20]; printf("Enter Username: ");
fgets(user_name1, sizeof(user_name1), stdin); user_name1[strcspn(user_name1, "\n")] = '\0'; 
fgets(user_password1, sizeof(user_password1), stdin); user_password1[strcspn(user_password1, "\n")] = '\0';
if	((strcmp(user_name,	user_name1)	==	0)	&&	(strcmp(user_password, user_password1) == 0))
{
printf("Login Success\n");
}
else
{
printf("Incorrect username of password\n");
}
return 0;
}
