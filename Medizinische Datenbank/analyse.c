/*
 * analyse.c
 *
 *  Created on: 13.12.2019
 *      Author: aboso
 */
#include <stdio.h>
#include "db.h"
#include "analyse.h"
#include "BMIP.h"

 float compute_bmi(struct patient p){
 float BMI;

     int gr;
     float gew;
     gr= p.groesse;
     gew = p.gewicht;
      BMI = (((gew) / ((gr) *  (gr) /100))*100);

   return BMI ;
 }

 void identify_risks(){
   for( int i = 0;i < 4; i++){
  if ( compute_bmip(Arraypatienten_db, i) > 25.0){
    printf("patient %s ist in RISIKO!\n",Arraypatienten_db[i].name);
  }
  if ( compute_bmip(Arraypatienten_db, i) < 20.0){
    printf("patient %s ist in RISIKO!\n",Arraypatienten_db[i].name);
  }
   }
  }

 float compute_bmip(p s[], int i){
 float BMI;

     int *ptr;
     float *ptr2;
     ptr = &s[i].groesse;
     ptr2 = &s[i].gewicht;
      BMI = (((*ptr2) / ((*ptr) *  (*ptr) /100))*100);

   return BMI ;
 }
