/*#include "node.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// este teste deve retornar 'OKAY.' na tela. *
int main(int argc, char** argv) {
  Node* root;
  Node **c1, **c2, **c3;
  Node * f1, *f2, *f3, *f4;
  Node * n1, *n2;

  f1 = create_leaf(1, int_node, "1", NULL);
  f2 = create_leaf(1, int_node, "2", NULL);
  f3 = create_leaf(1, int_node, "3", NULL);
  f4 = create_leaf(1, int_node, "4", NULL);

  pack_nodes(&c1, 0, f1);
  pack_nodes(&c1, 1, f2);
  n1 = create_node(1, int_node, "", NULL, 2, c1);

  pack_nodes(&c2, 0, f3);
  n2 = create_node(1, int_node, "", NULL, 1, c2);

  pack_nodes(&c3, 0, n1);
  pack_nodes(&c3, 1, n2);
  pack_nodes(&c3, 2, f4);
  root =  create_node(1, plus_node, "", NULL, 3, c3);

  printf( "numero de filhos: %d\n", nb_of_children(root) );
printf( "numero de filhos: %d\n", nb_of_children(n1) );
printf( "numero de filhos: %d\n", nb_of_children(n2) );
  printf( "numero de filhos: %d\n", nb_of_children(f1) );
  printf( "numero de filhos: %d\n", nb_of_children(f2) );
printf( "numero de filhos: %d\n", nb_of_children(f3) );
printf( "numero de filhos: %d\n\n", nb_of_children(f4) );

printf( "numero de filhos: %d\n", nb_of_children( child(root, 0) ) );
printf( "numero de filhos: %d\n", nb_of_children( child(root, 1) ) );
printf( "numero de filhos: %d\n\n", nb_of_children( child(root, 2) ) );

  printf( "height: %d\n", height(root) );
printf( "height: %d\n", height(n1) );
printf( "height: %d\n", height(n2) );
  printf( "height: %d\n", height(f1) );
  printf( "height: %d\n", height(f2) );
printf( "height: %d\n", height(f3) );
printf( "height: %d\n\n", height(f4) );

  deep_free_node(root);

  printf(" OKAY.\n");
  return(0);
}*/

/* TESTE LISTA
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lista.h"

int main()
{
	FILE *out = fopen("output.txt", "w");

	struct node_tac *lista1 = NULL, *lista2 = NULL;
	struct tac *i1 = NULL, *i2, *i3, *i4, *i5;

	i1 = create_inst_tac("a", "b", "c", "d");
//print_inst_tac(out, *i1);
	i2 = create_inst_tac("1", "2", "3", "4");
//print_inst_tac(out, *i2);
	i3 = create_inst_tac("carro", "bola", "casa", "lápis");
//print_inst_tac(out, *i3);
	i4 = create_inst_tac("gato", "rato", "cachorro", "aranha");
//print_inst_tac(out, *i4);
	i5 = create_inst_tac("amarelo", "verde", "vermelho", "azul");
//print_inst_tac(out, *i5);
//fprintf(out, "\n\n");

//	append_inst_tac(&lista1, i1);
//print_tac(out, lista1);
//	fprintf(out, "\n\n");
//	append_inst_tac(&lista1, i2);
//print_tac(out, lista1);
//	fprintf(out, "\n\n");
//	append_inst_tac(&lista1, i3);
//print_tac(out, lista1);
//	fprintf(out, "\n\n");

	append_inst_tac(&lista2, i4);
//print_tac(out, lista2);
//	fprintf(out, "\n\n");
	append_inst_tac(&lista2, i5);
//print_tac(out, lista2);
//	fprintf(out, "\n\n");

	print_tac(out, lista1);
	fprintf(out, "\n\n");

	print_tac(out, lista2);
	fprintf(out, "\n\n");

	cat_tac(&lista1, &lista2);

	print_tac(out, lista1);
	fprintf(out, "\n\n");

	return 0;
}
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "symbol_table.h"

int main()
{

FILE *out = fopen("output.txt", "w");

   symbol_t table;

   entry_t AA = {"AA", 1, 2, 0},
AB = {"AB", 1, 2, 0},
AC = {"AC", 1, 2, 0},
AD = {"AD", 1, 2, 0},
AE = {"AE", 1, 2, 0},
AF = {"AF", 1, 2, 0},
AG = {"AG", 1, 2, 0},
AH = {"AH", 1, 2, 0},
AI = {"AI", 1, 2, 0},
AJ = {"AJ", 1, 2, 0},
AK = {"AK", 1, 2, 0},
AL = {"AL", 1, 2, 0},
AM = {"AM", 1, 2, 0},
AN = {"AN", 1, 2, 0},
AO = {"AO", 1, 2, 0},
AP = {"AP", 1, 2, 0},
AQ = {"AQ", 1, 2, 0},
AR = {"AR", 1, 2, 0},
AS = {"AS", 1, 2, 0},
AT = {"AT", 1, 2, 0},
AU = {"AU", 1, 2, 0},
AV = {"AV", 1, 2, 0},
AW = {"AW", 1, 2, 0},
AX = {"AX", 1, 2, 0},
AY = {"AY", 1, 2, 0},
AZ = {"AZ", 1, 2, 0},
BA = {"BA", 1, 2, 0},
BB = {"BB", 1, 2, 0},
BC = {"BC", 1, 2, 0},
BD = {"BD", 1, 2, 0},
BE = {"BE", 1, 2, 0},
BF = {"BF", 1, 2, 0},
BG = {"BG", 1, 2, 0},
BH = {"BH", 1, 2, 0},
BI = {"BI", 1, 2, 0},
BJ = {"BJ", 1, 2, 0},
BK = {"BK", 1, 2, 0},
BL = {"BL", 1, 2, 0},
BM = {"BM", 1, 2, 0},
BN = {"BN", 1, 2, 0},
BO = {"BO", 1, 2, 0},
BP = {"BP", 1, 2, 0},
BQ = {"BQ", 1, 2, 0},
BR = {"BR", 1, 2, 0},
BS = {"BS", 1, 2, 0},
BT = {"BT", 1, 2, 0},
BU = {"BU", 1, 2, 0},
BV = {"BV", 1, 2, 0},
BW = {"BW", 1, 2, 0},
BX = {"BX", 1, 2, 0},
BY = {"BY", 1, 2, 0},
BZ = {"BZ", 1, 2, 0},
CA = {"CA", 1, 2, 0},
CB = {"CB", 1, 2, 0},
CC = {"CC", 1, 2, 0},
CD = {"CD", 1, 2, 0},
CE = {"CE", 1, 2, 0},
CF = {"CF", 1, 2, 0},
CG = {"CG", 1, 2, 0},
CH = {"CH", 1, 2, 0},
CI = {"CI", 1, 2, 0},
CJ = {"CJ", 1, 2, 0},
CK = {"CK", 1, 2, 0},
CL = {"CL", 1, 2, 0},
CM = {"CM", 1, 2, 0},
CN = {"CN", 1, 2, 0},
CO = {"CO", 1, 2, 0},
CP = {"CP", 1, 2, 0},
CQ = {"CQ", 1, 2, 0},
CR = {"CR", 1, 2, 0},
CS = {"CS", 1, 2, 0},
CT = {"CT", 1, 2, 0},
CU = {"CU", 1, 2, 0},
CV = {"CV", 1, 2, 0},
CW = {"CW", 1, 2, 0},
CX = {"CX", 1, 2, 0},
CY = {"CY", 1, 2, 0},
CZ = {"CZ", 1, 2, 0},
DA = {"DA", 1, 2, 0},
DB = {"DB", 1, 2, 0},
DC = {"DC", 1, 2, 0},
DD = {"DD", 1, 2, 0},
DE = {"DE", 1, 2, 0},
DF = {"DF", 1, 2, 0},
DG = {"DG", 1, 2, 0},
DH = {"DH", 1, 2, 0},
DI = {"DI", 1, 2, 0},
DJ = {"DJ", 1, 2, 0},
DK = {"DK", 1, 2, 0},
DL = {"DL", 1, 2, 0},
DM = {"DM", 1, 2, 0},
DN = {"DN", 1, 2, 0},
DO = {"DO", 1, 2, 0},
DP = {"DP", 1, 2, 0},
DQ = {"DQ", 1, 2, 0},
DR = {"DR", 1, 2, 0},
DS = {"DS", 1, 2, 0},
DT = {"DT", 1, 2, 0},
DU = {"DU", 1, 2, 0},
DV = {"DV", 1, 2, 0},
DW = {"DW", 1, 2, 0},
DX = {"DX", 1, 2, 0},
DY = {"DY", 1, 2, 0},
DZ = {"DZ", 1, 2, 0},
EA = {"EA", 1, 2, 0},
EB = {"EB", 1, 2, 0},
EC = {"EC", 1, 2, 0},
ED = {"ED", 1, 2, 0},
EE = {"EE", 1, 2, 0},
EF = {"EF", 1, 2, 0},
EG = {"EG", 1, 2, 0},
EH = {"EH", 1, 2, 0},
EI = {"EI", 1, 2, 0},
EJ = {"EJ", 1, 2, 0},
EK = {"EK", 1, 2, 0},
EL = {"EL", 1, 2, 0},
EM = {"EM", 1, 2, 0},
EN = {"EN", 1, 2, 0},
EO = {"EO", 1, 2, 0},
EP = {"EP", 1, 2, 0},
EQ = {"EQ", 1, 2, 0},
ER = {"ER", 1, 2, 0},
ES = {"ES", 1, 2, 0},
ET = {"ET", 1, 2, 0},
EU = {"EU", 1, 2, 0},
EV = {"EV", 1, 2, 0},
EW = {"EW", 1, 2, 0},
EX = {"EX", 1, 2, 0},
EY = {"EY", 1, 2, 0},
EZ = {"EZ", 1, 2, 0},
FA = {"FA", 1, 2, 0},
FB = {"FB", 1, 2, 0},
FC = {"FC", 1, 2, 0},
FD = {"FD", 1, 2, 0},
FE = {"FE", 1, 2, 0},
FF = {"FF", 1, 2, 0},
FG = {"FG", 1, 2, 0},
FH = {"FH", 1, 2, 0},
FI = {"FI", 1, 2, 0},
FJ = {"FJ", 1, 2, 0},
FK = {"FK", 1, 2, 0},
FL = {"FL", 1, 2, 0},
FM = {"FM", 1, 2, 0},
FN = {"FN", 1, 2, 0},
FO = {"FO", 1, 2, 0},
FP = {"FP", 1, 2, 0},
FQ = {"FQ", 1, 2, 0},
FR = {"FR", 1, 2, 0},
FS = {"FS", 1, 2, 0},
FT = {"FT", 1, 2, 0},
FU = {"FU", 1, 2, 0},
FV = {"FV", 1, 2, 0},
FW = {"FW", 1, 2, 0},
FX = {"FX", 1, 2, 0},
FY = {"FY", 1, 2, 0},
FZ = {"FZ", 1, 2, 0},
GA = {"GA", 1, 2, 0},
GB = {"GB", 1, 2, 0},
GC = {"GC", 1, 2, 0},
GD = {"GD", 1, 2, 0},
GE = {"GE", 1, 2, 0},
GF = {"GF", 1, 2, 0},
GG = {"GG", 1, 2, 0},
GH = {"GH", 1, 2, 0},
GI = {"GI", 1, 2, 0},
GJ = {"GJ", 1, 2, 0},
GK = {"GK", 1, 2, 0},
GL = {"GL", 1, 2, 0},
GM = {"GM", 1, 2, 0},
GN = {"GN", 1, 2, 0},
GO = {"GO", 1, 2, 0},
GP = {"GP", 1, 2, 0},
GQ = {"GQ", 1, 2, 0},
GR = {"GR", 1, 2, 0},
GS = {"GS", 1, 2, 0},
GT = {"GT", 1, 2, 0},
GU = {"GU", 1, 2, 0},
GV = {"GV", 1, 2, 0},
GW = {"GW", 1, 2, 0},
GX = {"GX", 1, 2, 0},
GY = {"GY", 1, 2, 0},
GZ = {"GZ", 1, 2, 0},
HA = {"HA", 1, 2, 0},
HB = {"HB", 1, 2, 0},
HC = {"HC", 1, 2, 0},
HD = {"HD", 1, 2, 0},
HE = {"HE", 1, 2, 0},
HF = {"HF", 1, 2, 0},
HG = {"HG", 1, 2, 0},
HH = {"HH", 1, 2, 0},
HI = {"HI", 1, 2, 0},
HJ = {"HJ", 1, 2, 0},
HK = {"HK", 1, 2, 0},
HL = {"HL", 1, 2, 0},
HM = {"HM", 1, 2, 0},
HN = {"HN", 1, 2, 0},
HO = {"HO", 1, 2, 0},
HP = {"HP", 1, 2, 0},
HQ = {"HQ", 1, 2, 0},
HR = {"HR", 1, 2, 0},
HS = {"HS", 1, 2, 0},
HT = {"HT", 1, 2, 0},
HU = {"HU", 1, 2, 0},
HV = {"HV", 1, 2, 0},
HW = {"HW", 1, 2, 0},
HX = {"HX", 1, 2, 0},
HY = {"HY", 1, 2, 0},
HZ = {"HZ", 1, 2, 0},
IA = {"IA", 1, 2, 0},
IB = {"IB", 1, 2, 0},
IC = {"IC", 1, 2, 0},
ID = {"ID", 1, 2, 0},
IE = {"IE", 1, 2, 0},
IF = {"IF", 1, 2, 0},
IG = {"IG", 1, 2, 0},
IH = {"IH", 1, 2, 0},
II = {"II", 1, 2, 0},
IJ = {"IJ", 1, 2, 0},
IK = {"IK", 1, 2, 0},
IL = {"IL", 1, 2, 0},
IM = {"IM", 1, 2, 0},
IN = {"IN", 1, 2, 0},
IO = {"IO", 1, 2, 0},
IP = {"IP", 1, 2, 0},
IQ = {"IQ", 1, 2, 0},
IR = {"IR", 1, 2, 0},
IS = {"IS", 1, 2, 0},
IT = {"IT", 1, 2, 0},
IU = {"IU", 1, 2, 0},
IV = {"IV", 1, 2, 0},
IW = {"IW", 1, 2, 0},
IX = {"IX", 1, 2, 0},
IY = {"IY", 1, 2, 0},
IZ = {"IZ", 1, 2, 0},
JA = {"JA", 1, 2, 0},
JB = {"JB", 1, 2, 0},
JC = {"JC", 1, 2, 0},
JD = {"JD", 1, 2, 0},
JE = {"JE", 1, 2, 0},
JF = {"JF", 1, 2, 0},
JG = {"JG", 1, 2, 0},
JH = {"JH", 1, 2, 0},
JI = {"JI", 1, 2, 0},
JJ = {"JJ", 1, 2, 0},
JK = {"JK", 1, 2, 0},
JL = {"JL", 1, 2, 0},
JM = {"JM", 1, 2, 0},
JN = {"JN", 1, 2, 0},
JO = {"JO", 1, 2, 0},
JP = {"JP", 1, 2, 0},
JQ = {"JQ", 1, 2, 0},
JR = {"JR", 1, 2, 0},
JS = {"JS", 1, 2, 0},
JT = {"JT", 1, 2, 0},
JU = {"JU", 1, 2, 0},
JV = {"JV", 1, 2, 0},
JW = {"JW", 1, 2, 0},
JX = {"JX", 1, 2, 0},
JY = {"JY", 1, 2, 0},
JZ = {"JZ", 1, 2, 0},
KA = {"KA", 1, 2, 0},
KB = {"KB", 1, 2, 0},
KC = {"KC", 1, 2, 0},
KD = {"KD", 1, 2, 0},
KE = {"KE", 1, 2, 0},
KF = {"KF", 1, 2, 0},
KG = {"KG", 1, 2, 0},
KH = {"KH", 1, 2, 0},
KI = {"KI", 1, 2, 0},
KJ = {"KJ", 1, 2, 0},
KK = {"KK", 1, 2, 0},
KL = {"KL", 1, 2, 0},
KM = {"KM", 1, 2, 0},
KN = {"KN", 1, 2, 0},
KO = {"KO", 1, 2, 0},
KP = {"KP", 1, 2, 0},
KQ = {"KQ", 1, 2, 0},
KR = {"KR", 1, 2, 0},
KS = {"KS", 1, 2, 0},
KT = {"KT", 1, 2, 0},
KU = {"KU", 1, 2, 0},
KV = {"KV", 1, 2, 0},
KW = {"KW", 1, 2, 0},
KX = {"KX", 1, 2, 0},
KY = {"KY", 1, 2, 0},
KZ = {"KZ", 1, 2, 0},
LA = {"LA", 1, 2, 0},
LB = {"LB", 1, 2, 0},
LC = {"LC", 1, 2, 0},
LD = {"LD", 1, 2, 0},
LE = {"LE", 1, 2, 0},
LF = {"LF", 1, 2, 0},
LG = {"LG", 1, 2, 0},
LH = {"LH", 1, 2, 0},
LI = {"LI", 1, 2, 0},
LJ = {"LJ", 1, 2, 0},
LK = {"LK", 1, 2, 0},
LL = {"LL", 1, 2, 0},
LM = {"LM", 1, 2, 0},
LN = {"LN", 1, 2, 0},
LO = {"LO", 1, 2, 0},
LP = {"LP", 1, 2, 0},
LQ = {"LQ", 1, 2, 0},
LR = {"LR", 1, 2, 0},
LS = {"LS", 1, 2, 0},
LT = {"LT", 1, 2, 0},
LU = {"LU", 1, 2, 0},
LV = {"LV", 1, 2, 0},
LW = {"LW", 1, 2, 0},
LX = {"LX", 1, 2, 0},
LY = {"LY", 1, 2, 0},
LZ = {"LZ", 1, 2, 0},
MA = {"MA", 1, 2, 0},
MB = {"MB", 1, 2, 0},
MC = {"MC", 1, 2, 0},
MD = {"MD", 1, 2, 0},
ME = {"ME", 1, 2, 0},
MF = {"MF", 1, 2, 0},
MG = {"MG", 1, 2, 0},
MH = {"MH", 1, 2, 0},
MI = {"MI", 1, 2, 0},
MJ = {"MJ", 1, 2, 0},
MK = {"MK", 1, 2, 0},
ML = {"ML", 1, 2, 0},
MM = {"MM", 1, 2, 0},
MN = {"MN", 1, 2, 0},
MO = {"MO", 1, 2, 0},
MP = {"MP", 1, 2, 0},
MQ = {"MQ", 1, 2, 0},
MR = {"MR", 1, 2, 0},
MS = {"MS", 1, 2, 0},
MT = {"MT", 1, 2, 0},
MU = {"MU", 1, 2, 0},
MV = {"MV", 1, 2, 0},
MW = {"MW", 1, 2, 0},
MX = {"MX", 1, 2, 0},
MY = {"MY", 1, 2, 0},
MZ = {"MZ", 1, 2, 0},
NA = {"NA", 1, 2, 0},
NB = {"NB", 1, 2, 0},
NC = {"NC", 1, 2, 0},
ND = {"ND", 1, 2, 0},
NE = {"NE", 1, 2, 0},
NF = {"NF", 1, 2, 0},
NG = {"NG", 1, 2, 0},
NH = {"NH", 1, 2, 0},
NI = {"NI", 1, 2, 0},
NJ = {"NJ", 1, 2, 0},
NK = {"NK", 1, 2, 0},
NL = {"NL", 1, 2, 0},
NM = {"NM", 1, 2, 0},
NN = {"NN", 1, 2, 0},
NO = {"NO", 1, 2, 0},
NP = {"NP", 1, 2, 0},
NQ = {"NQ", 1, 2, 0},
NR = {"NR", 1, 2, 0},
NS = {"NS", 1, 2, 0},
NT = {"NT", 1, 2, 0},
NU = {"NU", 1, 2, 0},
NV = {"NV", 1, 2, 0},
NW = {"NW", 1, 2, 0},
NX = {"NX", 1, 2, 0},
NY = {"NY", 1, 2, 0},
NZ = {"NZ", 1, 2, 0},
OA = {"OA", 1, 2, 0},
OB = {"OB", 1, 2, 0},
OC = {"OC", 1, 2, 0},
OD = {"OD", 1, 2, 0},
OE = {"OE", 1, 2, 0},
OF = {"OF", 1, 2, 0},
OG = {"OG", 1, 2, 0},
OH = {"OH", 1, 2, 0},
OI = {"OI", 1, 2, 0},
OJ = {"OJ", 1, 2, 0},
OK = {"OK", 1, 2, 0},
OL = {"OL", 1, 2, 0},
OM = {"OM", 1, 2, 0},
ON = {"ON", 1, 2, 0},
OO = {"OO", 1, 2, 0},
OP = {"OP", 1, 2, 0},
OQ = {"OQ", 1, 2, 0},
OR = {"OR", 1, 2, 0},
OS = {"OS", 1, 2, 0},
OT = {"OT", 1, 2, 0},
OU = {"OU", 1, 2, 0},
OV = {"OV", 1, 2, 0},
OW = {"OW", 1, 2, 0},
OX = {"OX", 1, 2, 0},
OY = {"OY", 1, 2, 0},
OZ = {"OZ", 1, 2, 0},
PA = {"PA", 1, 2, 0},
PB = {"PB", 1, 2, 0},
PC = {"PC", 1, 2, 0},
PD = {"PD", 1, 2, 0},
PE = {"PE", 1, 2, 0},
PF = {"PF", 1, 2, 0},
PG = {"PG", 1, 2, 0},
PH = {"PH", 1, 2, 0},
PI = {"PI", 1, 2, 0},
PJ = {"PJ", 1, 2, 0},
PK = {"PK", 1, 2, 0},
PL = {"PL", 1, 2, 0},
PM = {"PM", 1, 2, 0},
PN = {"PN", 1, 2, 0},
PO = {"PO", 1, 2, 0},
PP = {"PP", 1, 2, 0},
PQ = {"PQ", 1, 2, 0},
PR = {"PR", 1, 2, 0},
PS = {"PS", 1, 2, 0},
PT = {"PT", 1, 2, 0},
PU = {"PU", 1, 2, 0},
PV = {"PV", 1, 2, 0},
PW = {"PW", 1, 2, 0},
PX = {"PX", 1, 2, 0},
PY = {"PY", 1, 2, 0},
PZ = {"PZ", 1, 2, 0},
QA = {"QA", 1, 2, 0},
QB = {"QB", 1, 2, 0},
QC = {"QC", 1, 2, 0},
QD = {"QD", 1, 2, 0},
QE = {"QE", 1, 2, 0},
QF = {"QF", 1, 2, 0},
QG = {"QG", 1, 2, 0},
QH = {"QH", 1, 2, 0},
QI = {"QI", 1, 2, 0},
QJ = {"QJ", 1, 2, 0},
QK = {"QK", 1, 2, 0},
QL = {"QL", 1, 2, 0},
QM = {"QM", 1, 2, 0},
QN = {"QN", 1, 2, 0},
QO = {"QO", 1, 2, 0},
QP = {"QP", 1, 2, 0},
QQ = {"QQ", 1, 2, 0},
QR = {"QR", 1, 2, 0},
QS = {"QS", 1, 2, 0},
QT = {"QT", 1, 2, 0},
QU = {"QU", 1, 2, 0},
QV = {"QV", 1, 2, 0},
QW = {"QW", 1, 2, 0},
QX = {"QX", 1, 2, 0},
QY = {"QY", 1, 2, 0},
QZ = {"QZ", 1, 2, 0},
RA = {"RA", 1, 2, 0},
RB = {"RB", 1, 2, 0},
RC = {"RC", 1, 2, 0},
RD = {"RD", 1, 2, 0},
RE = {"RE", 1, 2, 0},
RF = {"RF", 1, 2, 0},
RG = {"RG", 1, 2, 0},
RH = {"RH", 1, 2, 0},
RI = {"RI", 1, 2, 0},
RJ = {"RJ", 1, 2, 0},
RK = {"RK", 1, 2, 0},
RL = {"RL", 1, 2, 0},
RM = {"RM", 1, 2, 0},
RN = {"RN", 1, 2, 0},
RO = {"RO", 1, 2, 0},
RP = {"RP", 1, 2, 0},
RQ = {"RQ", 1, 2, 0},
RR = {"RR", 1, 2, 0},
RS = {"RS", 1, 2, 0},
RT = {"RT", 1, 2, 0},
RU = {"RU", 1, 2, 0},
RV = {"RV", 1, 2, 0},
RW = {"RW", 1, 2, 0},
RX = {"RX", 1, 2, 0},
RY = {"RY", 1, 2, 0},
RZ = {"RZ", 1, 2, 0},
SA = {"SA", 1, 2, 0},
SB = {"SB", 1, 2, 0},
SC = {"SC", 1, 2, 0},
SD = {"SD", 1, 2, 0},
SE = {"SE", 1, 2, 0},
SF = {"SF", 1, 2, 0},
SG = {"SG", 1, 2, 0},
SH = {"SH", 1, 2, 0},
SI = {"SI", 1, 2, 0},
SJ = {"SJ", 1, 2, 0},
SK = {"SK", 1, 2, 0},
SL = {"SL", 1, 2, 0},
SM = {"SM", 1, 2, 0},
SN = {"SN", 1, 2, 0},
SO = {"SO", 1, 2, 0},
SP = {"SP", 1, 2, 0},
SQ = {"SQ", 1, 2, 0},
SR = {"SR", 1, 2, 0},
SS = {"SS", 1, 2, 0},
ST = {"ST", 1, 2, 0},
SU = {"SU", 1, 2, 0},
SV = {"SV", 1, 2, 0},
SW = {"SW", 1, 2, 0},
SX = {"SX", 1, 2, 0},
SY = {"SY", 1, 2, 0},
SZ = {"SZ", 1, 2, 0},
TA = {"TA", 1, 2, 0},
TB = {"TB", 1, 2, 0},
TC = {"TC", 1, 2, 0},
TD = {"TD", 1, 2, 0},
TE = {"TE", 1, 2, 0},
TF = {"TF", 1, 2, 0},
TG = {"TG", 1, 2, 0},
TH = {"TH", 1, 2, 0},
TI = {"TI", 1, 2, 0},
TJ = {"TJ", 1, 2, 0},
TK = {"TK", 1, 2, 0},
TL = {"TL", 1, 2, 0},
TM = {"TM", 1, 2, 0},
TN = {"TN", 1, 2, 0},
TO = {"TO", 1, 2, 0},
TP = {"TP", 1, 2, 0},
TQ = {"TQ", 1, 2, 0},
TR = {"TR", 1, 2, 0},
TS = {"TS", 1, 2, 0},
TT = {"TT", 1, 2, 0},
TU = {"TU", 1, 2, 0},
TV = {"TV", 1, 2, 0},
TW = {"TW", 1, 2, 0},
TX = {"TX", 1, 2, 0},
TY = {"TY", 1, 2, 0},
TZ = {"TZ", 1, 2, 0},
UA = {"UA", 1, 2, 0},
UB = {"UB", 1, 2, 0},
UC = {"UC", 1, 2, 0},
UD = {"UD", 1, 2, 0},
UE = {"UE", 1, 2, 0},
UF = {"UF", 1, 2, 0},
UG = {"UG", 1, 2, 0},
UH = {"UH", 1, 2, 0},
UI = {"UI", 1, 2, 0},
UJ = {"UJ", 1, 2, 0},
UK = {"UK", 1, 2, 0},
UL = {"UL", 1, 2, 0},
UM = {"UM", 1, 2, 0},
UN = {"UN", 1, 2, 0},
UO = {"UO", 1, 2, 0},
UP = {"UP", 1, 2, 0},
UQ = {"UQ", 1, 2, 0},
UR = {"UR", 1, 2, 0},
US = {"US", 1, 2, 0},
UT = {"UT", 1, 2, 0},
UU = {"UU", 1, 2, 0},
UV = {"UV", 1, 2, 0},
UW = {"UW", 1, 2, 0},
UX = {"UX", 1, 2, 0},
UY = {"UY", 1, 2, 0},
UZ = {"UZ", 1, 2, 0},
VA = {"VA", 1, 2, 0},
VB = {"VB", 1, 2, 0},
VC = {"VC", 1, 2, 0},
VD = {"VD", 1, 2, 0},
VE = {"VE", 1, 2, 0},
VF = {"VF", 1, 2, 0},
VG = {"VG", 1, 2, 0},
VH = {"VH", 1, 2, 0},
VI = {"VI", 1, 2, 0},
VJ = {"VJ", 1, 2, 0},
VK = {"VK", 1, 2, 0},
VL = {"VL", 1, 2, 0},
VM = {"VM", 1, 2, 0},
VN = {"VN", 1, 2, 0},
VO = {"VO", 1, 2, 0},
VP = {"VP", 1, 2, 0},
VQ = {"VQ", 1, 2, 0},
VR = {"VR", 1, 2, 0},
VS = {"VS", 1, 2, 0},
VT = {"VT", 1, 2, 0},
VU = {"VU", 1, 2, 0},
VV = {"VV", 1, 2, 0},
VW = {"VW", 1, 2, 0},
VX = {"VX", 1, 2, 0},
VY = {"VY", 1, 2, 0},
VZ = {"VZ", 1, 2, 0},
WA = {"WA", 1, 2, 0},
WB = {"WB", 1, 2, 0},
WC = {"WC", 1, 2, 0},
WD = {"WD", 1, 2, 0},
WE = {"WE", 1, 2, 0},
WF = {"WF", 1, 2, 0},
WG = {"WG", 1, 2, 0},
WH = {"WH", 1, 2, 0},
WI = {"WI", 1, 2, 0},
WJ = {"WJ", 1, 2, 0},
WK = {"WK", 1, 2, 0},
WL = {"WL", 1, 2, 0},
WM = {"WM", 1, 2, 0},
WN = {"WN", 1, 2, 0},
WO = {"WO", 1, 2, 0},
WP = {"WP", 1, 2, 0},
WQ = {"WQ", 1, 2, 0},
WR = {"WR", 1, 2, 0},
WS = {"WS", 1, 2, 0},
WT = {"WT", 1, 2, 0},
WU = {"WU", 1, 2, 0},
WV = {"WV", 1, 2, 0},
WW = {"WW", 1, 2, 0},
WX = {"WX", 1, 2, 0},
WY = {"WY", 1, 2, 0},
WZ = {"WZ", 1, 2, 0},
XA = {"XA", 1, 2, 0},
XB = {"XB", 1, 2, 0},
XC = {"XC", 1, 2, 0},
XD = {"XD", 1, 2, 0},
XE = {"XE", 1, 2, 0},
XF = {"XF", 1, 2, 0},
XG = {"XG", 1, 2, 0},
XH = {"XH", 1, 2, 0},
XI = {"XI", 1, 2, 0},
XJ = {"XJ", 1, 2, 0},
XK = {"XK", 1, 2, 0},
XL = {"XL", 1, 2, 0},
XM = {"XM", 1, 2, 0},
XN = {"XN", 1, 15, 0},
XO = {"XO", 1, 2, 0},
XP = {"XP", 1, 2, 0},
XQ = {"XQ", 1, 2, 0},
XR = {"XR", 1, 2, 0},
XS = {"XS", 1, 2, 0},
XT = {"XT", 1, 2, 0},
XU = {"XU", 1, 2, 0},
XV = {"XV", 1, 2, 0},
XW = {"XW", 1, 2, 0},
XX = {"XX", 1, 2, 0},
XY = {"XY", 1, 2, 0},
XZ = {"XZ", 1, 2, 0},
YA = {"YA", 1, 2, 0},
YB = {"YB", 1, 2, 0},
YC = {"YC", 1, 2, 0},
YD = {"YD", 1, 2, 0},
YE = {"YE", 1, 7, 0},
YF = {"YF", 1, 2, 0},
YG = {"YG", 1, 2, 0},
YH = {"YH", 1, 2, 0},
YI = {"YI", 1, 2, 0},
YJ = {"YJ", 1, 2, 0},
YK = {"YK", 1, 2, 0},
YL = {"YL", 1, 2, 0},
YM = {"YM", 1, 2, 0},
YN = {"YN", 1, 2, 0},
YO = {"YO", 1, 2, 0},
YP = {"YP", 1, 2, 0},
YQ = {"YQ", 1, 2, 0},
YR = {"YR", 1, 2, 0},
YS = {"YS", 1, 2, 0},
YT = {"YT", 1, 2, 0},
YU = {"YU", 1, 2, 0},
YV = {"YV", 1, 2, 0},
YW = {"YW", 1, 2, 0},
YX = {"YX", 1, 2, 0},
YY = {"YY", 1, 2, 0},
YZ = {"YZ", 1, 2, 0},
ZA = {"ZA", 1, 2, 0},
ZB = {"ZB", 1, 2, 0},
ZC = {"ZC", 1, 2, 0},
ZD = {"ZD", 1, 2, 0},
ZE = {"ZE", 1, 2, 0},
ZF = {"ZF", 1, 2, 0},
ZG = {"ZG", 1, 2, 0},
ZH = {"ZH", 1, 2, 0},
ZI = {"ZI", 1, 2, 0},
ZJ = {"ZJ", 1, 2, 0},
ZK = {"ZK", 1, 2, 0},
ZL = {"ZL", 1, 2, 0},
ZM = {"ZM", 1, 2, 0},
ZN = {"ZN", 1, 2, 0},
ZO = {"ZO", 1, 2, 0},
ZP = {"ZP", 1, 2, 0},
ZQ = {"ZQ", 1, 2, 0},
ZR = {"ZR", 1, 2, 0},
ZS = {"ZS", 1, 2, 0},
ZT = {"ZT", 1, 2, 0},
ZU = {"ZU", 1, 2, 0},
ZV = {"ZV", 1, 2, 0},
ZW = {"ZW", 1, 2, 0},
ZX = {"ZX", 1, 2, 0},
ZY = {"ZY", 1, 2, 0},
ZZ = {"ZZ", 1, 2, 0};

init_table(&table);

insert(&table, &AA);
insert(&table, &AB);
insert(&table, &AC);
insert(&table, &AD);
insert(&table, &AE);
insert(&table, &AF);
insert(&table, &AG);
insert(&table, &AH);
insert(&table, &AI);
insert(&table, &AJ);
insert(&table, &AK);
insert(&table, &AL);
insert(&table, &AM);
insert(&table, &AN);
insert(&table, &AO);
insert(&table, &AP);
insert(&table, &AQ);
insert(&table, &AR);
insert(&table, &AS);
insert(&table, &AT);
insert(&table, &AU);
insert(&table, &AV);
insert(&table, &AW);
insert(&table, &AX);
insert(&table, &AY);
insert(&table, &AZ);
insert(&table, &BA);
insert(&table, &BB);
insert(&table, &BC);
insert(&table, &BD);
insert(&table, &BE);
insert(&table, &BF);
insert(&table, &BG);
insert(&table, &BH);
insert(&table, &BI);
insert(&table, &BJ);
insert(&table, &BK);
insert(&table, &BL);
insert(&table, &BM);
insert(&table, &BN);
insert(&table, &BO);
insert(&table, &BP);
insert(&table, &BQ);
insert(&table, &BR);
insert(&table, &BS);
insert(&table, &BT);
insert(&table, &BU);
insert(&table, &BV);
insert(&table, &BW);
insert(&table, &BX);
insert(&table, &BY);
insert(&table, &BZ);
insert(&table, &CA);
insert(&table, &CB);
insert(&table, &CC);
insert(&table, &CD);
insert(&table, &CE);
insert(&table, &CF);
insert(&table, &CG);
insert(&table, &CH);
insert(&table, &CI);
insert(&table, &CJ);
insert(&table, &CK);
insert(&table, &CL);
insert(&table, &CM);
insert(&table, &CN);
insert(&table, &CO);
insert(&table, &CP);
insert(&table, &CQ);
insert(&table, &CR);
insert(&table, &CS);
insert(&table, &CT);
insert(&table, &CU);
insert(&table, &CV);
insert(&table, &CW);
insert(&table, &CX);
insert(&table, &CY);
insert(&table, &CZ);
insert(&table, &DA);
insert(&table, &DB);
insert(&table, &DC);
insert(&table, &DD);
insert(&table, &DE);
insert(&table, &DF);
insert(&table, &DG);
insert(&table, &DH);
insert(&table, &DI);
insert(&table, &DJ);
insert(&table, &DK);
insert(&table, &DL);
insert(&table, &DM);
insert(&table, &DN);
insert(&table, &DO);
insert(&table, &DP);
insert(&table, &DQ);
insert(&table, &DR);
insert(&table, &DS);
insert(&table, &DT);
insert(&table, &DU);
insert(&table, &DV);
insert(&table, &DW);
insert(&table, &DX);
insert(&table, &DY);
insert(&table, &DZ);
insert(&table, &EA);
insert(&table, &EB);
insert(&table, &EC);
insert(&table, &ED);
insert(&table, &EE);
insert(&table, &EF);
insert(&table, &EG);
insert(&table, &EH);
insert(&table, &EI);
insert(&table, &EJ);
insert(&table, &EK);
insert(&table, &EL);
insert(&table, &EM);
insert(&table, &EN);
insert(&table, &EO);
insert(&table, &EP);
insert(&table, &EQ);
insert(&table, &ER);
insert(&table, &ES);
insert(&table, &ET);
insert(&table, &EU);
insert(&table, &EV);
insert(&table, &EW);
insert(&table, &EX);
insert(&table, &EY);
insert(&table, &EZ);
insert(&table, &FA);
insert(&table, &FB);
insert(&table, &FC);
insert(&table, &FD);
insert(&table, &FE);
insert(&table, &FF);
insert(&table, &FG);
insert(&table, &FH);
insert(&table, &FI);
insert(&table, &FJ);
insert(&table, &FK);
insert(&table, &FL);
insert(&table, &FM);
insert(&table, &FN);
insert(&table, &FO);
insert(&table, &FP);
insert(&table, &FQ);
insert(&table, &FR);
insert(&table, &FS);
insert(&table, &FT);
insert(&table, &FU);
insert(&table, &FV);
insert(&table, &FW);
insert(&table, &FX);
insert(&table, &FY);
insert(&table, &FZ);
insert(&table, &GA);
insert(&table, &GB);
insert(&table, &GC);
insert(&table, &GD);
insert(&table, &GE);
insert(&table, &GF);
insert(&table, &GG);
insert(&table, &GH);
insert(&table, &GI);
insert(&table, &GJ);
insert(&table, &GK);
insert(&table, &GL);
insert(&table, &GM);
insert(&table, &GN);
insert(&table, &GO);
insert(&table, &GP);
insert(&table, &GQ);
insert(&table, &GR);
insert(&table, &GS);
insert(&table, &GT);
insert(&table, &GU);
insert(&table, &GV);
insert(&table, &GW);
insert(&table, &GX);
insert(&table, &GY);
insert(&table, &GZ);
insert(&table, &HA);
insert(&table, &HB);
insert(&table, &HC);
insert(&table, &HD);
insert(&table, &HE);
insert(&table, &HF);
insert(&table, &HG);
insert(&table, &HH);
insert(&table, &HI);
insert(&table, &HJ);
insert(&table, &HK);
insert(&table, &HL);
insert(&table, &HM);
insert(&table, &HN);
insert(&table, &HO);
insert(&table, &HP);
insert(&table, &HQ);
insert(&table, &HR);
insert(&table, &HS);
insert(&table, &HT);
insert(&table, &HU);
insert(&table, &HV);
insert(&table, &HW);
insert(&table, &HX);
insert(&table, &HY);
insert(&table, &HZ);
insert(&table, &IA);
insert(&table, &IB);
insert(&table, &IC);
insert(&table, &ID);
insert(&table, &IE);
insert(&table, &IF);
insert(&table, &IG);
insert(&table, &IH);
insert(&table, &II);
insert(&table, &IJ);
insert(&table, &IK);
insert(&table, &IL);
insert(&table, &IM);
insert(&table, &IN);
insert(&table, &IO);
insert(&table, &IP);
insert(&table, &IQ);
insert(&table, &IR);
insert(&table, &IS);
insert(&table, &IT);
insert(&table, &IU);
insert(&table, &IV);
insert(&table, &IW);
insert(&table, &IX);
insert(&table, &IY);
insert(&table, &IZ);
insert(&table, &JA);
insert(&table, &JB);
insert(&table, &JC);
insert(&table, &JD);
insert(&table, &JE);
insert(&table, &JF);
insert(&table, &JG);
insert(&table, &JH);
insert(&table, &JI);
insert(&table, &JJ);
insert(&table, &JK);
insert(&table, &JL);
insert(&table, &JM);
insert(&table, &JN);
insert(&table, &JO);
insert(&table, &JP);
insert(&table, &JQ);
insert(&table, &JR);
insert(&table, &JS);
insert(&table, &JT);
insert(&table, &JU);
insert(&table, &JV);
insert(&table, &JW);
insert(&table, &JX);
insert(&table, &JY);
insert(&table, &JZ);
insert(&table, &KA);
insert(&table, &KB);
insert(&table, &KC);
insert(&table, &KD);
insert(&table, &KE);
insert(&table, &KF);
insert(&table, &KG);
insert(&table, &KH);
insert(&table, &KI);
insert(&table, &KJ);
insert(&table, &KK);
insert(&table, &KL);
insert(&table, &KM);
insert(&table, &KN);
insert(&table, &KO);
insert(&table, &KP);
insert(&table, &KQ);
insert(&table, &KR);
insert(&table, &KS);
insert(&table, &KT);
insert(&table, &KU);
insert(&table, &KV);
insert(&table, &KW);
insert(&table, &KX);
insert(&table, &KY);
insert(&table, &KZ);
insert(&table, &LA);
insert(&table, &LB);
insert(&table, &LC);
insert(&table, &LD);
insert(&table, &LE);
insert(&table, &LF);
insert(&table, &LG);
insert(&table, &LH);
insert(&table, &LI);
insert(&table, &LJ);
insert(&table, &LK);
insert(&table, &LL);
insert(&table, &LM);
insert(&table, &LN);
insert(&table, &LO);
insert(&table, &LP);
insert(&table, &LQ);
insert(&table, &LR);
insert(&table, &LS);
insert(&table, &LT);
insert(&table, &LU);
insert(&table, &LV);
insert(&table, &LW);
insert(&table, &LX);
insert(&table, &LY);
insert(&table, &LZ);
insert(&table, &MA);
insert(&table, &MB);
insert(&table, &MC);
insert(&table, &MD);
insert(&table, &ME);
insert(&table, &MF);
insert(&table, &MG);
insert(&table, &MH);
insert(&table, &MI);
insert(&table, &MJ);
insert(&table, &MK);
insert(&table, &ML);
insert(&table, &MM);
insert(&table, &MN);
insert(&table, &MO);
insert(&table, &MP);
insert(&table, &MQ);
insert(&table, &MR);
insert(&table, &MS);
insert(&table, &MT);
insert(&table, &MU);
insert(&table, &MV);
insert(&table, &MW);
insert(&table, &MX);
insert(&table, &MY);
insert(&table, &MZ);
insert(&table, &NA);
insert(&table, &NB);
insert(&table, &NC);
insert(&table, &ND);
insert(&table, &NE);
insert(&table, &NF);
insert(&table, &NG);
insert(&table, &NH);
insert(&table, &NI);
insert(&table, &NJ);
insert(&table, &NK);
insert(&table, &NL);
insert(&table, &NM);
insert(&table, &NN);
insert(&table, &NO);
insert(&table, &NP);
insert(&table, &NQ);
insert(&table, &NR);
insert(&table, &NS);
insert(&table, &NT);
insert(&table, &NU);
insert(&table, &NV);
insert(&table, &NW);
insert(&table, &NX);
insert(&table, &NY);
insert(&table, &NZ);
insert(&table, &OA);
insert(&table, &OB);
insert(&table, &OC);
insert(&table, &OD);
insert(&table, &OE);
insert(&table, &OF);
insert(&table, &OG);
insert(&table, &OH);
insert(&table, &OI);
insert(&table, &OJ);
insert(&table, &OK);
insert(&table, &OL);
insert(&table, &OM);
insert(&table, &ON);
insert(&table, &OO);
insert(&table, &OP);
insert(&table, &OQ);
insert(&table, &OR);
insert(&table, &OS);
insert(&table, &OT);
insert(&table, &OU);
insert(&table, &OV);
insert(&table, &OW);
insert(&table, &OX);
insert(&table, &OY);
insert(&table, &OZ);
insert(&table, &PA);
insert(&table, &PB);
insert(&table, &PC);
insert(&table, &PD);
insert(&table, &PE);
insert(&table, &PF);
insert(&table, &PG);
insert(&table, &PH);
insert(&table, &PI);
insert(&table, &PJ);
insert(&table, &PK);
insert(&table, &PL);
insert(&table, &PM);
insert(&table, &PN);
insert(&table, &PO);
insert(&table, &PP);
insert(&table, &PQ);
insert(&table, &PR);
insert(&table, &PS);
insert(&table, &PT);
insert(&table, &PU);
insert(&table, &PV);
insert(&table, &PW);
insert(&table, &PX);
insert(&table, &PY);
insert(&table, &PZ);
insert(&table, &QA);
insert(&table, &QB);
insert(&table, &QC);
insert(&table, &QD);
insert(&table, &QE);
insert(&table, &QF);
insert(&table, &QG);
insert(&table, &QH);
insert(&table, &QI);
insert(&table, &QJ);
insert(&table, &QK);
insert(&table, &QL);
insert(&table, &QM);
insert(&table, &QN);
insert(&table, &QO);
insert(&table, &QP);
insert(&table, &QQ);
insert(&table, &QR);
insert(&table, &QS);
insert(&table, &QT);
insert(&table, &QU);
insert(&table, &QV);
insert(&table, &QW);
insert(&table, &QX);
insert(&table, &QY);
insert(&table, &QZ);
insert(&table, &RA);
insert(&table, &RB);
insert(&table, &RC);
insert(&table, &RD);
insert(&table, &RE);
insert(&table, &RF);
insert(&table, &RG);
insert(&table, &RH);
insert(&table, &RI);
insert(&table, &RJ);
insert(&table, &RK);
insert(&table, &RL);
insert(&table, &RM);
insert(&table, &RN);
insert(&table, &RO);
insert(&table, &RP);
insert(&table, &RQ);
insert(&table, &RR);
insert(&table, &RS);
insert(&table, &RT);
insert(&table, &RU);
insert(&table, &RV);
insert(&table, &RW);
insert(&table, &RX);
insert(&table, &RY);
insert(&table, &RZ);
insert(&table, &SA);
insert(&table, &SB);
insert(&table, &SC);
insert(&table, &SD);
insert(&table, &SE);
insert(&table, &SF);
insert(&table, &SG);
insert(&table, &SH);
insert(&table, &SI);
insert(&table, &SJ);
insert(&table, &SK);
insert(&table, &SL);
insert(&table, &SM);
insert(&table, &SN);
insert(&table, &SO);
insert(&table, &SP);
insert(&table, &SQ);
insert(&table, &SR);
insert(&table, &SS);
insert(&table, &ST);
insert(&table, &SU);
insert(&table, &SV);
insert(&table, &SW);
insert(&table, &SX);
insert(&table, &SY);
insert(&table, &SZ);
insert(&table, &TA);
insert(&table, &TB);
insert(&table, &TC);
insert(&table, &TD);
insert(&table, &TE);
insert(&table, &TF);
insert(&table, &TG);
insert(&table, &TH);
insert(&table, &TI);
insert(&table, &TJ);
insert(&table, &TK);
insert(&table, &TL);
insert(&table, &TM);
insert(&table, &TN);
insert(&table, &TO);
insert(&table, &TP);
insert(&table, &TQ);
insert(&table, &TR);
insert(&table, &TS);
insert(&table, &TT);
insert(&table, &TU);
insert(&table, &TV);
insert(&table, &TW);
insert(&table, &TX);
insert(&table, &TY);
insert(&table, &TZ);
insert(&table, &UA);
insert(&table, &UB);
insert(&table, &UC);
insert(&table, &UD);
insert(&table, &UE);
insert(&table, &UF);
insert(&table, &UG);
insert(&table, &UH);
insert(&table, &UI);
insert(&table, &UJ);
insert(&table, &UK);
insert(&table, &UL);
insert(&table, &UM);
insert(&table, &UN);
insert(&table, &UO);
insert(&table, &UP);
insert(&table, &UQ);
insert(&table, &UR);
insert(&table, &US);
insert(&table, &UT);
insert(&table, &UU);
insert(&table, &UV);
insert(&table, &UW);
insert(&table, &UX);
insert(&table, &UY);
insert(&table, &UZ);
insert(&table, &VA);
insert(&table, &VB);
insert(&table, &VC);
insert(&table, &VD);
insert(&table, &VE);
insert(&table, &VF);
insert(&table, &VG);
insert(&table, &VH);
insert(&table, &VI);
insert(&table, &VJ);
insert(&table, &VK);
insert(&table, &VL);
insert(&table, &VM);
insert(&table, &VN);
insert(&table, &VO);
insert(&table, &VP);
insert(&table, &VQ);
insert(&table, &VR);
insert(&table, &VS);
insert(&table, &VT);
insert(&table, &VU);
insert(&table, &VV);
insert(&table, &VW);
insert(&table, &VX);
insert(&table, &VY);
insert(&table, &VZ);
insert(&table, &WA);
insert(&table, &WB);
insert(&table, &WC);
insert(&table, &WD);
insert(&table, &WE);
insert(&table, &WF);
insert(&table, &WG);
insert(&table, &WH);
insert(&table, &WI);
insert(&table, &WJ);
insert(&table, &WK);
insert(&table, &WL);
insert(&table, &WM);
insert(&table, &WN);
insert(&table, &WO);
insert(&table, &WP);
insert(&table, &WQ);
insert(&table, &WR);
insert(&table, &WS);
insert(&table, &WT);
insert(&table, &WU);
insert(&table, &WV);
insert(&table, &WW);
insert(&table, &WX);
insert(&table, &WY);
insert(&table, &WZ);
insert(&table, &XA);
insert(&table, &XB);
insert(&table, &XC);
insert(&table, &XD);
insert(&table, &XE);
insert(&table, &XF);
insert(&table, &XG);
insert(&table, &XH);
insert(&table, &XI);
insert(&table, &XJ);
insert(&table, &XK);
insert(&table, &XL);
insert(&table, &XM);
insert(&table, &XN);
insert(&table, &XO);
insert(&table, &XP);
insert(&table, &XQ);
insert(&table, &XR);
insert(&table, &XS);
insert(&table, &XT);
insert(&table, &XU);
insert(&table, &XV);
insert(&table, &XW);
insert(&table, &XX);
insert(&table, &XY);
insert(&table, &XZ);
insert(&table, &YA);
insert(&table, &YB);
insert(&table, &YC);
insert(&table, &YD);
insert(&table, &YE);
insert(&table, &YF);
insert(&table, &YG);
insert(&table, &YH);
insert(&table, &YI);
insert(&table, &YJ);
insert(&table, &YK);
insert(&table, &YL);
insert(&table, &YM);
insert(&table, &YN);
insert(&table, &YO);
insert(&table, &YP);
insert(&table, &YQ);
insert(&table, &YR);
insert(&table, &YS);
insert(&table, &YT);
insert(&table, &YU);
insert(&table, &YV);
insert(&table, &YW);
insert(&table, &YX);
insert(&table, &YY);
insert(&table, &YZ);
insert(&table, &ZA);
insert(&table, &ZB);
insert(&table, &ZC);
insert(&table, &ZD);
insert(&table, &ZE);
insert(&table, &ZF);
insert(&table, &ZG);
insert(&table, &ZH);
insert(&table, &ZI);
insert(&table, &ZJ);
insert(&table, &ZK);
insert(&table, &ZL);
insert(&table, &ZM);
insert(&table, &ZN);
insert(&table, &ZO);
insert(&table, &ZP);
insert(&table, &ZQ);
insert(&table, &ZR);
insert(&table, &ZS);
insert(&table, &ZT);
insert(&table, &ZU);
insert(&table, &ZV);
insert(&table, &ZW);
insert(&table, &ZX);
insert(&table, &ZY);
insert(&table, &ZZ);

	printf("botei todo mundo no hash\n");

   print_file_table(out, table);

entry_t *aux = lookup(table, "YE");
   printf("teste do lookup: YE %d %d %d\n\n", aux->type, aux->size, aux->desloc);
aux = lookup(table, "XN");
   printf("teste do lookup: XN %d %d %d\n\n", aux->type, aux->size, aux->desloc);

   fclose(out);
   free_table(&table);

	printf("tudo perfeito..\n");

	return 0;
}
