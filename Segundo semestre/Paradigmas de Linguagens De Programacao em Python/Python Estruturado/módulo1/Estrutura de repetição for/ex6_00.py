texto = 'programção'
letra_para_contar = 'r'
contador = 0

for letra in texto:
    if letra == letra_para_contar:
        contatador += 1

print(f'A Letra {letra_para_contar} aparece {contador} vezes na plavra {texto} .')