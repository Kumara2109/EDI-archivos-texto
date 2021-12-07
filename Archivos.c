#include<stdio.h>

int main()
{
    FILE *archivo;
    int cerrado;
    int alumnos, parciales;
    char nom [30];
    float calif[10], prom;


    archivo = fopen("tarea.txt", "w");

    printf("Cuantos alumnos tiene en su clase? \n");
    scanf("%d", &alumnos);

    printf("Cuantos parciales se llevaron a cabo? ");
    scanf("%d", &parciales);

    for (int i = 0; i < alumnos; i++)
    {
        prom = 0;

        printf("Nombre del alumno: ");
        scanf("%s", &nom);

        for (int j = 0; j < parciales; j++)
        {
            printf("Dame la calificacion del parcial %d: ", j+1);
            scanf("%f", &calif[j]);

            prom = prom + calif[j];
        }

        prom = prom/parciales;

        fprintf(archivo,  "%s %.2f \n", nom, prom);

        for (int j = 0; i < parciales; j++)
        {
            fprintf(archivo,  "%.2f", calif[j]);
        }



    }




    cerrado = fclose(archivo);

    if(cerrado == EOF)
    printf("El archivo no se cerro bien");



    return 0;
}
