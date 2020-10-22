typedef struct lista Lista;

Lista* criarLista();
int liberarLista(Lista *li);

int tamanhoLista(Lista *li);
int vaziaLista(Lista *li);
int cheiaLista(Lista *li);

int inserirInicio(Lista *li, int dado);
int inserirOrdenada(Lista *li, int dado);
int inserirFinal(Lista *li, int dado);

int removerInicio(Lista *li);
int removerFinal(Lista *li);
int removerEspecifico(Lista *li, int dado);

int imprimirLista(Lista *li);

int buscaPosicao(Lista *li, int pos, int *dado);
int buscaDado(Lista *li, int dado, int *pos);



