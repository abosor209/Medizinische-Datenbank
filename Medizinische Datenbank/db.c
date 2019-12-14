/*
 * db.c
 *
 *  Created on: 13.12.2019
 *      Author: aboso
 */
#include<stdio.h>
#include "db.h"


void initialize_db(){
int i;

for ( i = 0; i< 4; i++){
  printf(" Bitte Geben Sie Geschlecht ein:");
  fflush(stdout);
  scanf("%s",Arraypatienten_db[i].geschlecht);
  fflush(stdout);
  if (strcmp(Arraypatienten_db[i].geschlecht,"maennlich") == 0){
     printf("Bitte Geben Sie einen Namen ein:\n");
     fflush(stdout);
  scanf("%s",Arraypatienten_db[i].name);
  fflush(stdout);
  printf("Bitte Geben Sie Vorname ein: \n");
  fflush(stdout);
  scanf("%s",Arraypatienten_db[i].vorname);
  fflush(stdout);
  printf("Bitte Geben Sie alter ein: \n");
  fflush(stdout);
  scanf("%d",&Arraypatienten_db[i].alter);
  fflush(stdout);
  printf("Bitte Geben Sie Gewicht ein:  \n");
  fflush(stdout);
  scanf("%f",&Arraypatienten_db[i].gewicht);
  fflush(stdout);
  printf("Bitte geben Sie Größe ein: \n ");
  fflush(stdout);
  scanf("%d",&Arraypatienten_db[i].groesse);
  fflush(stdout);
     printf("Hat der Patient laymphknotenuntersuchung durchgeführt?\n");
     fflush(stdout);
     scanf("%s",Arraypatienten_db[i].machung.lymph);
    printf("Bitte Geben Sie an, wann die letzte Lymphknotenuntersuchung durchgeführt war( Falls mit  nein beantwortet geben Sie hier 0 ein)"); // probier return 1 wenn nicht geht
    fflush(stdout);
    scanf("%f",&Arraypatienten_db[i].maennlich.lymphuntersuchung);
    fflush(stdout);
  }
   if(strcmp(Arraypatienten_db[i].geschlecht,"weiblich") == 0){
      printf("Bitte Geben Sie einen Namen ein:  \n");
      fflush(stdout);
  scanf("%s",Arraypatienten_db[i].name);
  fflush(stdout);
  printf("Bitte Geben Sie Vorname ein:  \n");
  fflush(stdout);
  scanf("%s",Arraypatienten_db[i].vorname);
  fflush(stdout);
  printf("Bitte Geben Sie alter ein:  \n");
  fflush(stdout);
  scanf("%d",&Arraypatienten_db[i].alter);
  fflush(stdout);
  printf("Bitte Geben Sie Gewicht ein :");
  fflush(stdout);
  scanf("%f",&Arraypatienten_db[i].gewicht);
  fflush(stdout);
  printf("Bitte geben Sie Größe ein:  \n");
  fflush(stdout);
  scanf("%d",&Arraypatienten_db[i].groesse);
  fflush(stdout);
  printf("Hat die Patientin eine Brustuntersuchung durchgeführt ?\n");
  fflush(stdout);
  scanf("%s",Arraypatienten_db[i].machung.Brust);

    printf("Bitte Geben Sie an, wann die letzte Brustuntersuchung durchgeführt war( Falls mit  nein beantwortet geben Sie hier 0 ein):  \n");
    fflush(stdout);
    scanf("%f",&Arraypatienten_db[i].weiblich.brustuntersuchung);
    fflush(stdout);
    printf("Bitte Geben Sie ein, ob Schwangerschaft vorliegt:  \n");
    fflush(stdout);
    scanf("%s",Arraypatienten_db[i].weiblich.schwangerschaft);
  }
}

  printf("Die Patienten Informationen Sind :  \n");
  for ( int i = 0; i < 4; i++){
     if ( strcmp(Arraypatienten_db[i].geschlecht,"maennlich")==0){

printf("\n Name: %s\n Vorname: %s\n Alter: %d\n Geschlecht: %s\n Gewicht: %f\n Körpergröße: %d\n letzte Lymphuntersuchung: %f \n",Arraypatienten_db[i].name,Arraypatienten_db[i].vorname,Arraypatienten_db[i].alter,Arraypatienten_db[i].geschlecht,Arraypatienten_db[i].gewicht,Arraypatienten_db[i].groesse,Arraypatienten_db[i].maennlich.lymphuntersuchung);
    }


   if(strcmp(Arraypatienten_db[i].geschlecht,"weiblich")== 0){
      printf("\n Name: %s\n Vorname: %s\n Alter: %d\n Geschlecht: %s\n Gewicht: %f\n Körpergröße: %d\n letzte Brustuntersuchung: %f\n Schwangerschaft: %s \n",Arraypatienten_db[i].name,Arraypatienten_db[i].vorname,Arraypatienten_db[i].alter,Arraypatienten_db[i].geschlecht,Arraypatienten_db[i].gewicht,Arraypatienten_db[i].groesse,Arraypatienten_db[i].weiblich.brustuntersuchung,Arraypatienten_db[i].weiblich.schwangerschaft);

    }

  }
 }

