  
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

int main() {
  int accesso_consentito = 0;
  char password[4];
  
  printf("Password?\n");
  leggiStringa(password,3);

  if (strcmp(password, "abc") == 0)
    accesso_consentito = 1;
  if (accesso_consentito)
    printf("Accesso consentito\n");
  else
    printf("Accesso negato\n");
}