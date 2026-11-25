#include <stdio.h>
#include <string.h>

int main()
{
    char courseDesc[200], keyword[50];

    printf("Enter the course description: ");
    fgets(courseDesc, sizeof(courseDesc), stdin);

    courseDesc[strcspn(courseDesc, "\n")] = '\0';

    printf("Enter the keyword");
    scanf("%49s", keyword);

    if(strstr(courseDesc, keyword) != NULL){
       printf("Keyword '%s' found in the course description.\n", keyword);
    }else{
       printf("Keyword '%s' not found in the course description.\n", keyword);
    }

    return 0;


}
