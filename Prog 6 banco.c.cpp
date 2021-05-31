// + Dep3_prog6basico + //
// dinos Numero de veces que ahorras y nos digas lo acumulados de ahorro //

#incluide <studio.h>

int main []

int banco; // acomular //
int monto; // monto de ahorrar por evento //
int numdepositos; // cantidad de veces que fui al banco //
char letra; // saber si queremos realizar otro desposito //

// voy al banco //
printf ( " \ n \ n monto a depositar " );
scanf ( " % d , & monto " );
banco = banco + monto; // acumulador //
numdepositos = numdepositos + 1 ; // contador //

printf ( " \ n \ n dinero que tienes en el banco & f, banco " );
printf ( " \ n \ n numero de depositos & d, numdepositos " );

banco = 0 ;
monto = 0 ;
numdepositos = 0 ;
letra = " s "

hacer
{

// voy al banco //
letra = " s "
printf ( " \ n \ n monto a depositar " );
scanf ( " % d , & monto " );
banco = banco + monto; // acumulador //
numdepositos = numdepositos + 1 ; // contador //

printf ( " ¿quieres realizar otro deposito? (s / n) " );
scanf ( " 5s y letra " )

} while (letra es " s " ); // condición while = mientras //

printf ( " \ n \ n dinero que tienes en el banco & f, banco " );
printf ( " \ n \ n numero de depositos & d, numdepositos " );

return  0 ;