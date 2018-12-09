#include <stdio.h>
#include <string.h>

int main() {
	int i; 
    int N; 
    scanf("%d", &N); 
    char name[6], young_name[6], old_name[6];
    int year, month, day, cnt = 0;
    int maxAge = 2014*10000 + 9*100 + 7;
    int minAge = 1814*10000 + 9*100 + 5;
    for (i = 0; i < N; i++) {
        scanf("%s %d/%d/%d", name, &year, &month, &day);
        int age = year*10000 + month*100 + day;
        if (age < maxAge && age > minAge) {
            cnt++;
            if (age < maxAge ) { 
                maxAge = age;
                strcpy(old_name, name);
            } 
            if (age > minAge) {
                minAge = age;
                strcpy(young_name, name); 
            }
        }
    } 
    if (cnt != 0) {
        printf("%d %s %s\n", cnt, old_name, young_name);
    } else {
        printf("0\n");
    }
    return 0;
}
