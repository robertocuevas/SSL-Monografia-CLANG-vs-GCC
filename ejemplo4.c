int* alocar(int n) {
    int* datos = malloc(sizeof(int) * n);
    if (n < 0)
        return NULL;
    for (int i = 0; i < n; i++)
        datos[i] = i * 2;
    return datos;
}

