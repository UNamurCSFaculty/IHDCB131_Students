int main(void){
    printf("Age du garçon: ");
    float garçon;
    scanf("%i",garçon);
    printf("Age de la fille: ");
    float fille;
    scanf("%i",fille)


    if(garcon>18 || fille>18){
        printf("Mariage accepté.  Tout est en ordre.\n")
    }
    if(fille<18){
        printf("Mariage accepté.\n");
    }
    else{
        printf("Mariage refusé.\n");
    }
}
return 0;
}