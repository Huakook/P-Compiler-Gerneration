#include <stdio.h>
#include<stdbool.h>

int a, b, i, x ;
bool t, f ;
int A [ 9 ] ;
void hello ()
{
printf("%d", 1);
}
int main() {
a = 0 ;
b = 1 ;
i = 1 ;
t = true ;
f = false ;
hello ();
scanf("%d", &x );
if( ( x > 10 ) ) 
{ 
x = 10 ;
}else{ 
if( ( x < 1 ) ) 
{ 
x = 1 ;
}
}
while( ( i <= x  ) ) 
{ 
a = a + i  ;
b = b * i  ;
A[ i  ]= a + b  ;
printf("%d", A[ i  ]);
i = i + 1 ;
} 
printf("%d", a );
printf("%d", b );
}
