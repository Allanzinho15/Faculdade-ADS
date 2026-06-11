vnr = eval(input('digite um número: '))
print('valor digitado', vnr)
print('antes do if')
if vnr <= 100:
    print('entrou no if do 100')
elif vnr <= 500:
    print('entrou no elif do 500')
elif vnr <= 1000:
    print('entrou no elif do 1000')
else:
    print('entrou no else')
print('saiu do if')

