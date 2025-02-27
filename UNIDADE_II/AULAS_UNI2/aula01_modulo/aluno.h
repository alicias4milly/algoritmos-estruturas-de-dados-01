/*arquivo cabeçalho para tipo  abstrato 
de dados(TAD)Aluno*/

/*tipo exportado*/
typedef struct aluno Aluno;

/*função que aloca dinâmicamente uma struct aluno na memoria*/
Aluno * aloca_aluno(void);

/*função para preencher uma struct Aluno. A função recebe um endereço para aluno*/
void preenche(Aluno * aluno);

/*função para imprimir uma struct Aluno. A função recebe um endereço para aluno e imprime os dados*/
void imprime(Aluno * aluno);