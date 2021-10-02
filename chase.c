/*
Para finalizar o semestre de algoritmo, foi proposta a criação de um jogo baseado no jogo chase para atari, também conhecido como robots (pode ser encontrado mais facilmente
no google em javascript por esse nome) em linguagem C. 
Esse trabalho foi desenvolvido em duplas, sendo minha dupla a Maria Cecília Romão.
Instruções para o funcionamento do jogo na própria int main
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int TAM; 
int gameManager;
int safe, nivel;

//funcao chamada no início de cada nível
void Start(int mapa[TAM][TAM])
{
    int i, j;
    //restarta todas as posições da matriz com um 0 (espaço vazio)
    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++) 
        {          
                mapa[i][j] = 0;     
        }
    }
    for(i=0;i<TAM;i++){
      mapa[i][0]= 5;
    }
    return;
}

//função que posiciona o jogador no meio do jogo e os robos aleatoriamente pelo mapa a cada nível
void carregaNivel(int nivel, int mapa[TAM][TAM])
{
    int numeroRobos, x, y, posPlayer;


    Start(mapa);
    //posicionando o jogador no centro do campo
    posPlayer = TAM/2;
    mapa[posPlayer][posPlayer] = 1; 
    
    //posicionando robos pelo mapa
    numeroRobos = nivel + 3; 
    srand(time(NULL));
    for(int i = 1; i<numeroRobos;i++)
    {
        x = rand() % TAM;
        y = rand() % TAM;
        while(mapa[x][y]==2|| mapa[x][y]== 1 || mapa[x-1][y-1]== 1 || mapa[x-1][y]== 1 || mapa[x-1][y+1]== 1 || mapa[x][y-1]== 1 || mapa[x][y+1]== 1 || mapa[x+1][y-1]== 1 || mapa[x+1][y]== 1 || mapa[x+1][y+1]== 1 || y == 0)
        {
            x = rand() % TAM;
            y = rand() % TAM;
        }
        mapa[x][y]=2;
    }

    //define o número de teleportes seguros do nível
    safe = nivel; 

}

//função acionada para teletransportar o personagem
void teleporte(int mapa[TAM][TAM])
{
        int x, y;
        //procura pelo jogador e apaga sua posição
        for(x=0; x<TAM;x++){
            for(y=1;y<TAM;y++){
                if(mapa[x][y]==1) 
                mapa[x][y] = 0; 
            }
        }
        //seta uma nova posição aleatória
        srand(time(NULL));
        
        x = rand() % TAM;
        y = rand() % TAM;
        while(y==0) y = rand() % TAM;
        
        //caso tenha teleportes seguros, a posição do teleporte vai ser cuidadosamente calculada
    if (safe)
    {
        while(mapa[x][y]== 2 || mapa[x-1][y-1]== 2 || mapa[x-1][y]== 2 || mapa[x-1][y+1]== 2 || mapa[x][y-1]== 2 || mapa[x][y+1]== 2 || mapa[x+1][y-1]== 2 || mapa[x+1][y]== 2 || mapa[x+1][y+1]== 2 || mapa[x][y]==1 || mapa[x][y]==3 ){
        x = rand() % TAM;
        y = rand() % TAM;
        while(y==0) y = rand() % TAM;
        }
        mapa[x][y] = 1;	
        safe--;	
    } 
    else //caso não tenham teleportes seguros, o personagem pode ser teletransportado para qualquer lugar que esteja vazio ou com um robo.
    {
       
           x = rand() % TAM;
           y = rand() % TAM;
           while(y==0) y = rand() % TAM;
           if(mapa[x][y]==2) //se o jogador cair numa posição que já possui um robô, ele perde
           { 
              gameManager = -1; 
           }
           while(mapa[x][y]==1 || mapa[x][y]==3){
             x = rand() % TAM;
             y = rand() % TAM;
             while(y==0) y = rand() % TAM;
           }
       
       mapa[x][y] =1;
    }
}


void desenharMapa(int mapa[TAM][TAM])
{
    int i, j;
    //limpar console
    printf("\e[1;1H\e[2J");
    for(i=0;i<=((TAM*3+2)/2)-6;i++) printf("=");
    printf("||CHASE||");
    for(i=0;i<=((TAM*3+2)/2)-6;i++) printf("=");
    printf("\n");

    printf("Level: %d", nivel);
    for(i=0;i<TAM*3-23;i++) printf(" ");
    printf("Safe Teleport: %d\n", safe);

    //borda superior
    for(i=0;i<=TAM;i++)
    {
        printf("X  ");
    }
    printf("\n");


    for(i=0; i<TAM;i++)
    {
        for(j = 0; j<TAM; j++)
        {
            //imprime borda da esquerda
            /* if(j==0){
                printf("X ");
            } */

            //imprime regiao central do mapa
            switch(mapa[i][j])
            {
                case 0: printf("   "); //imprime espaço vazio
                    break;
                case 1: printf(" O "); //imprime personagem 
                    break; 
                case 2: printf(" R "); //imprime robo
                    break; 
                case 3: printf(" p "); //imprime pilha de escombros (tenha imaginação, pff)
                    break;
                case 5: printf("X "); //imprime a borda da esquerda
                    break;
            }
            //imprime borda da direita
            if(j==TAM-1)
            {
                printf(" X\n");
            }
        }
    }

    //borda inferior
    for(i=0;i<=TAM;i++)
    {
        printf("X  ");
    }
    printf("\n\a");

    printf("Instruções:\n");
    printf("Move UP: w / 8\n");
    printf("Move DOWN: s / 2\n");
    printf("Move LEFT: a / 4\n");
    printf("Move RIGHT: d / 6\n");
    printf("\n");    
    printf("Move UP/LEFT: q / 7\n");
    printf("Move UP/RIGHT: e / 9\n");
    printf("Move DOWN/LEFT: z / 1\n");
    printf("Move DOWN/RIGHT: x / 3\n");
    printf("\n");
    printf("Teleporte: t / 0\n");
    printf("\n"); 
    printf("Pressione ENTER após cada movimento selecionado\n"); 
    printf("\n"); 
}


void movimentoRobo(int mapa[TAM][TAM])
{
    int navMesh[TAM][TAM];
    int linhaPersonagem, colunaPersonagem;
    int novaLin, novaCol;
    int i, j;

    //inicializa a matriz auxiliar com os espaços vazios e as pilhas de escombros 
    for(i=0; i<TAM; i++){
        for(j=0;j<TAM;j++){
            navMesh[i][j] = 0;
            if(mapa[i][j]==3) navMesh[i][j] = 3; 
        }
    } 

    //Procura o jogador e armazena coordenadas em variáveis
    for(i=0; i<TAM; i++)
    {
        for(j=0;j<TAM;j++)
        {   

            if(mapa[i][j]==1){
                linhaPersonagem = i; 
                colunaPersonagem = j; 
                break;
            }
        }
    }
    
    //movendo o robô
    for(i=0; i<TAM; i++)
    {
        for(j=0;j<TAM;j++)
        {
            //encontra um robo
            if(mapa[i][j]==2)
            {   
                mapa[i][j] =0; 
                if(i!=linhaPersonagem)
                { 
                    if(i<linhaPersonagem)
                    {
                        novaLin= i+1; //se a linha do personagem for maior que a do robo (aumentar a linha do robo)
                    }else
                    {
                        novaLin= i-1; //se a linha do personagem for menor que a do robo (diminuir a linha do robo)
                    }
                }
                else
                {
                    novaLin = i; //se a linha do personagem for a mesma que a do robo, não mexer na linha
                }
                
                if(j!=colunaPersonagem) 
                {
                    if(j<colunaPersonagem) //se a coluna do personagem for maior que a do robo (aumentar a coluna do robo)
                    {
                        novaCol = j + 1;
                    }else   //se a coluna do personagem for menor que a do robo (diminuir a coluna do robo)
                    {
                        novaCol = j - 1;
                    }
                }
                else
                {
                    novaCol = j; //se a coluna do personagem for a mesma que a do robo, não mexer na coluna
                }
                
                if(mapa[novaLin][novaCol]==1){
                    gameManager = -1; //se o robo alcançar o jogador, o jogo finaliza
                }
                navMesh[novaLin][novaCol]+= 2;
            }
        }
    }

    //transfere informações da matriz auxilar para a principal
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            if(navMesh[i][j]>=3){
                mapa[i][j]=3; 
            }else if(navMesh[i][j]!=0){
                mapa[i][j]=2; 
            }
        }
    }
}

//Função que desloca o personagem
void draw(int deslocI, int deslocJ, int mapa[TAM][TAM])
{
    int i, j;
    
    for(i=0; i<TAM; i++)
    {
        for(j=0;j<TAM;j++)
        {
            if(mapa[i][j]==1)
            {
                break;
            }
        }
        if(mapa[i][j]==1)
        {
            break;
        }
    }
    mapa[i][j] = 0;

    //as bordas e a pilha bloqueiam omovimento do personagem
    if(i+deslocI<TAM && i+deslocI>=0 && mapa[i+deslocI][j+deslocJ] != 3) i+=deslocI;
    if(j+deslocJ<TAM && j+deslocJ>0 && mapa[i+deslocI][j+deslocJ] != 3) j+=deslocJ;
        
    mapa[i][j] = 1;
}

//Função que comanda o deslocamento do personagem de acordo com as entradas do teclado
void controlaPersonagem(int mapa[TAM][TAM]){
  char control, control2; 
  scanf("%c", &control);
  scanf("%*c");

  switch (control)
  {
    case 48: //0 
    case 116: //T
    case 84: //t
      teleporte(mapa); break; 
    case 49: //1
    case 122: //Z 
    case 90: //z move down/left
      draw(1,-1,mapa); break;
    case 50:  //2
    case 115: //S
    case 83: //s move down
      draw(1,0,mapa); break;
    case 51: //3
    case 120: //X
    case 88: //x move down/right
      draw(1,1,mapa); break;
    case 52: //4
    case 97: //A
    case 65: //a move left
      draw(0,-1,mapa); break;
    case 53: //5 no move
      draw(0,0,mapa); break;
    case 54: //6
    case 100: //D
    case 68: //d move right
      draw(0,1,mapa); break;
    case 55: //7
    case 113: //Q
    case 81: //q move up/left
      draw(-1,-1,mapa); break;
    case 56: //8
    case 119: //W
    case 87: //w move up
      draw(-1,0,mapa); break;
    case 57: //9
    case 101: //E
    case 69: //e move up/right
      draw(-1,1,mapa); break;
  }
}

//Função que gerencia o jogo, verificando o nível foi vencido
void judgeGame(int mapa[TAM][TAM])
{
    for(int i=0; i<TAM;i++){
      for(int j=0;j<TAM;j++){
        if(mapa[i][j]==2){
          gameManager = 0; 
          return;
        }
      }
    }
    gameManager = 1;
    return; 
}

     
int main() 
{
 
    nivel = 1; 

   
    printf("=====================CHASE======================\n");
    printf("Trabalho de Laboratório de Programação UFJF\n");
    printf("Maria Cecília Romão Santos\n");
    printf("Lucas Marins Ramalho de Lima\n\n");
    printf("Chase é um jogo em que o jogador (representado por\num O) deve fugir e desviar de robos assassinos (re-\npresentados por R) fazendo com que eles colidam um\ncom os outros. Para fugir, o jogador pode usar seu\nsuperpoder de teletransporte, mas o número de tele-\ntransportes seguros é limitado. O jogador vence o\nnível quando não existem robos restantes e perde\ncaso o robo o alcance!\nBoa sorte!\n\n");
    printf("Digite o tamanho do mapa do jogo (entre 10 e 30):\n\a");
    scanf("%d", &TAM);
    scanf("%*c");
    while(TAM>30 || TAM<10){
      printf("Número inválido, digite valor entre 10 e 30\n");
       scanf("%d", &TAM);
       scanf("%*c");
    }
    int mapa[TAM][TAM];
    printf("\nO jogo está pronto:\n");
    printf( "Pressione ENTER para começar!\n");
    scanf("%*c");
     //chama a funcao Start para comecar o jogo
    Start(mapa);

    
    while(gameManager!=-1)
    {
        carregaNivel(nivel,mapa);

        while(gameManager == 0)
        {
            desenharMapa(mapa);
            controlaPersonagem(mapa);
            movimentoRobo(mapa);
            if(gameManager != 0) break;
            else judgeGame(mapa);
        }

        if(gameManager == -1) break; 
        else{
            gameManager = 0; 
            desenharMapa(mapa);
            printf("PARABÉNS!PASSOU DE NÍVEL!"); 
            scanf("%*c");
        } 
     nivel++;
    }
    desenharMapa(mapa);
    printf("Perdeu o jogo... tadinho!");

    
    return 0;
}
