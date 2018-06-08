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
 int m,n=0;
 int tananho;
int* criar_matriz(int tamanho,int m, int n){
tamanho=m*n;
int v[tamanho];
return *v;

}
//int vet[];
adicionar(int tamanho, int v[], int linha, int coluna, int elem){
 int k= linha*(n-1)+coluna;
 v[k] = elem;
}

imprime(int tamanho,int v[]){
int i,j,z;
   for(i<tamanho;i++;){
        for(j<n;j++;){
        printf("%d ",&v[z]);
}
printf("\n");
}
}

int buscar(int v[] ,int linha, int coluna, int vet[]){
 int k= linha*(n-1)+coluna;
 return v[k];

}

int main(int argc, char** argv) {
 int v[tamanho]{0};
 adicionar(v,2,1,12);
  adicionar(v,1,2,40);
   adicionar(v,2,3,14);
 imprime()
    return (EXIT_SUCCESS);
}

