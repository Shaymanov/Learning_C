///* Дан целочисленный массив n. Найти номера двух ближайших по значению элементов */
//
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//
//int main(){
//    int a[10];
//    int n;
//
//    printf("Lenght of the array: ");
//    scanf("%i", &n);
//
//    int i;
//    for (i=0; i<n; ++i){
//        printf("a[%i]: ", i + 1);
//        scanf("%i", &a[i]);
//    }
//
//    int i2, k = 0, k2 = 1;
//    for (i=0; i<n-1; ++i){
//        for (i2=i+1; i2<n; ++i2){
//            if(abs(a[i]-a[i2])<abs(a[k]-a[k2])){
//                k = i;
//                k2 = i2;
//
//            }
//        }
//    }
//    printf("%i %i \n", k + 1, k2 + 1);
//}
