#include <stdio.h>
#include <string.h>

int main() {
    char first[255], last[255];
    
    printf("Feature branch enhancement - Experimental Version\n");
    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0';  // 移除换行符
    
    printf("Now enter your last name: ");
    fgets(last, 255, stdin);
    last[strlen(last)-1] = '\0';
    
    printf("Hello %s %s! This is from GUI branch.\n", first, last);
    return 0;
}