#include <stdio.h>
int main() {
int a[3];
int b[3];
int c[3];
printf("=== Direcciones del arreglo a ===\n");
for(int i=0; i<3; i++) {

printf("&a[%d] = %p\n", i, &a[i]);
}
printf("=== Direcciones del arreglo b ====\n");
for(int i=0; i<3; i++) {

printf("&b[%d] = %p\n", i, &b[i]);
}
printf("=== Direcciones del arreglo c ===\n");
for(int i=0; i<3; i++) {

printf("&c [%d] = %p\n", i, &c[i]);

}
return 0;

}
