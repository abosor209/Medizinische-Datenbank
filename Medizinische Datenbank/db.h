/*
 * db.h
 *
 *  Created on: 13.12.2019
 *      Author: aboso
 */

#ifndef DB_H_
#define DB_H_
struct untersuchung{
	char lymph[5];
	char Brust[5];
};
struct  frau{
   float brustuntersuchung;
   char schwangerschaft[5];

 };
  struct mann{
	;
float lymphuntersuchung;
 };
typedef struct patient {
 char name[31];
 char vorname[31];
 int alter;
 char geschlecht[15];
 float gewicht;
 int groesse;
 struct frau weiblich;
 struct mann maennlich;
 struct untersuchung machung;
} p;

p Arraypatienten_db[100];

void initialize();


#endif /* DB_H_ */
