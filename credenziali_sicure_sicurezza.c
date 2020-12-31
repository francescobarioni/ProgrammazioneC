#include <stdio.h>
#include <string.h>

void leggiStringa(char* s, int lunghezza) {
  int c;
  char riga[81];
  fgets(riga, min(81, lunghezza + 1), stdin);
  if (riga[strlen(riga) - 1] != '\n')
    do {
      c = getchar();
    } while (c != EOF && c != '\n');
  sscanf(riga, "%s", s);
}

typedef struct {
  char password[16];
  char nome_utente[16];
} credenziali;

int main() {
  char pwd[16];
  credenziali c;
  printf("Nome utente?\n"); leggiStringa(c.nome_utente, 15);
  printf("Password?\n"); leggiStringa(c.password, 15);
  strcpy(pwd, "segreto");
  if (strcmp(c.password, pwd) == 0)
    printf("Accesso consentito per %s\n", c.nome_utente);
  else
    printf("Accesso negato per %s\n", c.nome_utente);
}