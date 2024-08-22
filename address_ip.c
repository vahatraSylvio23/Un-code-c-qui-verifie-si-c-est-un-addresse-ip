#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct ip
{
    int a,b,c,d;
}ip;
void get_ip(char *argv ,ip *address);
void objet();
void verifie(ip address);
void usage(int argc ,char *argv);
int main(int argc ,char *argv[])
{
    char add_ip[100];
    ip address;
    usage(argc ,argv[0]);
    objet();
    get_ip(argv[1] ,&address);
    verifie(address);
    return 0;
}
void usage(int argc ,char *argv)
{
    if(argc==1)
    {
        fprintf(stderr,"Usage : %s xxx.xxx.xxx.xxx\n",argv);
        exit(EXIT_SUCCESS);
    }
    if( (argv[4] != '.') && (argv[8] != '.') && (argv[12] != '.'))
    {
        printf("Ce n'est pas un addresse ip \n");
        exit(EXIT_SUCCESS);
    }
}

void objet()
{
    printf("Verifie si c'est un address ip\n");
}

void get_ip(char *argv ,ip *address)
{
    sscanf(argv,"%d.%d.%d.%d\n",&address->a,&address->b,&address->c,&address->d);
    printf("%s\n",argv);
    if(address->a > 255 || address->b > 255 || address->c > 255 || address->d > 255]||address->a < 0 || address->b < 0 || address->c < 0 || address->d < 0 )
    {
        printf("Ce n'est pas un addresse ip\n");
        exit(EXIT_SUCCESS);
    }
}
void verifie(ip address)
{
    if(address.a >= 0 && address.a < 128)
    {
        printf("L'addresse ip est de class A \n");
    }

    else if(address.a >= 128 && address.a < 192)
    {
        printf("L'addresse ip est de class B \n");
    }

    else if(address.a >= 192 && address.a < 224)
    {
        printf("L'addresse ip est de class C \n");
    }

    else if(address.a >= 224 && address.a < 240)
    {
        printf("L'addresse ip est de class D \n");
    }

    else if(address.a >= 240 && address.a < 255)
    {
        printf("L'addresse ip est de class E \n");
    }
}
