#include <stdio.h>
#include <windows.h>

int main (void) {
    int horas = 0;
    int minutos = 0;
    int segundos = 0;

    printf("Cronometro\n");

    while (1){
        printf("\r%02d:%02d:%02d", horas, minutos, segundos); // \r para retornar o cursor ao início da linha e %02d para formatar os números com dois dígitos
        fflush(stdout); // Garante que a saída seja exibida imediatamente
        Sleep(1000); // 1 Segundo

        segundos++; // Incrementa os segundos em +1
        if (segundos == 60) {
            segundos = 0;
            minutos++;
        }
        if (minutos == 60) {
            minutos = 0;
            horas++;
        }
    }
    return 0;
}