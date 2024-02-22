#include <stdio.h>
#include<stdbool.h>

int a, b, i ;
int main() {
a = 0 ;
b = 1 ;
i = 1 ;
while( ( i <= 10 ) ) 
{ 
a = a + i  ;
b = b * i  ;
i = i + 1 ;
} 
printf("%d", a );
printf("%d", b );
}
