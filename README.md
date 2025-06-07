# Projekt na ocenę celującą z PM5

## Opis projektu

Projekt został wykonany w ramach przedmiotu jako zadanie na ocenę celującą. Składa się z czterech odzielnych programów konsolowych połączonych w jeden za pomocą menu. Każdy pomniejszy program napisany jest zgodnie z zasaadami programowania obiekowego w c++. Cały program kompilowany jest rozłącznie.

## Struktura projektu

Projekt składa się z następujących komponentów:

### 1. `pole.h` – Obliczanie pola prostokąta
Program pozwala wprowadzić długości boków prostokąta, oblicza pole i wyświetla wynik z dokładnością do dwóch miejsc po przecinku.

### 2. `pierwiastki.h` – Rozwiązywanie równania kwadratowego
Program odczytuje współczynniki a, b, c i rozwiązuje równanie kwadratowe typu `ax² + bx + c = 0` z wykorzystaniem instrukcji `switch`.

### 3. `tablica.h` – Tablica 10×10 z losowymi wartościami na przekątnej
Program losuje liczby od 0 do 9 na przekątnej tablicy 10×10, pozostałe pola wypełnia zerami, a następnie oblicza i wyświetla sumę przekątnej.

### 4. `sortowanie.h` – Sortowanie liczb
Program sortuje sześć liczb (stałych lub losowych) przy użyciu algorytmu quicksort i wyświetla wynik.

### 5. `main.cpp`
Zawiera:
- Menu z wyborem programu do uruchomienia
- Obsługę powrotu do menu głównego lub wyjścia z aplikacji

### 6. `Makefile`
Automatyczne konsolidowanie i kompilowanie projektu w jeden plik docelowy (exe). Zawiera również możliwość usuwania plików po skończeniu używania programu.

Bartłomiej Kaniewski 2G
