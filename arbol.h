/*
Blanco Conde Luis Antonio
Rivas Gutiérrez Carlos Andres
Serratos Mendoza Santiago
 */
#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct arbol
{
	int numero;
	struct arbol *hijo_izquierda;
	struct arbol *padre;
	struct arbol *hijo_derecha;
	int altura;
};typedef struct arbol A;

short int Busca_nodo(A*raiz, int num);
void Busca_fin(A*inicio,int num,int h);
void leer_entrada(char string[100],A *inicio);
void inserta_dato(A **inicio,int num);


enum letras{ // forma de ordenar el arbol mediante las letras
	n0,o,m,q,g,z,t,y,k,c,n,x,d,b,root,j,w,p,aa,r,l,e,u,f,i,v,s,h	
};

///////////////////////////////////////////////////////////////////////////////////
void inserta_dato(A** inicio,int num)
{
	A *aux,*nuevo=NULL;
	//nuevo = NULL;
	aux = *inicio;
			if (!*inicio)
			{
				nuevo = (A*)malloc(sizeof(A));
				if (nuevo) {
				nuevo->altura = 0;
				nuevo->numero = num;
				nuevo->padre = NULL;
				nuevo->hijo_derecha = NULL;
				nuevo->hijo_izquierda = NULL;
				*inicio = nuevo;
				}
				else {
					exit(EXIT_FAILURE);
				}
			}
			else {
					Busca_fin(aux, num, 0);
			}
}
/////////////////////////////////////////////////////////////////////////////////////
void Busca_fin(A* inicio,int num,int h){
	if (inicio){
		if (inicio->numero >= num) {
			if (inicio->hijo_izquierda) {
				Busca_fin(inicio->hijo_izquierda, num, h + 1);
			}
			else {
				h++;
				inicio->hijo_izquierda = (A*)malloc(sizeof(A));
				if (inicio->hijo_izquierda) {
					inicio->hijo_izquierda->padre = inicio;
					inicio = inicio->hijo_izquierda;
					inicio->altura = h;
					inicio->hijo_derecha = NULL;
					inicio->hijo_izquierda = NULL;
					inicio->numero = num;
				}
			}
		}
		else {
			if (inicio->hijo_derecha) {
				Busca_fin(inicio->hijo_derecha, num, h + 1);
			}
			else {
				h++;
				inicio->hijo_derecha = (A*)malloc(sizeof(A));
				if (inicio->hijo_derecha) {
					inicio->hijo_derecha->padre = inicio;
					inicio = inicio->hijo_derecha;
					inicio->altura = h;
					inicio->hijo_derecha = NULL;
					inicio->hijo_izquierda = NULL;
					inicio->numero = num;
				}
			}
		}
	}
}
/////////////////////////////////////////////////////////////////////////////////////
short int Busca_nodo(A *raiz,int num) {
	A* inicio;
	inicio = raiz;;
	if (inicio) {
		if (inicio->numero == num) {
			printf("\n");
			return 1;
		}
		else {
			if (inicio->numero < num) {
				printf(".");
				Busca_nodo(inicio->hijo_derecha, num);
			}
			else {
				printf("-");
				Busca_nodo(inicio->hijo_izquierda, num);
			}
		}
	}
	else {
		return 0;
	}
}
///////////////////////////////////////////////////////////////////////////////
void manda_insert(A **inicio){
	inserta_dato(&(*inicio),root);
	inserta_dato(&(*inicio),t);
	inserta_dato(&(*inicio),e);
	inserta_dato(&(*inicio),m);
	inserta_dato(&(*inicio),n);
	inserta_dato(&(*inicio),aa);
	inserta_dato(&(*inicio),i);
	inserta_dato(&(*inicio),o);
	inserta_dato(&(*inicio),g);
	inserta_dato(&(*inicio),k);
	inserta_dato(&(*inicio),d);
	inserta_dato(&(*inicio),w);
	inserta_dato(&(*inicio),r);
	inserta_dato(&(*inicio),u);
	inserta_dato(&(*inicio),s);
	inserta_dato(&(*inicio),q);
	inserta_dato(&(*inicio),z);
	inserta_dato(&(*inicio),y);
	inserta_dato(&(*inicio),c);
	inserta_dato(&(*inicio),x);
	inserta_dato(&(*inicio),b);
	inserta_dato(&(*inicio),j);
	inserta_dato(&(*inicio),p);
	inserta_dato(&(*inicio),l);
	inserta_dato(&(*inicio),f);
	inserta_dato(&(*inicio),v);
	inserta_dato(&(*inicio),h);	

}
///////////////////////////////////////////////////////////////////////////////
void leer_entrada(char string[100],A *inicio){
int cont;
	for(cont = 0; cont < strlen(string); cont++)
	{
		switch (string[cont])
		{
		case 'a':case 'A':
			Busca_nodo(inicio,aa);
			break;
		case 'b':case 'B':
			Busca_nodo(inicio,b);
			break;
		case 'c':case 'C':
			Busca_nodo(inicio,c);
			break;
		case 'd':case 'D':
			Busca_nodo(inicio,d);
			break;
		case 'e':case 'E':
			Busca_nodo(inicio,e);
			break;
		case 'f':case 'F':
			Busca_nodo(inicio,f);
			break;
		case 'g':case 'G':
			Busca_nodo(inicio,g);
			break;
		case 'h':case 'H':
			Busca_nodo(inicio,h);
			break;
		case 'i':case 'I':
			Busca_nodo(inicio,i);
			break;
		case 'j':case 'J':
			Busca_nodo(inicio,j);
			break;
		case 'k':case 'K':
			Busca_nodo(inicio,k);
			break;
		case 'l':case 'L':
			Busca_nodo(inicio,l);
			break;
		case 'm':case 'M':
			Busca_nodo(inicio,m);
			break;
		case 'n':case 'N':
			Busca_nodo(inicio,n);
			break;
		case 'o':case 'O':
			Busca_nodo(inicio,o);
			break;
		case 'p':case 'P':
			Busca_nodo(inicio,p);
			break;
		case 'q':case 'Q':
			Busca_nodo(inicio,q);
			break;
		case 'r':case 'R':
			Busca_nodo(inicio,r);
			break;
		case 's':case 'S':
			Busca_nodo(inicio,s);
			break;
		case 't':case 'T':
			Busca_nodo(inicio,t);
			break;
		case 'u':case 'U':
			Busca_nodo(inicio,u);
			break;
		case 'v':case 'V':
			Busca_nodo(inicio,v);
			break;
		case 'w':case 'W':
			Busca_nodo(inicio,w);
			break;
		case 'x':case 'X':
			Busca_nodo(inicio,x);
			break;
		case 'y':case 'Y':
			Busca_nodo(inicio,y);
			break;
		case 'z':case 'Z':
			Busca_nodo(inicio,z);
			break;
		default:
			printf(" ");
			break;
		}
	}
}
///////////////////////////////////////////////////////////////////////////////
#endif