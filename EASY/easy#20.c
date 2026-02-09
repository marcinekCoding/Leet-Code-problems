//ex nr 20 (easy)
//link : https://leetcode.com/problems/valid-parentheses/

bool isValid(char* s) {
    int size = strlen(s);
    if (size == 0) return true;

    // Używamy malloc, aby mieć pewność, że pamięć jest poprawnie przydzielona
    char* stos = (char*)malloc(size * sizeof(char));
    int top = -1; 

    for (int i = 0; i < size; i++) {
        // PUSH
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            top++;
            stos[top] = s[i];
        }
        // POP
        else {
            // Jeśli stos jest pusty, a mamy znak zamykający -> false
            if (top == -1) {
                return false;
            }

            char hill = stos[top];
            if ((s[i] == ')' && hill == '(') ||
                (s[i] == '}' && hill == '{') ||
                (s[i] == ']' && hill == '[')) {
                top--;
            } else {
                return false;
            }
        }
    }

    // Sprawdzamy czy stos pusty
    bool wynik = (top == -1);
    return wynik;
}

