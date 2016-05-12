/*
 * Copyright (c) 2009-2010, Oracle and/or its affiliates. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright notice,
 *   this list of conditions and the following disclaimer.
 *
 * * Redistributions in binary form must reproduce the above copyright notice,
 *   this list of conditions and the following disclaimer in the documentation
 *   and/or other materials provided with the distribution.
 *
 * * Neither the name of Oracle nor the names of its contributors
 *   may be used to endorse or promote products derived from this software without
 *   specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdio.h>

int carregar_fitxers(FILE * expedients,FILE * asignatures){
    
        expedients=fopen("dades\expedient_12345.txt","r");   //Obrim el fitxer "estudiants.txt" dins el punter de tipos fitxer f.
        asignatures=fopen("dades\asgs-get.txt","r");   //Obrim el fitxer "estudiants.txt" dins el punter de tipos fitxer f.
    
        if(expedients && asignatures==NULL){                    //Aquesa clausula if, es per comprovar si el fitxer "estudiants.txt"
            printf("ERROR \n");         //te algun coningut o si el programa el carrega correctament.
            printf("Revisa el fitxer estudiants.txt");

            return (0);
        }
}

void alta_expedient(){
    
    
}
void entrar_matricula(){
    
}
void entrar_notes_manual(){
    
}
void estat_expedient(){
    
}

int main(int argc, char**argv) {
    int menu=0;
    FILE * expedients;       //Declarem la variable que contindra el fitxer expedients.
    FILE * asignatures;       //Declarem la variable que contindra el fitxer expedients.
    
    do{
        printf("***********Menu inici UPF, expedients***********\n");
        printf("Les operacions mínimes que ha d’implementar el programa són:\n");
        printf("1. Carregar fitxers: carrega fitxers existents\n");
        printf("2. Alta d’expedient: Registra un alumne nou i crea un expedient amb les dades generals però sense assignatures\n");
        printf("3. Entrar matricula: crea expedients nous i modifica fitxers expedients existents\n");
        printf("4. Entrar notes manualment: entra totes les notes d’una assignatura (i actualitza fitxers)\n");
        printf("5. (opcional) Estat dels expedients: per cada expedient en memòria mostra el resum de l’expedient \n i indica en quina situació estroba dins el pla docent que està matriculat (veure secció 1.2)\n");
        printf("Seleccioni una de les opcions llistades:\n");

        scanf("%d",&menu);
        switch(menu) {
            case 1:
                /*1. Carregar fitxers: carrega fitxers existents*/
                carregar_fitxers(expedients,asignatures);
                break;

            case 2:
                /*2. Alta d’expedient: Registra un alumne nou i crea un expedient amb les dades generals però sense assignatures*/
                alta_expedient();
                break;

            case 3:
                /*3. Entrar matricula: crea expedients nous i modifica fitxers expedients existents*/
                entrar_matricula();
                break;

            case 4:
                /*4. Entrar notes manualment: entra totes les notes d’una assignatura (i actualitza fitxers)*/
                entrar_notes_manual();
                break;

            case 5:
                /*"5. (opcional) Estat dels expedients: per cada expedient en memòria mostra el resum de l’expedient \n i indica en quina situació estroba dins el pla docent que està matriculat (veure secció 1.2)*/
                estat_expedient();
                break;
                
            default:printf("Opcio incorrecte");
        }
    }while(menu!=6);
    fclose(expedients);
    fclose(asignatures);
}
