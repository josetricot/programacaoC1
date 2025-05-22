/* Com objetivo futuro de criar um aplicativo de rotas para transporte urbano, que visa acessibilidade e utiliza avisos sonoros,
criamos o algoritmo.

Trata-se de uma versão simplificada, compatível com o estudado até o momento no primeiro semestre do curso.

Um aplicativo de rotas, constantemente verifica a posição atual do veículo com relação ao destino, que no caso são os pontos de
parada. Pensando de uma forma simplificada, sempre haverá comparação entre dois pontos e será utilizada uma fórmula.

O algoritmo criado permite o cadastro de dois pontos com longitude e latitude, e caso a distância entre os dois pontos seja
menor que 100 metros emite um aviso sonoro. Ao final, o usuário tem a opção de sair ou continuar testando dois pontos.

Inicialmente pensamos em utilizar a fórmula Euclidiana. Porém, para utilizá-la, precisaríamos de medidas lineares.
Descobrimos a fórmula de Haversine, utilizada por sistemas de navegação modernos (leva em consideração a curvatura da Terra).
Utilizando a fórmula no algoritmo, conseguimos inserir os dados de latitudes e longitudes do Google Maps, por exemplo.
O Google Maps fornece dados de longitude e latitude em graus. O algoritmo converte os valores em graus para radianos durante o
cálculo, para obter a distância em metros (sem precisar de conversões adicionais para um sistema linear, como no caso do uso da
fórmula Euclidiana).

Instruções: No Google Maps, escolha um ponto, clique com o botão direito. A primeira opção que aparece são os dados de
localização longitude e latitude. Clique na informação com o botão esquerdo. Os dados serão copiados para área de transferência,
podendo ser colados no OnlineGDB, por exemplo, clicando Ctrl+Shift+V.

***O código, por padrão, foi feito para funcionar no OnlineGDB, mas ativando a linha 35, 106, 107, 108, funciona com avisos
sonoros adicionais, quando executado no formato .exe em um sistema Windows***

Preencha as informações no algoritmo e verifique a resposta gerada.

Exemplo de dados para serem inseridos:
Ponto 1: -30.00959673309183, -51.18936839365057
Ponto 2: -30.009707218271284, -51.18931735956996
Resposta: Distância 13.11 metros, aviso sonoro e mensagem para usuário.*/

#include <stdio.h>
#include <math.h>
//#include <windows.h> // Necessário para a função Beep (execução no computador) ativar quando usar versão .exe

// Definição de constantes
#define RAIO_TERRA 6371000.0f // Raio médio da Terra em metros
#define DISTANCIA_ALERTA 100.0f // Distância em metros para emitir alerta

int main() {
    // Declaração de variáveis para armazenar as coordenadas dos pontos
    float lat1, lon1, lat2, lon2;
    char continuar;
    char nomePonto1[100], nomePonto2[100];

	printf("%c", 7); //códigos antigos vide https://www.ascii-code.com/characters/control-characters
	
	printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+");
    printf("\nLinguagem de Programação I");
    printf("\nProjeto Rotas com Aviso Sonoro");
    printf("\nProf. Fabio Yoshimitsu Okuyama");
    printf("\nDiscentes: Gustavo Ferreira Bassani, José Athaualpa Kolesny Tricot");
    printf("\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"); 

    do {

        // Ponto 1
        printf("\n\nDigite um nome para o primeiro ponto: ");
        scanf(" %99[^\n]", nomePonto1);  // Lê até 99 caracteres ou encontrar \n - *Necessário p/ salvar espaço em nomes

        printf("Cole do Google Maps as coordenadas (em graus): ");
        scanf("%f, %f", &lat1, &lon1);
        while(getchar() != '\n'); // Limpa o buffer

        // Ponto 2
        printf("\nDigite um nome para o segundo ponto: ");
        scanf(" %99[^\n]", nomePonto2);

        printf("Cole do Google Maps as coordenadas (em graus): ");
        scanf("%f, %f", &lat2, &lon2);
        while(getchar() != '\n');

        // Conversão de graus para radianos
        lat1 = lat1 * M_PI / 180.0f;
        lon1 = lon1 * M_PI / 180.0f;
        lat2 = lat2 * M_PI / 180.0f;
        lon2 = lon2 * M_PI / 180.0f;

        // Cálculo das diferenças das coordenadas
        float delta_lat = lat2 - lat1;
        float delta_lon = lon2 - lon1;

        // Aplicação da fórmula de Haversine
        float a = sinf(delta_lat / 2) * sinf(delta_lat / 2) +
                  cosf(lat1) * cosf(lat2) *
                  sinf(delta_lon / 2) * sinf(delta_lon / 2);
        float c = 2 * atan2f(sqrtf(a), sqrtf(1 - a));
        float distancia = RAIO_TERRA * c;

        // Exibição do resultado
        printf("\nCalculando a distância entre %s e %s", nomePonto1, nomePonto2);
        fflush(stdout);

        for (int i = 0; i < 3; i++) {
        printf(".");
        fflush(stdout);
        for (volatile int j = 0; j < 700000000; j++) {} // Delay inline
        }
        printf("\n\nA distância entre os dois pontos é de %.2f metros.\n", distancia);

        // Verificação se a distância é menor ou igual a 100 metros
        if (distancia <= DISTANCIA_ALERTA) {
            printf("\nAviso: Você está a menos de %.2f metros do destino!\n", DISTANCIA_ALERTA);
            // Emitir aviso sonoro (ativar na versão .exe)
            //Beep(750, 300); // Frequência de 750 Hz por 300 milissegundos
            //Beep(750, 300); // Frequência de 750 Hz por 300 milissegundos
            //Beep(750, 300); // Frequência de 750 Hz por 300 milissegundos
            printf("%c", 7); // Alternativa de aviso sonomoro para usar no OnlineGDB
        }

        // Pergunta ao usuário se deseja continuar
        printf("\nDeseja calcular outra distância? (s/n): ");
        scanf(" %c", &continuar);
        while(getchar() != '\n'); // Limpa o buffer

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
