//inserir na posição K
int insere (struct tlista *lista, int valor, int k) {
int i;
if (lista->fim < MAX && 0 <= k && k <= lista->fim+1) {
int insere (struct tlista *lista, int valor, int k) {
int i;
if (lista->fim < MAX && 0 <= k && k <= lista->fim+1) {
 Função para a inserção de elemento na posição k:
if (lista->fim < MAX && 0 <= k && k <= lista->fim+1) {
for (i = lista->fim; i >= k; i--)
lista->elementos[i+1] = lista->elementos[i];
lista->fim++;
lista->elementos[k] = valor;
return valor;
}
return ERRO;
}



// remoção do elemento na posição K

int retira (struct tlista *lista, int k) {
int valor;
if (0 <= k && k <= lista->fim) {
int retira (struct tlista *lista, int k) {
int valor;
if (0 <= k && k <= lista->fim) {
 Função para a remoção do elemento da posição k:
if (0 <= k && k <= lista->fim) {
valor = lista->elementos[k];
for(; k < lista->fim; k++)
lista->elementos[k] = lista->elementos[k+1];
lista->fim--;
return valor;
}
return ERRO;
}
