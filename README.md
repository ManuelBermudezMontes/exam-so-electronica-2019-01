#1.
Usando el valor 50000000 el tiempo de demora promedio del primer caso cerrando y abriendola por fuera del ciclo for fue de 0.335 segundos aproximadamente, por el contrario para 
la puerta por dentro del ciclo fue de aproximadamente 7.088 segundos. Como observacion la diferencia de tiempos es bastante grande siendo mas efectiva la primera alternativa.
A mi parecer se debe a que en el primer caso cada hilo cierra la puerta y la abre una sola vez, es decir un hilo cierra la puerta y se encierra a sumarle 50000000 el solo
y luego el segundo hilo hace lo mismo, mientras que en la alternativa dos, la puerta se cierra y se abre 50000000 para cada hilo haciendo que si bien pueden sumarle simultaneamente
deben de hacer el trabajo de cerrar y abrir.

invitado@s5pc16:~/2019-SO-Electronica-1826060/2019_06_06$ time ./threads 50000000
Initial value : 0
Final value   : 100000000

real	0m0,336s
user	0m0,336s
sys	0m0,000s
invitado@s5pc16:~/2019-SO-Electronica-1826060/2019_06_06$ time ./threads 50000000
Initial value : 0
Final value   : 100000000

real	0m0,335s
user	0m0,335s
sys	0m0,000s

invitado@s5pc16:~/2019-SO-Electronica-1826060/2019_06_06$ time ./threads 50000000
Initial value : 0
Final value   : 100000000

real	0m0,336s
user	0m0,335s
sys	0m0,000s



invitado@s5pc16:~/2019-SO-Electronica-1826060/2019_06_06$ time ./threads2 50000000
Initial value : 0
Final value   : 100000000

real	0m7,067s
user	0m8,154s
sys	0m5,579s
invitado@s5pc16:~/2019-SO-Electronica-1826060/2019_06_06$ time ./threads2 50000000
Initial value : 0
Final value   : 100000000

real	0m7,242s
user	0m8,514s
sys	0m5,754s
invitado@s5pc16:~/2019-SO-Electronica-1826060/2019_06_06$ time ./threads2 50000000
Initial value : 0
Final value   : 100000000

real	0m6,955s
user	0m8,186s
sys	0m5,206s



#2.
 adjunto en respuestas/r2
#3.
adjunto en respuestas/r3 

Es posible que la funcion waitpid reconozca el pid que se le entrega como primer argumento pertenece a alguna linea genealogica del proceso hijo, en este caso
el programa reconoce que existe un padre con el id que se le esta pasando y por lo tanto probablemente al no poder existir sin su padre el hijo no espera a la terminacion de su padre
con el comando waitpid, dado esto no es posible hacer que el padre se ejecute primero que el hijo usando el comando waitpid. 



