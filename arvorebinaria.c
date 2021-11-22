// AULA UNIVERSP SOBRE ARVORES BINARIAS

#include <stdio.h>
#include <malloc.h>
#define true 1
#define false 0

typedef int bool;
typedef int TIPOCHAVE;

typedef struct aux{
  TIPOCHAVE chave;
  struct aux *esq, *dir;
} NO;
