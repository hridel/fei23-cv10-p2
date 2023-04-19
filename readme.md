# Příklad 2
## Dekompozice do více souborů

Pro potřeby tohoho příkladu vycházejte z [programu ze cvičení 9](https://github.com/hridel/fei23-cv09-p1).

Proveďte dekompozici souboru `main.c` tak, že vytvoříte nové soubory, které budou součástí projektu:

* `player.h` – bude obsahovat deklarace typu a funkcí vztahujících se k hráči NHL.
* `player.c` – bude obsahovat odpovídající definice.

Soubory použijte v hlavním soboru `main.c`.

Přidejte funkci pro hledání hráčů podle jména. Stačí zadat část jména a funkce vyhledá a vypíše odpovídající hráče.

Přidejte funkci pro zjednodušený výpis hráče na řádek. Funkce bude vypisovat naformátované jméno, tým, počet zápasů a počet bodů.
Funkci vhodně použijte.

---

### Užitečné

`strstr()` je case-sensitive funkce, což znamená, že rozlišuje mezi velkými a malými písmeny. Její deklarace je následující:

```c
char *strstr(const char *haystack, const char *needle);
```

Parametr `haystack` je ukazatel na řetězec, ve kterém se má hledat podřetězec `needle`. Funkce vrátí ukazatel na první výskyt podřetězce `needle` v řetězci `haystack`, nebo `NULL`, pokud podřetězec nebyl nalezen.

`strcasestr()` je case-insensitive funkce, což znamená, že nebere ohled na velikost písmen. Její deklarace je následující:

```c
char *strcasestr(const char *haystack, const char *needle);
```

Parametry `haystack` a `needle` mají stejný význam jako u funkce `strstr()`. Funkce `strcasestr()` také vrátí ukazatel na první výskyt podřetězce `needle` v řetězci `haystack`, ale je nerozlišující vůči velkým a malým písmenům, což znamená, že ignoruje jejich velikost při hledání.

Obě tyto funkce jsou součástí standardní knihovny jazyka C (`<string.h>`) a jsou užitečné pro vyhledávání podřetězců v textových řetězcích v programování.