import os
msg = []
nome = input("nome: ")
while True:
    os.system('cls')

    if len(msg) > 0:
        for m in msg:
            print(m['nome'], "-", m['texto'])

    print("______________")
    
    texto = input("mensagem: ")
    if texto == "fim":
        break

    msg.append({
        "nome": nome,
        "texto": texto
    })