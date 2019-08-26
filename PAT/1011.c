#include<stdio.h>

int main (void){
	
//	int n, i;
//	double a, b, c;
//	
//	scanf("%d", &n);
//	
//	for(i = 0; i < n; i++){
//		scanf("%lf%lf%lf", &a, &b, &c);
//		if(a + b > c){
//			printf("Case #%d: true\n", i + 1);
//		}
//		else{
//			printf("Case #%d: false\n", i + 1);
//		}
//	}

	double a, b, c;
	
	scanf("%f%f%f", &a, &b, &c);
	printf("%f %f %f\n", a, b, c);
	scanf("%f %f %f", &a, &b, &c);
	printf("%f %f %f\n", a, b, c);
	scanf("%lf%lf%lf", &a, &b, &c);
	printf("%f %f %f\n", a, b, c);
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%f %f %f\n", a, b, c);
		
	return 0;
}
