#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#include "server_conti.h"

#define NUM_THREADS 3

void client1(/* TBD: Completare il passaggio dei parametri */);
void client2(/* TBD: Completare il passaggio dei parametri */);
void client3(/* TBD: Completare il passaggio dei parametri */);

int main() {

    int coda_richieste = /* TBD: Creare una coda per i messaggi di richiesta */

    int coda_risposte = /* TBD: Creare una coda per i messaggi di risposta */

    /* TBD: Creare un processo figlio,
            e fargli eseguire la funzione server(),
            passandogli gli identificativi delle code
     */

    /* TBD: Creare un processo figlio,
            e fargli eseguire la funzione client1(),
            passandogli gli identificativi delle code
     */

    /* TBD: Creare un processo figlio,
            e fargli eseguire la funzione client2(),
            passandogli gli identificativi delle code
     */

    /* TBD: Creare un processo figlio,
            e fargli eseguire la funzione client3(),
            passandogli gli identificativi delle code
     */



    /* TBD: Attendere la terminazione dei 3 processi client */

    /* TBD: Inviare al server un messaggio di TERMINAZIONE.
            È consentito porre a 0 tutti i campi del messaggio eccetto
            il campo del tipo di messaggio.
     */

    /* TBD: Attendere la terminazione del processo server */
    
    /* TBD: Rimozione delle code di messaggi */

    return 0;
}


void client1(/* TBD: Completare il passaggio dei parametri */) {

    printf("Avvio processo client1\n");

    /* TBD: Inviare un messaggio di richiesta di tipo LETTURA_CONTO,
            indicando il conto 0,
            ed il PID del processo client
     */


    /* TBD: Ricevere un messaggio di risposta, mediante ricezione selettiva basata su PID */

    int saldo = /* TBD: Estrarre il valore del saldo dal messaggio */;

    printf("[CLIENT 1] Saldo conto: %d\n", saldo);



    int totale_prelevato = 0;

    while(totale_prelevato < 50) {

        printf("[CLIENT 1] Richiesta di prelievo di 10\n");

        /* TBD: Inviare un messaggio di richiesta di tipo PRELIEVO_CONTO,
                indicando il conto 0,
                il PID del processo client,
                e un importo pari a 10
         */


        /* TBD: Ricevere un messaggio di risposta, mediante ricezione selettiva basata su PID */

        int esito = /* TBD: Estrarre dal messaggio l'esito della operazione*/

        if(esito == INSUCCESSO_OPERAZIONE) {
            printf("[CLIENT 1] Prelievo fallito, verrà ritentato\n");
        }
        else {

            totale_prelevato += 10;

            printf("[CLIENT 1] Prelievo effettuato, totale prelevato = %d\n", totale_prelevato);
        }


        sleep(1);
    }

    printf("Termine processo client1\n");

}

void client2(/* TBD: Completare il passaggio dei parametri */) {

    printf("Avvio processo client2\n");

    /* TBD: Inviare un messaggio di richiesta di tipo LETTURA_CONTO,
            indicando il conto 1,
            ed il PID del processo client
     */


    /* TBD: Ricevere un messaggio di risposta, mediante ricezione selettiva basata su PID */

    int saldo = /* TBD: Estrarre il valore del saldo dal messaggio */;

    printf("[CLIENT 2] Saldo conto: %d\n", saldo);



    int totale_prelevato = 0;

    while(totale_prelevato < 50) {

        printf("[CLIENT 2] Richiesta di prelievo di 10\n");

        /* TBD: Inviare un messaggio di richiesta di tipo PRELIEVO_CONTO,
                indicando il conto 1,
                il PID del processo client,
                e un importo pari a 10
         */


        /* TBD: Ricevere un messaggio di risposta, mediante ricezione selettiva basata su PID */

        int esito = /* TBD: Estrarre dal messaggio l'esito della operazione*/

        if(esito == INSUCCESSO_OPERAZIONE) {
            printf("[CLIENT 2] Prelievo fallito, verrà ritentato\n");
        }
        else {

            totale_prelevato += 10;

            printf("[CLIENT 2] Prelievo effettuato, totale prelevato = %d\n", totale_prelevato);
        }


        sleep(1);
    }

    printf("Termine processo client2\n");

}

void client3(/* TBD: Completare il passaggio dei parametri */) {

    printf("Avvio processo client3\n");

    sleep(5);

    printf("[CLIENT 3] Versamento su conto 0\n");

    /* TBD: Inviare un messaggio di tipo VERSAMENTO_CONTO, indicando
            il PID del processo client3,
            il conto 0,
            e un importo di 20
     */

    /* TBD: Ricevere un messaggio di risposta, mediante ricezione selettiva basata su PID */

    printf("[CLIENT 3] Versamento effettuato\n");

    sleep(1);


    printf("[CLIENT 3] Versamento su conto 1\n");

    /* TBD: Inviare un messaggio di tipo VERSAMENTO_CONTO, indicando
            il PID del processo client3,
            il conto 1,
            e un importo di 20
     */

    /* TBD: Ricevere un messaggio di risposta, mediante ricezione selettiva basata su PID */

    printf("[CLIENT 3] Versamento effettuato\n");

    printf("Termine processo client3\n");

}

