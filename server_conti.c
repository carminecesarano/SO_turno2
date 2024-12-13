#include <stdio.h>
#include <stdlib.h>

#include "server_conti.h"

void server(/* TBD: Completare il passaggio dei parametri */) {

    printf("Avvio processo server\n");

    int conti[NUM_CONTI] = {30, 30, 30};

    while(1) {

        printf("[SERVER] in attesa di richieste\n");

        /* TBD: ricevere un messaggio dalla coda delle richieste */


        if(/* TBD: Verificare se la richiesta è di tipo TERMINAZIONE */) {

            printf("Server terminato\n");
            exit(0);
        }
        else if(/* TBD: Verificare se la richiesta è di tipo LETTURA_CONTO */) {

            printf("[SERVER] Ricevuto richiesta di LETTURA_CONTO\n");

            int conto = /* TBD: l'identificativo del conto, ricevuto nel messaggio di richiesta */

            int saldo = conti[conto];
            int esito = SUCCESSO_OPERAZIONE;

            /* TBD: Mandare un messaggio di risposta con il saldo del conto. */

        }
        else if(/* TBD: Verificare se la richiesta è di tipo PRELIEVO_CONTO */) {
            
            printf("[SERVER] Ricevuto richiesta di PRELIEVO_CONTO\n");

            int conto = /* TBD: l'identificativo del conto, ricevuto nel messaggio di richiesta */
            int importo = /* TBD: l'importo da prelevare, ricevuto nel messaggio di richiesta */

            int esito;
            
            if(conti[conto] >= importo) {

                conti[conto] -= importo;
                esito = SUCCESSO_OPERAZIONE;
            }
            else {
                esito = INSUCCESSO_OPERAZIONE;
            }

            /* TBD: Inviare un messaggio di risposta al client, includendo l'esito dell'operazione */
    
        }
        else if(/* TBD: Verificare se la richiesta è di tipo VERSAMENTO_CONTO */) {
            
            printf("[SERVER] Ricevuto richiesta di VERSAMENTO_CONTO\n");

            int conto = /* TBD: l'identificativo del conto, ricevuto nel messaggio di richiesta */
            int importo = /* TBD: l'importo da prelevare, ricevuto nel messaggio di richiesta */

            int esito = SUCCESSO_OPERAZIONE;

            conti[conto] += importo;
  
            /* TBD: Inviare un messaggio di risposta al client, includendo l'esito dell'operazione */

        }
        else {
            printf("[SERVER] Ricevuto richiesta di tipo sconosciuto\n");
        }

    }
}