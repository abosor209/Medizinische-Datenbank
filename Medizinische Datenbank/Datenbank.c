/*
 * Datenbank.c
 *
 *  Created on: 13.12.2019
 *      Author: aboso
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "db.h"
#include "analyse.h"
#include "BMIP.h"

void menuname(){
	char eingabe[31];
	printf("Bitte Geben Sie einen Name ein: \n");
	fflush(stdout);
	scanf("%s",eingabe);
	for (int i = 0; i< 4; i++){
		if ( strcmp(eingabe,Arraypatienten_db[i].name) == 0){
			printf("die Daten von diesem/r Patient/in sind " );
			printf("%s",Arraypatienten_db[i].name);
			printf("%s",Arraypatienten_db[i].vorname);
			printf("%d",Arraypatienten_db[i].alter);
			printf("%s",Arraypatienten_db[i].geschlecht);
			printf("%f",Arraypatienten_db[i].maennlich.lymphuntersuchung);
			printf("%s",Arraypatienten_db[i].name);

		}
	}
}




void keine_untersuchung(){
	printf("Patienten, die noch keine Untersuchungen durchgeführt haben:\n");
	for ( int i= 0 ; i<5; i++){
	if ( strcmp(Arraypatienten_db[i].machung.lymph,"nein") == 0){
		printf("%s\n",Arraypatienten_db[i].name);
	}
	if (strcmp(Arraypatienten_db[i].machung.Brust,"nein") == 0){
		printf("%s\n",Arraypatienten_db[i].name);
	}
	}
}


void identify_pregnant(){
  printf("Schwanger  Patienten sind : \n");
  for ( int i= 0; i <4 ; i++){
  if ( strcmp(Arraypatienten_db[i].weiblich.schwangerschaft,"Ja") == 0){

    printf("%s\n",Arraypatienten_db[i].name);
  }
}
}








void identify_risk_group(struct patient* patients,int size){ // size in main aufnehmen
int i;
  patients = Arraypatienten_db;
  for ( i = 2; i < size; i++){
   if ( compute_bmip(patients, i) > 25.0){
   printf("patient %s ist in RISIKO!\n",patients[i].name);
 }
 if ( compute_bmip(patients, i) < 20.0){
   printf("patient %s ist in RISIKO!\n",patients[i].name);
 }
  }
 }


 int main (){
   int Auswahl;
   int s;
   p *pat;


   initialize_db();
   printf("\n Menü: \n");
   printf("Bitte Wählen Sie aus, welche Daten angezeigt werden sollten: \n\n");
   printf("1. BODY_MASS_INDEX der Patienten\n");
   printf("2. RISIKO PATIENTEN Anzeigen\n");
   printf("3. BMI. und RISIKO Patienten anzeigen. \n");
   printf("4. NUR Patienten Daten Anzeigen \n");
   printf("5. BODY_MASS_INDEX durch Pointer anzeigen\n");
   printf("6. RISIKO Gruppenberechnung:\n");
   printf("7. Schwanger Patientinen anzeigen:\n");
   printf("8. Patieneten, die Keinen Untersuchungen durchgeführt haben anzeigen\n");
   fflush(stdout);
    scanf("%d",&Auswahl);
    fflush(stdout);

   switch (Auswahl)
   {
     for ( int i = 0; i <5; i++){
      case 1:
         printf("**********************************\n");
          for (int i = 0; i < 4; i++){
          printf("BODY_MASS_INDEX für Patient %s ist :%f\n",Arraypatienten_db[i].name, compute_bmi(Arraypatienten_db[i]));
          }
          break;

      case 2:
          printf("\n**********************************\n");
          identify_risks();
          break;

          case 3:
              printf("**********************************\n");
              for (int i = 0; i <4; i++){
              printf("BODY_MASS_INDEX für Patient %s ist :%f\n",Arraypatienten_db[i].name, compute_bmip(Arraypatienten_db,i));
}
               printf("\n**********************************\n");
                identify_risks();
                break;

          case 4:
          initialize_db();
          break;

          case 5:
              printf("**********************************\n");
          for (int i = 0; i < 4; i++){
          printf("BODY_MASS_INDEX für Patient %s ist :%f\n",Arraypatienten_db[i].name, compute_bmip(Arraypatienten_db,i));

      }
      break;


          case 6:
          printf("Bitte Geben Sie ein, wie viele Patienten nach Überschreitung angezeigt werden sollen: \n");
          fflush(stdout);
          scanf("%d",&s);
          fflush(stdout);
          identify_risk_group(pat, s);
          break;

          case 7:

          printf("**************************************\n");
          identify_pregnant();
          break;

          case 8:
        	  keine_untersuchung();
        	  break;
          default :
          printf("Error");
     }
   }



  /*printf("**********************************\n");
for (int i = 0; i <2; i++){
  printf("BODY_MASS_INDEX für Patient %s ist :%f\n",Arraypatienten_db[i].name, compute_bmi(Arraypatienten_db,i));

case strukturvariable
 printf("**********************************\n");
          for (int i = 0; i < 2; i++){
          printf("BODY_MASS_INDEX für Patient %s ist :%f\n",Arraypatienten_db[i].name, compute_bmip(Arraypatienten_db[i]));
          }
          break;









}
  printf("\n**********************************\n");
  identify_risks();*/


return 0;
 }

