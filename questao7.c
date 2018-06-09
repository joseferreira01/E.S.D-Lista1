/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: jose
 *
 * Created on 7 de Junho de 2018, 14:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
  int * pt;
 int m,n=0;
 int tananho;

void imprime(int v[],int tamanho);
void criar_matriz(tamanho);
void adicionar(int v[], int linha, int coluna, int elem);
int buscar(int linha, int coluna, int v[]);

int main(int argc, char** argv) {

 criar_matriz(tananho);
    adicionar(pt,2,1,12);
    adicionar(pt,1,2,40);
    adicionar(pt,2,3,14);
    imprime(pt,tananho);
    return (EXIT_SUCCESS);
}
void criar_matriz(tamanho){
int k=0;
    printf("\nDigite a dimensão M: ");
    scanf("%d", &m);
    printf("\nDigite a dimensão N: ");
    scanf("%d", &m);
    tamanho=m*n;
    int v[tamanho];
    pt =v;
    for(;k<tamanho;k++){
        v[k]=0;
    }
return*v;

}
//int vet[];
void adicionar(int v[], int linha, int coluna, int elem){
 int k=0;
    k = linha*(n-1)+coluna;
    v[k] = elem;
}

void imprime(int v[],int tamanho){
int i,j,z;
    for(i<tamanho;i++;){
        for(j<n;j++;){
            printf("%d ",&v[z]);
        }
        printf("\n");
    }
}

int buscar(int linha, int coluna, int v[]){
 int k=0;
    k= linha*(n-1)+coluna;
 return v[k];

}

